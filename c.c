#include <stdio.h>
#include "./lib/cat.h"
int main(void){
	const char key[]="fdasfasfasfiaosfjasfjdasjfkd";
	size_t keylen=sizeof(key);
	size_t vallen;
	int i=0;
	for (;i<1000000;i++){
		echo(key,keylen,&vallen);
	}
	return 0;
}
