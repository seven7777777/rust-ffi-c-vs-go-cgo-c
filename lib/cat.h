#pragma once

#ifdef _WIN32
#ifdef __cplusplus
extern "C" {
#endif
#ifndef _BAR_H
#define _BAR_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
extern API char* echo(const char* name, size_t keylen, size_t* vallen);
#endif
#ifdef __cplusplus
}  /* end extern "C" */
#endif
