// -*- mode: c; tab-width: 4; indent-tabs-mode: 1; st-rulers: [70] -*-
// vim: ts=8 sw=8 ft=c noet

#ifndef IP_H
#define IP_H

#include <msgpack.h>

#include "util/sds.h"
#include "util/adlist.h"

typedef struct red_ip_s {
	sds ip_address;
} red_ip_t;

red_ip_t	*new_ip();
void		init_ip(red_ip_t *ip);
void		free_ip(red_ip_t *ip);

void		pack_ip(msgpack_packer *packer, red_ip_t *ip);
red_ip_t	*unpack_ip(msgpack_object object);
list		*unpack_ips(msgpack_object object);

#endif
