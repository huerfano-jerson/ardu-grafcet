/*
 * libtypes.h
 *
 *  Created on: 8/08/2017
 *      Author: leonardo
 */

#ifndef LIBTYPES_H_
#define LIBTYPES_H_

#ifndef ARDUINO
typedef unsigned char byte;
#else
#include <Arduino.h>
#endif
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef byte * ptr;


#define ULONG_MAX ((ulong)0xFFFF)
#define LONG_MAX ((long)0xFFFF)


#endif /* LIBTYPES_H_ */
