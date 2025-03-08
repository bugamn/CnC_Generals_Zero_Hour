/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

////////////////////////////////////////////////////////////////////////////////
//																																						//
//  (c) 2001-2003 Electronic Arts Inc.																				//
//																																						//
////////////////////////////////////////////////////////////////////////////////

// FILE: NameKeyGenerator.h ///////////////////////////////////////////////////////////////////////
// Created:    Michael Booth, May 2001
//						 Colin Day, May 2001
// Desc:       Name key system to translate between names and unique key ids
///////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __NAMEKEYGENERATOR_H_
#define __NAMEKEYGENERATOR_H_

#include "Lib/BaseType.h"
#include "Common/SubsystemInterface.h"
#include "Common/GameMemory.h"
#include "Common/AsciiString.h"

//-------------------------------------------------------------------------------------------------
/**
	Note that NameKeyType isn't a "real" enum, but an enum type used to enforce the
	fact that NameKeys are really magic cookies, and aren't really interchangeable
	with ints. NAMEKEY_INVALID is always a legal value, but all other values are dynamically
	determined at runtime. (The generated code is basically identical, of course.)
*/
//-------------------------------------------------------------------------------------------------
enum NameKeyType : unsigned int
{
	NAMEKEY_INVALID					= 0,
	NAMEKEY_MAX							= 1<<23,					// max ordinal value of a NameKey (some code relies on these fitting into 24 bits safely)
	FORCE_NAMEKEYTYPE_LONG	= 0x7fffffff	// a trick to ensure the NameKeyType is a 32-bit int
};

//-------------------------------------------------------------------------------------------------
/** A bucket entry for the name key generator */
//-------------------------------------------------------------------------------------------------
class Bucket : public MemoryPoolObject
{

	MEMORY_POOL_GLUE_WITH_USERLOOKUP_CREATE( Bucket, "NameKeyBucketPool" );

public:

	Bucket();
//~Bucket();

	Bucket				*m_nextInSocket;
	NameKeyType		m_key;
	AsciiString		m_nameString;
};

inline Bucket::Bucket() : m_nextInSocket(NULL), m_key(NAMEKEY_INVALID) { }
inline Bucket::~Bucket() { }

//-------------------------------------------------------------------------------------------------
/** This class implements the conversion of an arbitrary string into a unique
	* integer "key". Calling the nameToKey() method with the same string is
	* guaranteed to return the same key. Also, all keys generated by an
	* instance of this class are guaranteed to be unique with respect to that
	* instance's catalog of names.  Multiple instances of this class can be
	* created to service multiple namespaces. */
//-------------------------------------------------------------------------------------------------
class NameKeyGenerator : public SubsystemInterface
{

public:

	NameKeyGenerator();
	virtual ~NameKeyGenerator();

	virtual void init();
	virtual void reset();
	virtual void update() { }

	/// Given a string, convert into a unique integer key.
	NameKeyType nameToKey(const AsciiString& name) { return nameToKey(name.str()); }

	/// Given a string, convert into a unique integer key.
	NameKeyType nameToKey(const char* name);

	/**
		given a key, return the name. this is almost never needed,
		except for a few rare cases like object serialization. also
		note that it's not particularly fast; it does a dumb linear
		search for the key.
	*/
	AsciiString keyToName(NameKeyType key);

private:

	enum
	{
		// socketcount should be prime, and not "close" to a power of 2, for best results.
		// if this one isn't large enough, try this website:
		// http://www.utm.edu/research/primes/lists/small/1000.txt
		SOCKET_COUNT = 6473
	};

	void freeSockets();

	Bucket*				m_sockets[SOCKET_COUNT];			///< Catalog of all Buckets already generated
	UnsignedInt		m_nextID;											///< Next available ID

};  // end class NameKeyGenerator

//-------------------------------------------------------------------------------------------------
//           Externals
//-------------------------------------------------------------------------------------------------
extern NameKeyGenerator *TheNameKeyGenerator;  ///< just one namespace for now

// typing "TheNameKeyGenerator->nameToKey()" is awfully wordy. Here are shorter synonyms:
inline NameKeyType NAMEKEY(const AsciiString& name) { return TheNameKeyGenerator->nameToKey(name); }
inline NameKeyType NAMEKEY(const char* name) { return TheNameKeyGenerator->nameToKey(name); }

inline AsciiString KEYNAME(NameKeyType nk) { return TheNameKeyGenerator->keyToName(nk); }

//-------------------------------------------------------------------------------------------------
class StaticNameKey
{
private:
	mutable NameKeyType m_key;
	const char* m_name;
public:
	StaticNameKey(const char* p) : m_key(NAMEKEY_INVALID), m_name(p) {}
	NameKeyType key() const;
	// ugh, this is a little hokey, but lets us pretend that a StaticNameKey == NameKeyType
	inline operator NameKeyType() const { return key(); }
};

#endif // __NAMEKEYGENERATOR_H_
