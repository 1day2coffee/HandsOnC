#include <stdio.h>

int compare(char *str1, char *str2);
int main() {
	char str1[20] = "hello every1";
	char str2[20] = "hello every one";
	char str3[20] = "hello every1 hi";
	char str4[20] = "hello every1";
	
	if(compare(str1, str2)){
		printf("%s, %s is same \n", str1, str2);
	}else{
		printf("%s, %s is not same \n", str1, str2);
	}
	
	if(compare(str1, str3)){
		printf("%s, %s is same \n", str1, str3);
	}else{
		printf("%s, %s is not same \n", str1, str3);
	}
	
	if(compare(str1, str4)){
		printf("%s, %s is same \n", str1, str4);
	}else{
		printf("%s, %s is not same \n", str1, str4);
	}
	
	return 0;
}

int compare(char *str1, char *str2){
	while(*str1){
		if(*str1 != *str2){
			return 0;
		}
		
		str1++;
		str2++;
	}
	
	if (*str2 == '\0') return 1;
	
	return 0;
}
