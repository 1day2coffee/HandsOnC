#include <stdio.h>
int reverse(char *str);
int main(){
	
	char str1[100];
		
	printf("input string : ");
	scanf("%s", str1);
	
	reverse(str1);
	
	return 0;
}

int reverse(char *str){
	char temp[100];
	
	while(*str){
		*temp = *str;
		str++;
	}
	
	*temp = '\0';
	
	return 0;
}
