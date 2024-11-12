
/* This file was automatically generated by nrfutil on 2019-10-18 (YY-MM-DD) at 18:24:55 */

#include "compiler_abstraction.h"
#include "stdint.h"

/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION

/** @brief Public key used to verify DFU images */
__ALIGN(4)
const uint8_t pk[64] = {0xbe, 0xf5, 0x57, 0x4c, 0xbd, 0x92, 0xf8, 0xb0, 0x5f, 0xec, 0x58, 0x61, 0xca, 0x10, 0xf7, 0xca,
                        0x2d, 0x79, 0x0c, 0x9a, 0x7d, 0x36, 0x7f, 0xbd, 0x3d, 0x84, 0x96, 0x8d, 0xf3, 0x8c, 0x7b, 0xbb,
                        0x95, 0x61, 0x2a, 0xe5, 0xfb, 0xd2, 0xf3, 0x28, 0xce, 0x70, 0xed, 0xcb, 0x3f, 0x7d, 0xf7, 0x80,
                        0x3b, 0x55, 0x19, 0x56, 0xde, 0x3d, 0x0c, 0x60, 0xf9, 0x15, 0x5b, 0x70, 0xb5, 0x7a, 0x5e, 0xb9};

  #ifdef THREE_KEY

__ALIGN(4)
const uint8_t pk[64] = {0xbb, 0x6d, 0x50, 0xe5, 0xf1, 0x86, 0x88, 0xc9, 0xb4, 0x07, 0x16, 0xd5, 0x6a, 0x30, 0x6c, 0xbe,
                        0x89, 0x9a, 0x40, 0x30, 0x77, 0x87, 0xdb, 0xaf, 0xc1, 0x87, 0xb5, 0x46, 0xad, 0xe5, 0x4e, 0x16,
                        0xab, 0x87, 0x13, 0xd7, 0x93, 0x02, 0x27, 0x2e, 0x8c, 0xca, 0x1f, 0xc2, 0x96, 0x0c, 0x18, 0x7f,
                        0x16, 0x0d, 0x5a, 0x2e, 0xf1, 0xe0, 0x4b, 0xfd, 0xc8, 0x2b, 0xce, 0x4c, 0x8e, 0x9c, 0x58, 0xe5};

__ALIGN(4)
const uint8_t pk[64] = {0x6a, 0xf3, 0xf6, 0x19, 0x67, 0x4b, 0x49, 0xd4, 0x8f, 0xda, 0xfa, 0x6d, 0x72, 0xed, 0xd1, 0x15,
                        0x82, 0x88, 0xe6, 0xa5, 0x86, 0x80, 0x46, 0x2d, 0xff, 0x0f, 0x36, 0x79, 0xf9, 0x2b, 0x07, 0xfb,
                        0x15, 0xa2, 0xc1, 0x8e, 0xd4, 0x4d, 0x71, 0x5e, 0x50, 0x90, 0xfe, 0x3c, 0x4c, 0x39, 0xc5, 0xf6,
                        0xef, 0xc5, 0x4f, 0xc2, 0xcb, 0x53, 0xa9, 0x82, 0x87, 0x84, 0xce, 0xba, 0x97, 0xa2, 0x54, 0x32};

  #endif
#else
  #error \
      "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
