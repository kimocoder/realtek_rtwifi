#include <linux/list.h>

#define ETH_ALEN	6
#define IEEE80211_SCTL_SEQ		0xFFF0

static inline void eth_broadcast_addr(u8 *addr)
{
	memset(addr, 0xff, ETH_ALEN);
}

static inline void ether_addr_copy(u8 *dst, const u8 *src)
{
	u16 *a = (u16 *)dst;
	const u16 *b = (const u16 *)src;

	a[0] = b[0];
	a[1] = b[1];
	a[2] = b[2];
}

#define list_first_entry_or_null(ptr, type, member) ({ \
	struct list_head *head__ = (ptr); \
	struct list_head *pos__ = READ_ONCE(head__->next); \
	pos__ != head__ ? list_entry(pos__, type, member) : NULL; \
})

#define IEEE80211_SEQ_TO_SN(seq)	(((seq) & IEEE80211_SCTL_SEQ) >> 4)

static inline void _ieee80211_hw_set(struct ieee80211_hw *hw,
                                     enum ieee80211_hw_flags flg)
{
    return set_bit(flg, hw->flags);
}

#define ieee80211_hw_set(hw, flg)    _ieee80211_hw_set(hw, IEEE80211_HW_##flg)