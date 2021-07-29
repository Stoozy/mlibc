
#include <errno.h>
#include <signal.h>
#include <bits/ensure.h>

#include <mlibc/posix-sysdeps.hpp>

int sigsuspend(const sigset_t *) {
	__ensure(!"sigsuspend() not implemented");
	__builtin_unreachable();
}

int pthread_sigmask(int how, const sigset_t *__restrict set, sigset_t *__restrict retrieve) {
	if(!mlibc::sys_sigprocmask) {
		MLIBC_MISSING_SYSDEP();
		return ENOSYS;
	}
	if(int e = mlibc::sys_sigprocmask(how, set, retrieve); e) {
		return e;
	}
	return 0;
}

int pthread_kill(pthread_t, int) {
	__ensure(!"pthread_kill() not implemented");
	__builtin_unreachable();
}

int sigaction(int signum, const struct sigaction *__restrict act, struct sigaction *__restrict oldact) {
	if(!mlibc::sys_sigaction) {
		MLIBC_MISSING_SYSDEP();
		errno = ENOSYS;
		return -1;
	}
	if(int e = mlibc::sys_sigaction(signum, act, oldact); e) {
		errno = e;
		return -1;
	}
	return 0;
}

int siginterrupt(int sig, int flag) {
    int ret;
    struct sigaction act;

    sigaction(sig, NULL, &act);
    if (flag)
        act.sa_flags &= ~SA_RESTART;
    else
        act.sa_flags |= SA_RESTART;

    ret = sigaction(sig, &act, NULL);
    return ret;
}

int kill(pid_t pid, int number) {
	if(!mlibc::sys_kill) {
		MLIBC_MISSING_SYSDEP();
		errno = ENOSYS;
		return -1;
	}
	if(int e = mlibc::sys_kill(pid, number); e) {
		errno = e;
		return -1;
	}
	return 0;
}

int killpg(int, int) {
	__ensure(!"killpg() not implemented");
	__builtin_unreachable();
}

int sigtimedwait(const sigset_t *, siginfo_t *, const struct timespec *) {
	__ensure(!"sigtimedwait() not implemented");
	__builtin_unreachable();
}

int sigwait(const sigset_t *, int *) {
	__ensure(!"sigwait() not implemented");
	__builtin_unreachable();
}

int sigpending(sigset_t *) {
	__ensure(!"sigpending() not implemented");
	__builtin_unreachable();
}

int sigaltstack(const stack_t *__restrict ss, stack_t *__restrict oss) {
	if (!mlibc::sys_sigaltstack) {
		MLIBC_MISSING_SYSDEP();
		errno = ENOSYS;
		return -1;
	}

	if (ss && ss->ss_size < MINSIGSTKSZ && !(ss->ss_flags & SS_DISABLE)) {
		errno = ENOMEM;
		return -1;
	}

	if (int e = mlibc::sys_sigaltstack(ss, oss); e) {
		errno = e;
		return -1;
	}

	return 0;
}
