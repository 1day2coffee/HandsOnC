#include <stdio.h>

int main(){
	FILE *fp = fopen("a.txt", "r");
	char c;
	int size = 0;
	
	
	while((c = fgetc(fp)) != EOF){
		printf("%c", c);
		size++;
	}
	
	printf("%d", size);
	
	fclose(fp);
	return 0;
}
