/*
 * Copyright (c) 2019 dsafa22, All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */

#ifndef AIRPLAYSERVER_DNSSD_H
#define AIRPLAYSERVER_DNSSD_H

#include "dns_sd.h"
#ifdef __cplusplus
extern "C" {
#endif

#define DNSSD_ERROR_NOERROR       0
#define DNSSD_ERROR_OUTOFMEM      1
#define DNSSD_ERROR_NOSERVICE     2
#define DNSSD_ERROR_OTHER         3


typedef struct dnssd_s dnssd_t;

dnssd_t *dnssd_init(const char *name, const char *hw_addr, int hw_addr_len, int *error);

int dnssd_register_raop(dnssd_t *dnssd, unsigned short port);
int dnssd_register_airplay(dnssd_t *dnssd, unsigned short port);

void dnssd_unregister_raop(dnssd_t *dnssd);
void dnssd_unregister_airplay(dnssd_t *dnssd);

void dnssd_destroy(dnssd_t *dnssd);

#ifdef __cplusplus
}
#endif
#endif //AIRPLAYSERVER_DNSSD_H
