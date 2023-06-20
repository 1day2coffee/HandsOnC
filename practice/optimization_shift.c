#include <stdio.h>

int main(){
	int i;
	printf("input number: ");
	scanf("%d", &i);
	
	printf("%d, %d \n", i, i / 32);
	printf("%d, %d \n", i, i >> 5);
	
	return 0;
}
