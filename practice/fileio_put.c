#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("a.txt", "w");
	
	if(fp == NULL){
		printf("Write error!! \n");
		return 0;
	}
	
	fputs("Hello \n", fp);
	fclose(fp);
	return 0;
}
