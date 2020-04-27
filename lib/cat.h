//  Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
#pragma once

#ifdef _WIN32
#ifdef ROCKSDB_DLL
#ifdef ROCKSDB_LIBRARY_EXPORTS
#define ROCKSDB_LIBRARY_API __declspec(dllexport)
#else
#define ROCKSDB_LIBRARY_API __declspec(dllimport)
#endif
#else
#define ROCKSDB_LIBRARY_API
#endif
#else
#define ROCKSDB_LIBRARY_API
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef _BAR_H
#define _BAR_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
extern ROCKSDB_LIBRARY_API char* echo(const char* name, size_t keylen, size_t* vallen);
#endif
#ifdef __cplusplus
}  /* end extern "C" */
#endif
