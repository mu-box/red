// -*- mode: c; tab-width: 4; indent-tabs-mode: 1; st-rulers: [70] -*-
// vim: ts=8 sw=8 ft=c noet

#ifndef RED_H
#define RED_H

#include "util/sds.h"

// todo: move this to autobuild
#define RED_VERSION 	"0.0.2"

/* Error codes */
#define RED_OK		0
#define RED_ERR	-1

/* Sensible defaults */
#define REDD_DEFAULT_ADDR	"127.0.0.1"
#define REDD_DEFAULT_PORT	4470

typedef struct config_s {
	sds		redd_ip;	/* host/ip of red instance */
	int		redd_port;	/* port of red instance */
	int		yaml_out;
	int		no_output;
} config_t;

extern config_t config;
extern int exit_code;

#endif
