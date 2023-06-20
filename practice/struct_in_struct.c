#include <stdio.h>
char copy_str(char *dest, char *src);
int print_obj_status(struct obj OBJ);

struct obj{
	char name[20];
	int x, y;
} Ball;

int main(){
	Ball.x = 3;
	Ball.y = 4;
	copy_str(Ball.name, "red ball");
	
	print_obj_status(Ball);
	return 0;
}

int print_obj_status(struct obj OBJ){
	printf("%s \n", OBJ.name);
	printf("%d, %d \n", OBJ.x, OBJ.y);
	
	return 0;
}

char copy_str(char *dest, char *src){
	while(*src){
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
	
	return 1;
}
