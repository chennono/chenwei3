/* /adj_table/adj.h */
#ifndef _ADJ_H_
#define _ADJ_H_

#include "list.h"

struct adj_table {
    char str_vrf[32 + 1];
    char str_ip[16 + 1];
    char str_mac[16 + 1];
    char str_vid[4 + 1];
    char str_interface[32 + 1];
	struct list_head list;
};

/* body of adj.h */
#endif /* _ADJ_H_ */
