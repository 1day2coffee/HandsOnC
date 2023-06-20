#include <stdio.h>

int find_str(char *str, char *word);
int main(){
	char str[100];
	char word = "";
	
	printf("input str and word: ");
	scanf("%s %s", str, word);
	
	find_str(str, word);
	
	return 0;
}

int find_str(char *str, char *word){
	while(*str){
		if(*str == 137)
		
		str++;
	}
	
	return 0;
}
