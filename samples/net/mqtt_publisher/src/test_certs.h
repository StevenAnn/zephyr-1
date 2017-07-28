/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __TEST_CERTS_H__
#define __TEST_CERTS_H__

#if defined(MBEDTLS_X509_CRT_PARSE_C)
/* This byte array can be generated by
 * "cat ca.crt | sed -e '1d;$d' | base64 -d |xxd -i"
 */
static const unsigned char ca_certificate[] = {
	0x30, 0x82, 0x03, 0xa7, 0x30, 0x82, 0x02, 0x8f, 0xa0, 0x03, 0x02, 0x01,
	0x02, 0x02, 0x09, 0x00, 0x83, 0x1f, 0x4e, 0x75, 0xe9, 0x25, 0x06, 0x14,
	0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
	0x0b, 0x05, 0x00, 0x30, 0x6a, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55,
	0x04, 0x03, 0x0c, 0x0e, 0x41, 0x6e, 0x20, 0x4d, 0x51, 0x54, 0x54, 0x20,
	0x62, 0x72, 0x6f, 0x6b, 0x65, 0x72, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03,
	0x55, 0x04, 0x0a, 0x0c, 0x0d, 0x4f, 0x77, 0x6e, 0x54, 0x72, 0x61, 0x63,
	0x6b, 0x73, 0x2e, 0x6f, 0x72, 0x67, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03,
	0x55, 0x04, 0x0b, 0x0c, 0x0b, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74,
	0x65, 0x2d, 0x43, 0x41, 0x31, 0x21, 0x30, 0x1f, 0x06, 0x09, 0x2a, 0x86,
	0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x12, 0x6e, 0x6f, 0x62,
	0x6f, 0x64, 0x79, 0x40, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e,
	0x6e, 0x65, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x37, 0x30, 0x37, 0x31,
	0x32, 0x31, 0x30, 0x32, 0x39, 0x35, 0x30, 0x5a, 0x17, 0x0d, 0x33, 0x32,
	0x30, 0x37, 0x30, 0x38, 0x31, 0x30, 0x32, 0x39, 0x35, 0x30, 0x5a, 0x30,
	0x6a, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0e,
	0x41, 0x6e, 0x20, 0x4d, 0x51, 0x54, 0x54, 0x20, 0x62, 0x72, 0x6f, 0x6b,
	0x65, 0x72, 0x31, 0x16, 0x30, 0x14, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c,
	0x0d, 0x4f, 0x77, 0x6e, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x73, 0x2e, 0x6f,
	0x72, 0x67, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c,
	0x0b, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x2d, 0x43, 0x41,
	0x31, 0x21, 0x30, 0x1f, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d,
	0x01, 0x09, 0x01, 0x16, 0x12, 0x6e, 0x6f, 0x62, 0x6f, 0x64, 0x79, 0x40,
	0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e, 0x6e, 0x65, 0x74, 0x30,
	0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
	0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30,
	0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xdf, 0x1f, 0x0b, 0x10,
	0x56, 0xdd, 0xfd, 0xf4, 0x14, 0xef, 0x6c, 0x95, 0x5e, 0x40, 0x46, 0x29,
	0x3a, 0x29, 0xda, 0x04, 0x34, 0x2c, 0xf2, 0xec, 0x2c, 0xb1, 0x6d, 0x80,
	0xc3, 0x69, 0x12, 0xdb, 0xbf, 0x62, 0x4c, 0x9c, 0xfe, 0x11, 0xe9, 0x48,
	0x64, 0x46, 0x31, 0xce, 0xc9, 0x2c, 0x8e, 0xa7, 0x05, 0xbc, 0xde, 0x68,
	0xad, 0x8f, 0xc8, 0x3c, 0xc7, 0x0c, 0x4c, 0xc8, 0x4a, 0x7e, 0xb2, 0x1d,
	0x54, 0x75, 0x6f, 0x66, 0xa1, 0x6b, 0x39, 0x7c, 0x59, 0xc9, 0x61, 0xb2,
	0x95, 0xc2, 0x35, 0x74, 0x5d, 0x4a, 0xe1, 0xe1, 0x27, 0x54, 0xc3, 0xf4,
	0x50, 0xcb, 0xd7, 0x81, 0xf8, 0x55, 0x46, 0xf4, 0xb7, 0x60, 0xfc, 0x4b,
	0xf8, 0x74, 0x42, 0xb8, 0xfb, 0xdc, 0x10, 0xba, 0x08, 0xcb, 0xe0, 0x40,
	0x3d, 0x6b, 0x8f, 0x19, 0xc3, 0x8b, 0xeb, 0xef, 0x99, 0x1f, 0x8b, 0xa9,
	0x23, 0x1c, 0xbf, 0x9b, 0xed, 0xbc, 0x7b, 0xbc, 0x1b, 0x9d, 0x89, 0x51,
	0xa9, 0xa1, 0x0b, 0xae, 0x1c, 0x92, 0x54, 0x8e, 0x19, 0x04, 0x92, 0xf9,
	0x6a, 0x17, 0xa4, 0x70, 0x70, 0xb8, 0x65, 0xe8, 0xb2, 0xe4, 0x3a, 0x90,
	0x5a, 0x4e, 0x05, 0xe2, 0x8d, 0x4e, 0xdc, 0x34, 0x40, 0xb9, 0x1c, 0x88,
	0x59, 0xae, 0x3f, 0xc7, 0x75, 0x1d, 0x5e, 0x63, 0x2e, 0x4d, 0x18, 0x49,
	0x5a, 0x3e, 0x1c, 0x54, 0xbe, 0xc7, 0xfb, 0xbc, 0x34, 0x11, 0xab, 0x0c,
	0xad, 0x88, 0xc2, 0xdb, 0xff, 0xfb, 0x66, 0x25, 0xa3, 0xec, 0x2a, 0xbc,
	0x0d, 0x71, 0x63, 0x8f, 0x56, 0xdb, 0xba, 0xc9, 0x7d, 0x27, 0xbb, 0x0d,
	0x12, 0x48, 0x33, 0x34, 0x1f, 0xcc, 0x05, 0x9f, 0xfe, 0xff, 0xb9, 0x08,
	0xab, 0xbc, 0x47, 0x6b, 0xcd, 0x33, 0x51, 0xd9, 0x02, 0xc5, 0x40, 0xe8,
	0x22, 0x37, 0xc7, 0x5e, 0xe7, 0x22, 0x09, 0xe6, 0xd0, 0x12, 0x6a, 0xbd,
	0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x50, 0x30, 0x4e, 0x30, 0x1d, 0x06,
	0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x09, 0x39, 0x8e, 0x88,
	0x53, 0x55, 0x87, 0xb9, 0x98, 0x88, 0x80, 0x23, 0xaf, 0x21, 0x4b, 0xb1,
	0x6c, 0xee, 0xa3, 0x22, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04,
	0x18, 0x30, 0x16, 0x80, 0x14, 0x09, 0x39, 0x8e, 0x88, 0x53, 0x55, 0x87,
	0xb9, 0x98, 0x88, 0x80, 0x23, 0xaf, 0x21, 0x4b, 0xb1, 0x6c, 0xee, 0xa3,
	0x22, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03,
	0x01, 0x01, 0xff, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
	0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0xd1,
	0xcb, 0x8c, 0x13, 0xf7, 0xa9, 0x1a, 0xec, 0x81, 0x9b, 0xe6, 0x24, 0x79,
	0x76, 0x0b, 0xd6, 0x1c, 0x58, 0x7d, 0x5b, 0x2f, 0xa8, 0x13, 0x05, 0xc3,
	0xce, 0x7c, 0x59, 0x58, 0xe4, 0xdb, 0x62, 0x10, 0x63, 0xc1, 0xf2, 0x71,
	0x7c, 0x73, 0x21, 0xff, 0xaa, 0x40, 0x99, 0x3b, 0x93, 0x6b, 0x5f, 0x4e,
	0xa3, 0x18, 0xb6, 0x27, 0xd6, 0xc6, 0xdf, 0x38, 0xf1, 0x55, 0xdd, 0x54,
	0x67, 0x34, 0x84, 0x91, 0xa5, 0x45, 0x77, 0xcc, 0x24, 0x9c, 0x2c, 0x72,
	0x74, 0xa1, 0x16, 0x64, 0x18, 0xb9, 0x5f, 0xbc, 0x66, 0x52, 0xad, 0x3e,
	0xba, 0xbb, 0x53, 0x1d, 0x60, 0x2f, 0x09, 0x8f, 0x89, 0x3f, 0xdf, 0xef,
	0xee, 0xa7, 0xea, 0xdc, 0x3e, 0xfe, 0x03, 0xa5, 0x08, 0x00, 0x53, 0x31,
	0xb3, 0x77, 0x41, 0x4a, 0x4c, 0x0a, 0x28, 0x56, 0xd1, 0xa5, 0x25, 0x16,
	0xa1, 0x37, 0x72, 0x3f, 0xd9, 0x17, 0xfb, 0xc4, 0xb6, 0xf8, 0x8b, 0x2d,
	0x73, 0xb6, 0xe2, 0x0e, 0xc7, 0xe1, 0xaf, 0xec, 0xac, 0x40, 0x1a, 0x97,
	0x5d, 0x76, 0x68, 0x3e, 0x87, 0x17, 0x1a, 0xeb, 0x0f, 0x0c, 0x64, 0x1d,
	0xce, 0x64, 0xc0, 0x3d, 0x0f, 0x10, 0xba, 0x85, 0x6b, 0x28, 0x41, 0xee,
	0x60, 0x23, 0xcc, 0xf9, 0x54, 0x9c, 0xa3, 0x27, 0x88, 0xc7, 0x1b, 0xb3,
	0x8c, 0x57, 0x86, 0xcd, 0xb8, 0x77, 0x2a, 0x95, 0xaa, 0xa6, 0x0e, 0xb6,
	0x7e, 0x7e, 0xa0, 0x9f, 0xca, 0x87, 0xb4, 0x3f, 0xf5, 0xcf, 0xb4, 0xd4,
	0x3f, 0xee, 0xdd, 0x57, 0x61, 0x20, 0xfc, 0x48, 0xa4, 0x69, 0x74, 0xbc,
	0x3b, 0xbd, 0x02, 0x61, 0x95, 0xee, 0x27, 0x9f, 0x20, 0x3b, 0xfd, 0x3f,
	0xa7, 0x36, 0x47, 0xb5, 0x17, 0x98, 0x25, 0x62, 0x6d, 0x40, 0x44, 0x6e,
	0x8e, 0x7e, 0x96, 0x7d, 0x15, 0x09, 0x9b, 0x2e, 0x89, 0x8d, 0xbe, 0xea,
	0x5a, 0x6c, 0xb5
};
#endif /* MBEDTLS_X509_CRT_PARSE_C */

#if defined(MBEDTLS_KEY_EXCHANGE__SOME__PSK_ENABLED)
/* Avoid leading zero in psk because there's a potential issue of mosquitto
 * that leading zero of psk will be skipped and it leads to TLS handshake
 * failure
 */
const unsigned char client_psk[] = {
	0x01, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

const char client_psk_id[] = "Client_identity";
#endif

#endif