#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include "./cat.h"
char prefix []={'c','r','s','p'};
char* echo(const char* name, size_t keylen, size_t* vallen){
 	char* result = reinterpret_cast<char*>(malloc(sizeof(char) * (keylen + sizeof(prefix)/sizeof(char))));
	memcpy(result, prefix, sizeof(prefix));
  	memcpy(result+ sizeof(prefix) , name, sizeof(char) * keylen);
	*vallen=keylen+ sizeof(prefix);
	return result;
}
