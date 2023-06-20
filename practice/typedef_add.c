#include <stdio.h>
int add(int a, int b) { return a + b; }

typedef int CAL_TYPE;
typedef int (*Padd)(int, int);
typedef int Arrays[10];

int main(){
	CAL_TYPE a = 10;
	Arrays arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	Padd ptr = add;
	printf("%d \n", a);
	printf("%d \n", arr[3]);
	printf("%d \n", ptr(3,5));
	
	return 0;
}
