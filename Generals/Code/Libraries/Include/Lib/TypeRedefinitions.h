#pragma once

#ifndef TYPEREDEFINITIONS_H
#define TYPEREDEFINITIONS_H

//--------------------------------------------------------------------
// Fundamental type definitions
//--------------------------------------------------------------------
typedef float							Real;							// 4 bytes
typedef int								Int;							// 4 bytes
typedef unsigned int			UnsignedInt;	  	// 4 bytes
typedef unsigned short		UnsignedShort;		// 2 bytes
typedef short							Short;					  // 2 bytes
typedef unsigned char			UnsignedByte;			// 1 byte		USED TO BE "Byte"
typedef char							Byte;							// 1 byte		USED TO BE "SignedByte"
typedef char							Char;							// 1 byte of text
typedef bool							Bool;							//
// TODO: should add a ifdef to alternate msvc and linux versions
// note, the types below should use "long long", but MSVC doesn't support it yet
// typedef __int64						Int64;							// 8 bytes
// typedef unsigned __int64	UnsignedInt64;	  	// 8 bytes
typedef long long						Int64;							// 8 bytes
typedef unsigned long long	UnsignedInt64;	  	// 8 bytes

#endif
