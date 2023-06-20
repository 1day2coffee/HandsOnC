#include <stdio.h>

struct Human{
	int age;
	int height;
	int weight;
};

int main(){
	struct Human pjy;
	
	pjy.age = 30;
	pjy.height = 180;
	pjy.weight = 70;
	
	printf("%d \n", pjy.age);
	printf("%d \n", pjy.height);
	printf("%d \n", pjy.weight);
	
	return 0;
}


