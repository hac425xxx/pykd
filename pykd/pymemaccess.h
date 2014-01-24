#pragma once

#include <boost/python/list.hpp>
namespace python = boost::python;

#include "kdlib/memaccess.h"

#include "stladaptor.h"
#include "pythreadstate.h"

namespace pykd {

inline unsigned char ptrByte( kdlib::MEMOFFSET_64 offset ) 
{
    AutoRestorePyState  pystate;
    return kdlib::ptrByte(offset);
}

inline unsigned short ptrWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrWord(offset);
}

inline unsigned long  ptrDWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrDWord(offset);
}

inline unsigned long long ptrQWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrQWord(offset);
}

inline unsigned long long ptrMWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrMWord(offset);
}

inline int ptrSignByte( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSignByte(offset);
}

inline short ptrSignWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSignWord(offset);
}

inline long ptrSignDWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSignDWord(offset);
}

inline long long ptrSignQWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSignQWord(offset);
}

inline long long ptrSignMWord( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSignMWord(offset);
}

inline float ptrSingleFloat( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrSingleFloat(offset);
}

inline double ptrDoubleFloat( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrDoubleFloat(offset);
}

python::list loadBytes( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadDWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadQWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadSignBytes( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadSignWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadSignDWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadSignQWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadFloats( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );
python::list loadDoubles( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false );


inline std::string loadChars( kdlib::MEMOFFSET_64 offset, unsigned long number, bool phyAddr = false )
{
    AutoRestorePyState  pystate;
    return kdlib::loadChars(offset,number, phyAddr);
}

inline std::wstring loadWChars( kdlib::MEMOFFSET_64 offset, unsigned long  number, bool phyAddr = false )
{
    AutoRestorePyState  pystate;
    return kdlib::loadWChars(offset,number,phyAddr);
}

inline std::string loadCStr( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::loadCStr(offset);
}

inline std::wstring loadWStr( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::loadWStr(offset);
}

std::wstring loadUnicodeStr(kdlib::MEMOFFSET_64 offset);
std::string loadAnsiStr(kdlib::MEMOFFSET_64 offset);

inline kdlib::MEMOFFSET_64 ptrPtr( kdlib::MEMOFFSET_64 offset )
{
    AutoRestorePyState  pystate;
    return kdlib::ptrPtr(offset);
}

python::list loadPtrList( kdlib::MEMOFFSET_64 offset );
python::list loadPtrArray( kdlib::MEMOFFSET_64 offset, unsigned long count );

kdlib::MEMOFFSET_64 searchMemoryLst( kdlib::MEMOFFSET_64 beginOffset, unsigned long length, const python::list &pattern );
kdlib::MEMOFFSET_64 searchMemoryStr( kdlib::MEMOFFSET_64 beginOffset, unsigned long length, const std::string &pattern );

inline bool compareMemory( kdlib::MEMOFFSET_64 addr1, kdlib::MEMOFFSET_64 addr2, size_t length, bool phyAddr = false )
{
    AutoRestorePyState  pystate;
    return kdlib::compareMemory(addr1, addr2, length, phyAddr);
}




//inline int ptrSignByte( kdlib::MEMOFFSET_64 offset )
//{
//    AutoRestorePyState  pystate;
//    return kdlib::ptrSignByte(offset);
//}
//
//inline python::list loadBytes( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//
//    do 
//    AutoRestorePyState  pystate; 
//    kdlib::loadBytes( offset, count, phyAddr )
//    return vectorToList( );
//}
//
//inline python::list loadWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadDWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadDWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadQWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    AutoRestorePyState  pystate;
//    return vectorToList( kdlib::loadQWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadSignBytes( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    AutoRestorePyState  pystate;
//    return vectorToList( kdlib::loadSignBytes( offset, count, phyAddr ) );
//}
//
//inline python::list loadSignWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadSignWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadSignDWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadSignDWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadSignQWords( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadSignQWords( offset, count, phyAddr ) );
//}
//
//inline python::list loadFloats( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadFloats( offset, count, phyAddr ) );
//}
//
//inline python::list loadDoubles( kdlib::MEMOFFSET_64 offset, unsigned long count, bool phyAddr = false )
//{
//    return vectorToList( kdlib::loadDoubles( offset, count, phyAddr ) );
//}
//
//
//
//inline kdlib::MEMOFFSET_64 ptrPtr( kdlib::MEMOFFSET_64 offset )
//{
//    return kdlib::ptrPtr( offset );
//}
//
//inline python::list loadPtrList( kdlib::MEMOFFSET_64 offset )
//{
//    return vectorToList( kdlib::loadPtrList(offset) );
//}
//
//inline python::list loadPtrArray(  kdlib::MEMOFFSET_64 offset, unsigned long count )
//{ 
//    return vectorToList( kdlib::loadPtrs(offset, count) );
//}
//
//std::wstring loadUnicodeStr(kdlib::MEMOFFSET_64 offset);
//
//std::string loadAnsiStr(kdlib::MEMOFFSET_64 offset);
//
//inline kdlib::MEMOFFSET_64 searchMemoryLst( kdlib::MEMOFFSET_64 beginOffset, unsigned long length, const python::list &pattern )
//{
//    return kdlib::searchMemory( beginOffset, length, listToVector<char>(pattern) );
//}
//
//inline kdlib::MEMOFFSET_64 searchMemoryStr( kdlib::MEMOFFSET_64 beginOffset, unsigned long length, const std::string &pattern  )
//{
//    const char* p = pattern.c_str();
//    return kdlib::searchMemory( beginOffset, length, std::vector<char>( p, p + pattern.length() ) );
//}


} // end namespace pykd
