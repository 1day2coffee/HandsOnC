#include <stdio.h>

int stradd(char *dest, char *src);
int main(){
	char str1[100] = "hello my name is";
	char str2[] = " psi";
	
	printf("before : %s \n", str1);
	stradd(str1, str2);
	printf("after : %s \n", str1);
	
	return 0;
}

int stradd(char *dest, char *src){
	while(*dest){
		dest++;
	}
	
	while(*src){
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
	
	return 1;
}
