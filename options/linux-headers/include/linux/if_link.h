#ifndef _LINUX_IF_LINK_H
#define _LINUX_IF_LINK_H

#ifdef __cplusplus
extern "C" {
#endif

#include <linux/types.h>
#include <stdint.h>

struct rtnl_link_stats {
	uint32_t rx_packets;
	uint32_t tx_packets;
	uint32_t rx_bytes;
	uint32_t tx_bytes;
	uint32_t rx_errors;
	uint32_t tx_errors;
	uint32_t rx_dropped;
	uint32_t tx_dropped;
	uint32_t multicast;
	uint32_t collisions;

	uint32_t rx_length_errors;
	uint32_t rx_over_errors;
	uint32_t rx_crc_errors;
	uint32_t rx_frame_errors;
	uint32_t rx_fifo_errors;
	uint32_t rx_missed_errors;

	uint32_t tx_aborted_errors;
	uint32_t tx_carrier_errors;
	uint32_t tx_fifo_errors;
	uint32_t tx_heartbeat_errors;
	uint32_t tx_window_errors;

	uint32_t rx_compressed;
	uint32_t tx_compressed;

	uint32_t rx_nohandler;
};

struct rtnl_link_stats64 {
	uint64_t rx_packets;
	uint64_t tx_packets;
	uint64_t rx_bytes;
	uint64_t tx_bytes;
	uint64_t rx_errors;
	uint64_t tx_errors;
	uint64_t rx_dropped;
	uint64_t tx_dropped;
	uint64_t multicast;
	uint64_t collisions;

	uint64_t rx_length_errors;
	uint64_t rx_over_errors;
	uint64_t rx_crc_errors;
	uint64_t rx_frame_errors;
	uint64_t rx_fifo_errors;
	uint64_t rx_missed_errors;

	uint64_t tx_aborted_errors;
	uint64_t tx_carrier_errors;
	uint64_t tx_fifo_errors;
	uint64_t tx_heartbeat_errors;
	uint64_t tx_window_errors;

	uint64_t rx_compressed;
	uint64_t tx_compressed;
	uint64_t rx_nohandler;
};

enum {
	IFLA_UNSPEC,
	IFLA_ADDRESS,
	IFLA_BROADCAST,
	IFLA_IFNAME,
	IFLA_MTU,
	IFLA_LINK,
	IFLA_QDISC,
	IFLA_STATS,
	IFLA_COST,
#define IFLA_COST IFLA_COST
	IFLA_PRIORITY,
#define IFLA_PRIORITY IFLA_PRIORITY
	IFLA_MASTER,
#define IFLA_MASTER IFLA_MASTER
	IFLA_WIRELESS,
#define IFLA_WIRELESS IFLA_WIRELESS
	IFLA_PROTINFO,
#define IFLA_PROTINFO IFLA_PROTINFO
	IFLA_TXQLEN,
#define IFLA_TXQLEN IFLA_TXQLEN
	IFLA_MAP,
#define IFLA_MAP IFLA_MAP
	IFLA_WEIGHT,
#define IFLA_WEIGHT IFLA_WEIGHT
	IFLA_OPERSTATE,
	IFLA_LINKMODE,
	IFLA_LINKINFO,
#define IFLA_LINKINFO IFLA_LINKINFO
	IFLA_NET_NS_PID,
	IFLA_IFALIAS,
	IFLA_NUM_VF,
	IFLA_VFINFO_LIST,
	IFLA_STATS64,
	IFLA_VF_PORTS,
	IFLA_PORT_SELF,
	IFLA_AF_SPEC,
	IFLA_GROUP,
	IFLA_NET_NS_FD,
	IFLA_EXT_MASK,
	IFLA_PROMISCUITY,
#define IFLA_PROMISCUITY IFLA_PROMISCUITY
	IFLA_NUM_TX_QUEUES,
	IFLA_NUM_RX_QUEUES,
	IFLA_CARRIER,
	IFLA_PHYS_PORT_ID,
	IFLA_CARRIER_CHANGES,
	IFLA_PHYS_SWITCH_ID,
	IFLA_LINK_NETNSID,
	IFLA_PHYS_PORT_NAME,
	IFLA_PROTO_DOWN,
	IFLA_GSO_MAX_SEGS,
	IFLA_GSO_MAX_SIZE,
	IFLA_PAD,
	IFLA_XDP,
	IFLA_EVENT,
	IFLA_NEW_NETNSID,
	IFLA_IF_NETNSID,
	IFLA_TARGET_NETNSID = IFLA_IF_NETNSID,
	IFLA_CARRIER_UP_COUNT,
	IFLA_CARRIER_DOWN_COUNT,
	IFLA_NEW_IFINDEX,
	IFLA_MIN_MTU,
	IFLA_MAX_MTU,
	IFLA_PROP_LIST,
	IFLA_ALT_IFNAME,
	IFLA_PERM_ADDRESS,
	IFLA_PROTO_DOWN_REASON,

	IFLA_PARENT_DEV_NAME,
	IFLA_PARENT_DEV_BUS_NAME,
	__IFLA_MAX
};

#define IFLA_MAX (__IFLA_MAX - 1)

enum {
	IFLA_INET6_UNSPEC,
	IFLA_INET6_FLAGS,
	IFLA_INET6_CONF,
	IFLA_INET6_STATS,
	IFLA_INET6_MCAST,
	IFLA_INET6_CACHEINFO,
	IFLA_INET6_ICMP6STATS,
	IFLA_INET6_TOKEN,
	IFLA_INET6_ADDR_GEN_MODE,
	IFLA_INET6_RA_MTU,
	__IFLA_INET6_MAX
};

enum {
	IFLA_VF_INFO_UNSPEC,
	IFLA_VF_INFO,
	__IFLA_VF_INFO_MAX,
};

#define IFLA_VF_INFO_MAX (__IFLA_VF_INFO_MAX - 1)

enum {
	IFLA_INFO_UNSPEC,
	IFLA_INFO_KIND,
	IFLA_INFO_DATA,
	IFLA_INFO_XSTATS,
	IFLA_INFO_SLAVE_KIND,
	IFLA_INFO_SLAVE_DATA,
	__IFLA_INFO_MAX,
};

#define IFLA_INFO_MAX	(__IFLA_INFO_MAX - 1)

enum {
	IFLA_BAREUDP_UNSPEC,
	IFLA_BAREUDP_PORT,
	IFLA_BAREUDP_ETHERTYPE,
	IFLA_BAREUDP_SRCPORT_MIN,
	IFLA_BAREUDP_MULTIPROTO_MODE,
	__IFLA_BAREUDP_MAX
};

#define IFLA_BAREUDP_MAX (__IFLA_BAREUDP_MAX - 1)

enum {
	IFLA_XFRM_UNSPEC,
	IFLA_XFRM_LINK,
	IFLA_XFRM_IF_ID,
	__IFLA_XFRM_MAX
};

#define IFLA_XFRM_MAX (__IFLA_XFRM_MAX - 1)

enum {
	IFLA_MACSEC_UNSPEC,
	IFLA_MACSEC_SCI,
	IFLA_MACSEC_PORT,
	IFLA_MACSEC_ICV_LEN,
	IFLA_MACSEC_CIPHER_SUITE,
	IFLA_MACSEC_WINDOW,
	IFLA_MACSEC_ENCODING_SA,
	IFLA_MACSEC_ENCRYPT,
	IFLA_MACSEC_PROTECT,
	IFLA_MACSEC_INC_SCI,
	IFLA_MACSEC_ES,
	IFLA_MACSEC_SCB,
	IFLA_MACSEC_REPLAY_PROTECT,
	IFLA_MACSEC_VALIDATION,
	IFLA_MACSEC_PAD,
	IFLA_MACSEC_OFFLOAD,
	__IFLA_MACSEC_MAX,
};

#define IFLA_MACSEC_MAX (__IFLA_MACSEC_MAX - 1)

enum {
	IFLA_GENEVE_UNSPEC,
	IFLA_GENEVE_ID,
	IFLA_GENEVE_REMOTE,
	IFLA_GENEVE_TTL,
	IFLA_GENEVE_TOS,
	IFLA_GENEVE_PORT,
	IFLA_GENEVE_COLLECT_METADATA,
	IFLA_GENEVE_REMOTE6,
	IFLA_GENEVE_UDP_CSUM,
	IFLA_GENEVE_UDP_ZERO_CSUM6_TX,
	IFLA_GENEVE_UDP_ZERO_CSUM6_RX,
	IFLA_GENEVE_LABEL,
	IFLA_GENEVE_TTL_INHERIT,
	IFLA_GENEVE_DF,
	IFLA_GENEVE_INNER_PROTO_INHERIT,
	__IFLA_GENEVE_MAX
};
#define IFLA_GENEVE_MAX	(__IFLA_GENEVE_MAX - 1)

enum {
	IFLA_VRF_UNSPEC,
	IFLA_VRF_TABLE,
	__IFLA_VRF_MAX
};

#define IFLA_VRF_MAX (__IFLA_VRF_MAX - 1)

enum {
	IFLA_BOND_UNSPEC,
	IFLA_BOND_MODE,
	IFLA_BOND_ACTIVE_SLAVE,
	IFLA_BOND_MIIMON,
	IFLA_BOND_UPDELAY,
	IFLA_BOND_DOWNDELAY,
	IFLA_BOND_USE_CARRIER,
	IFLA_BOND_ARP_INTERVAL,
	IFLA_BOND_ARP_IP_TARGET,
	IFLA_BOND_ARP_VALIDATE,
	IFLA_BOND_ARP_ALL_TARGETS,
	IFLA_BOND_PRIMARY,
	IFLA_BOND_PRIMARY_RESELECT,
	IFLA_BOND_FAIL_OVER_MAC,
	IFLA_BOND_XMIT_HASH_POLICY,
	IFLA_BOND_RESEND_IGMP,
	IFLA_BOND_NUM_PEER_NOTIF,
	IFLA_BOND_ALL_SLAVES_ACTIVE,
	IFLA_BOND_MIN_LINKS,
	IFLA_BOND_LP_INTERVAL,
	IFLA_BOND_PACKETS_PER_SLAVE,
	IFLA_BOND_AD_LACP_RATE,
	IFLA_BOND_AD_SELECT,
	IFLA_BOND_AD_INFO,
	IFLA_BOND_AD_ACTOR_SYS_PRIO,
	IFLA_BOND_AD_USER_PORT_KEY,
	IFLA_BOND_AD_ACTOR_SYSTEM,
	IFLA_BOND_TLB_DYNAMIC_LB,
	IFLA_BOND_PEER_NOTIF_DELAY,
	IFLA_BOND_AD_LACP_ACTIVE,
	IFLA_BOND_MISSED_MAX,
	IFLA_BOND_NS_IP6_TARGET,
	__IFLA_BOND_MAX,
};

#define IFLA_BOND_MAX	(__IFLA_BOND_MAX - 1)

enum {
	IFLA_BR_UNSPEC,
	IFLA_BR_FORWARD_DELAY,
	IFLA_BR_HELLO_TIME,
	IFLA_BR_MAX_AGE,
	IFLA_BR_AGEING_TIME,
	IFLA_BR_STP_STATE,
	IFLA_BR_PRIORITY,
	IFLA_BR_VLAN_FILTERING,
	IFLA_BR_VLAN_PROTOCOL,
	IFLA_BR_GROUP_FWD_MASK,
	IFLA_BR_ROOT_ID,
	IFLA_BR_BRIDGE_ID,
	IFLA_BR_ROOT_PORT,
	IFLA_BR_ROOT_PATH_COST,
	IFLA_BR_TOPOLOGY_CHANGE,
	IFLA_BR_TOPOLOGY_CHANGE_DETECTED,
	IFLA_BR_HELLO_TIMER,
	IFLA_BR_TCN_TIMER,
	IFLA_BR_TOPOLOGY_CHANGE_TIMER,
	IFLA_BR_GC_TIMER,
	IFLA_BR_GROUP_ADDR,
	IFLA_BR_FDB_FLUSH,
	IFLA_BR_MCAST_ROUTER,
	IFLA_BR_MCAST_SNOOPING,
	IFLA_BR_MCAST_QUERY_USE_IFADDR,
	IFLA_BR_MCAST_QUERIER,
	IFLA_BR_MCAST_HASH_ELASTICITY,
	IFLA_BR_MCAST_HASH_MAX,
	IFLA_BR_MCAST_LAST_MEMBER_CNT,
	IFLA_BR_MCAST_STARTUP_QUERY_CNT,
	IFLA_BR_MCAST_LAST_MEMBER_INTVL,
	IFLA_BR_MCAST_MEMBERSHIP_INTVL,
	IFLA_BR_MCAST_QUERIER_INTVL,
	IFLA_BR_MCAST_QUERY_INTVL,
	IFLA_BR_MCAST_QUERY_RESPONSE_INTVL,
	IFLA_BR_MCAST_STARTUP_QUERY_INTVL,
	IFLA_BR_NF_CALL_IPTABLES,
	IFLA_BR_NF_CALL_IP6TABLES,
	IFLA_BR_NF_CALL_ARPTABLES,
	IFLA_BR_VLAN_DEFAULT_PVID,
	IFLA_BR_PAD,
	IFLA_BR_VLAN_STATS_ENABLED,
	IFLA_BR_MCAST_STATS_ENABLED,
	IFLA_BR_MCAST_IGMP_VERSION,
	IFLA_BR_MCAST_MLD_VERSION,
	IFLA_BR_VLAN_STATS_PER_PORT,
	IFLA_BR_MULTI_BOOLOPT,
	IFLA_BR_MCAST_QUERIER_STATE,
	__IFLA_BR_MAX,
};

#define IFLA_BR_MAX	(__IFLA_BR_MAX - 1)

enum {
	IFLA_MACVLAN_UNSPEC,
	IFLA_MACVLAN_MODE,
	IFLA_MACVLAN_FLAGS,
	IFLA_MACVLAN_MACADDR_MODE,
	IFLA_MACVLAN_MACADDR,
	IFLA_MACVLAN_MACADDR_DATA,
	IFLA_MACVLAN_MACADDR_COUNT,
	IFLA_MACVLAN_BC_QUEUE_LEN,
	IFLA_MACVLAN_BC_QUEUE_LEN_USED,
	__IFLA_MACVLAN_MAX,
};

#define IFLA_MACVLAN_MAX (__IFLA_MACVLAN_MAX - 1)

enum {
	IFLA_IPVLAN_UNSPEC,
	IFLA_IPVLAN_MODE,
	IFLA_IPVLAN_FLAGS,
	__IFLA_IPVLAN_MAX
};

#define IFLA_IPVLAN_MAX (__IFLA_IPVLAN_MAX - 1)

enum {
	IFLA_BRPORT_UNSPEC,
	IFLA_BRPORT_STATE,
	IFLA_BRPORT_PRIORITY,
	IFLA_BRPORT_COST,
	IFLA_BRPORT_MODE,
	IFLA_BRPORT_GUARD,
	IFLA_BRPORT_PROTECT,
	IFLA_BRPORT_FAST_LEAVE,
	IFLA_BRPORT_LEARNING,
	IFLA_BRPORT_UNICAST_FLOOD,
	IFLA_BRPORT_PROXYARP,
	IFLA_BRPORT_LEARNING_SYNC,
	IFLA_BRPORT_PROXYARP_WIFI,
	IFLA_BRPORT_ROOT_ID,
	IFLA_BRPORT_BRIDGE_ID,
	IFLA_BRPORT_DESIGNATED_PORT,
	IFLA_BRPORT_DESIGNATED_COST,
	IFLA_BRPORT_ID,
	IFLA_BRPORT_NO,
	IFLA_BRPORT_TOPOLOGY_CHANGE_ACK,
	IFLA_BRPORT_CONFIG_PENDING,
	IFLA_BRPORT_MESSAGE_AGE_TIMER,
	IFLA_BRPORT_FORWARD_DELAY_TIMER,
	IFLA_BRPORT_HOLD_TIMER,
	IFLA_BRPORT_FLUSH,
	IFLA_BRPORT_MULTICAST_ROUTER,
	IFLA_BRPORT_PAD,
	IFLA_BRPORT_MCAST_FLOOD,
	IFLA_BRPORT_MCAST_TO_UCAST,
	IFLA_BRPORT_VLAN_TUNNEL,
	IFLA_BRPORT_BCAST_FLOOD,
	IFLA_BRPORT_GROUP_FWD_MASK,
	IFLA_BRPORT_NEIGH_SUPPRESS,
	IFLA_BRPORT_ISOLATED,
	IFLA_BRPORT_BACKUP_PORT,
	IFLA_BRPORT_MRP_RING_OPEN,
	IFLA_BRPORT_MRP_IN_OPEN,
	IFLA_BRPORT_MCAST_EHT_HOSTS_LIMIT,
	IFLA_BRPORT_MCAST_EHT_HOSTS_CNT,
	IFLA_BRPORT_LOCKED,
	__IFLA_BRPORT_MAX
};
#define IFLA_BRPORT_MAX (__IFLA_BRPORT_MAX - 1)

enum {
	IFLA_VXLAN_UNSPEC,
	IFLA_VXLAN_ID,
	IFLA_VXLAN_GROUP,
	IFLA_VXLAN_LINK,
	IFLA_VXLAN_LOCAL,
	IFLA_VXLAN_TTL,
	IFLA_VXLAN_TOS,
	IFLA_VXLAN_LEARNING,
	IFLA_VXLAN_AGEING,
	IFLA_VXLAN_LIMIT,
	IFLA_VXLAN_PORT_RANGE,
	IFLA_VXLAN_PROXY,
	IFLA_VXLAN_RSC,
	IFLA_VXLAN_L2MISS,
	IFLA_VXLAN_L3MISS,
	IFLA_VXLAN_PORT,
	IFLA_VXLAN_GROUP6,
	IFLA_VXLAN_LOCAL6,
	IFLA_VXLAN_UDP_CSUM,
	IFLA_VXLAN_UDP_ZERO_CSUM6_TX,
	IFLA_VXLAN_UDP_ZERO_CSUM6_RX,
	IFLA_VXLAN_REMCSUM_TX,
	IFLA_VXLAN_REMCSUM_RX,
	IFLA_VXLAN_GBP,
	IFLA_VXLAN_REMCSUM_NOPARTIAL,
	IFLA_VXLAN_COLLECT_METADATA,
	IFLA_VXLAN_LABEL,
	IFLA_VXLAN_GPE,
	IFLA_VXLAN_TTL_INHERIT,
	IFLA_VXLAN_DF,
	IFLA_VXLAN_VNIFILTER,
	__IFLA_VXLAN_MAX
};
#define IFLA_VXLAN_MAX	(__IFLA_VXLAN_MAX - 1)

struct ifla_vf_mac {
	uint32_t vf;
	uint8_t mac[32];
};

enum {
    IFLA_VLAN_UNSPEC,
    IFLA_VLAN_ID,
    IFLA_VLAN_FLAGS,
    IFLA_VLAN_EGRESS_QOS,
    IFLA_VLAN_INGRESS_QOS,
    IFLA_VLAN_PROTOCOL,
    __IFLA_VLAN_MAX,
};

#define IFLA_VLAN_MAX (__IFLA_VLAN_MAX - 1)

struct ifla_vlan_flags {
    uint32_t flags;
    uint32_t mask;
};

enum {
    IFLA_VLAN_QOS_UNSPEC,
    IFLA_VLAN_QOS_MAPPING,
    __IFLA_VLAN_QOS_MAX
};

#define IFLA_VLAN_QOS_MAX (__IFLA_VLAN_QOS_MAX - 1)

struct ifla_vlan_qos_mapping {
    uint32_t from;
    uint32_t to;
};

enum {
	IFLA_VF_UNSPEC,
	IFLA_VF_MAC,
	IFLA_VF_VLAN,
	IFLA_VF_TX_RATE,
	IFLA_VF_SPOOFCHK,
	IFLA_VF_LINK_STATE,
	IFLA_VF_RATE,
	IFLA_VF_RSS_QUERY_EN,
	IFLA_VF_STATS,
	IFLA_VF_TRUST,
	IFLA_VF_IB_NODE_GUID,
	IFLA_VF_IB_PORT_GUID,
	IFLA_VF_VLAN_LIST,
	IFLA_VF_BROADCAST,
	__IFLA_VF_MAX,
};

#define IFLA_VF_MAX (__IFLA_VF_MAX - 1)

struct ifla_vf_tx_rate {
	uint32_t vf;
	uint32_t rate;
};

struct ifla_vf_rate {
	uint32_t vf;
	uint32_t min_tx_rate;
	uint32_t max_tx_rate;
};

struct ifla_vf_spoofchk {
	uint32_t vf;
	uint32_t setting;
};

struct ifla_vf_guid {
	uint32_t vf;
	uint64_t guid;
};

struct ifla_vf_link_state {
	uint32_t vf;
	uint32_t link_state;
};

struct ifla_vf_rss_query_en {
	uint32_t vf;
	uint32_t setting;
};

struct ifla_vf_trust {
	uint32_t vf;
	uint32_t setting;
};

struct ifla_vf_vlan {
	uint32_t vf;
	uint32_t vlan;
	uint32_t qos;
};

enum {
	IFLA_VF_VLAN_INFO_UNSPEC,
	IFLA_VF_VLAN_INFO,
	__IFLA_VF_VLAN_INFO_MAX,
};

struct ifla_vf_vlan_info {
	uint32_t vf;
	uint32_t vlan;
	uint32_t qos;
	uint16_t vlan_proto;
};

#ifdef __cplusplus
}
#endif

#endif
