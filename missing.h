#include <linux/list.h>
#include <net/mac80211.h>
#if LINUX_VERSION_CODE <= KERNEL_VERSION(3,5,7)
#define ETH_ALEN	6
static inline void eth_broadcast_addr(u8 *addr)
{
	memset(addr, 0xff, ETH_ALEN);
}
#endif
static inline void ether_addr_copy(u8 *dst, const u8 *src)
{
	u16 *a = (u16 *)dst;
	const u16 *b = (const u16 *)src;

	a[0] = b[0];
	a[1] = b[1];
	a[2] = b[2];
}
#if LINUX_VERSION_CODE <= KERNEL_VERSION(3,7,10)
#define IEEE80211_NUM_TIDS 16
#endif
#if LINUX_VERSION_CODE <= KERNEL_VERSION(3,9,11)
#define list_first_entry_or_null(ptr, type, member) ({ \
	struct list_head *head__ = (ptr); \
	struct list_head *pos__ = ACCESS_ONCE(head__->next); \
	pos__ != head__ ? list_entry(pos__, type, member) : NULL; \
})
#define IEEE80211_SCTL_SEQ		0xFFF0
#define IEEE80211_SEQ_TO_SN(seq)	(((seq) & IEEE80211_SCTL_SEQ) >> 4)
#endif
