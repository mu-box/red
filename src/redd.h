// -*- mode: c; tab-width: 4; indent-tabs-mode: 1; st-rulers: [70] -*-
// vim: ts=8 sw=8 ft=c noet

#ifndef REDD_H
#define REDD_H

#include <msgxchng.h>

typedef void (*redd_callback)(msgxchng_response_t *res, int status);

void redd_request(msgxchng_request_t *req, redd_callback cb);

#endif
