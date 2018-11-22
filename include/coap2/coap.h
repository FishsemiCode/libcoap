/*
 * coap.h -- main header file for CoAP stack of libcoap
 *
 * Copyright (C) 2010-2012,2015-2016 Olaf Bergmann <bergmann@tzi.org>
 *               2015 Carsten Schoenert <c.schoenert@t-online.de>
 *
 * This file is part of the CoAP library libcoap. Please see README for terms
 * of use.
 */

#ifndef _COAP_H_
#define _COAP_H_

#include "libcoap.h"

/* Define the address where bug reports for libcoap should be sent. */
#define LIBCOAP_PACKAGE_BUGREPORT "libcoap-developers@lists.sourceforge.net"

/* Define the full name of libcoap. */
#define LIBCOAP_PACKAGE_NAME "libcoap"

/* Define the full name and version of libcoap. */
#define LIBCOAP_PACKAGE_STRING libcoap "4.1.2"

/* Define the home page for libcoap. */
#define LIBCOAP_PACKAGE_URL "https://libcoap.net/"

/* Define the version of libcoap this file belongs to. */
#define LIBCOAP_PACKAGE_VERSION "4.1.2"

#ifdef __cplusplus
extern "C" {
#endif

#include "coap2/coap_config.h"
#include "coap2/address.h"
#include "coap2/async.h"
#include "coap2/bits.h"
#include "coap2/block.h"
#include "coap2/coap_io.h"
#include "coap2/coap_time.h"
#include "coap2/debug.h"
#include "coap2/encode.h"
#include "coap2/mem.h"
#include "coap2/net.h"
#include "coap2/option.h"
#include "coap2/pdu.h"
#include "coap2/prng.h"
#include "coap2/resource.h"
#include "coap2/str.h"
#include "coap2/subscribe.h"
#include "coap2/uri.h"
#include "coap2/uthash.h"
#include "coap2/utlist.h"

#ifdef __cplusplus
}
#endif

#endif /* _COAP_H_ */
