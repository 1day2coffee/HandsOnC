#include <stdio.h>

int main(){
	FILE *fp = fopen("a.txt", "r");
	char buf[20];
	
	if(fp == NULL){
		printf("read error \n");
		return 0;
	}
	
	fgets(buf, 20, fp);
	printf("%s \n", buf);
	fclose(fp);
	return 0;
}
