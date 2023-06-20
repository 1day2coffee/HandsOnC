#include <stdio.h>

int main(){
	int i, j;
	int result = 0;
	
	for(i = 1; i < 10; i++){
		for(j = 1; j < i + 1; j+=2){
			result += j;
			printf("%d, %d, %d \n", i, j, result);
		}
	}
	return 0;
}
