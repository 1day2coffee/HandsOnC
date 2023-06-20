#include <stdio.h>

int add_book(char (*title)[30], char (*auth)[30], 
			 char (*publish)[30], int *borrowed, int *total);
			 
int search_book(char (*title)[30], char (*auth)[30],
				char (*publish)[30], int total);
int compare(char *str1, char str2);
int borrow_book(int *borrowed);
int return_book(int *borrowed);

int main(){
	int number = 0, total = 0;
	char title[100][30], auth[100][30], publish[100][30];
	int borrowed[100];
	
	while (1){
		printf("system open \n");
		printf("menu list \n");
		printf("1. add Book \n");
		printf("2. search Book \n");
		printf("3. borrow Book \n");
		printf("4. return Book \n");
		printf("0. exit \n");
		printf("select button: ");
		scanf("%d", &number);
		
		if (number == 1){
			add_book(title, auth, publish, borrowed, &total);
		} else if(number == 2){
//			search book			
			search_book(title, auth, publish, total);
		} else if(number == 3){
//			borrow book
			borrow_book(borrowed);			
		} else if(number == 4){
//			return book			
			return_book(borrowed);			
		}else if(number == 0){
			printf("exit");
			break;
		}
	}
	
	return 0;
}

int add_book(char (*title)[30], char (*auth)[30], 
			 char (*publish)[30], int *borrowed, int *total){
			 	
	printf("input title: ");
	scanf("%s", title[*total]);
	
	printf("input auth: ");
	scanf("%s", auth[*total]);
	
	printf("input publish: ");
	scanf("%s", publish[*total]);
	
	borrowed[*total] = 0;
	printf("success \n");
	(*total)++;
	
	return 0;		 	
}

int search_book(char (*title)[30], char (*auth)[30], 
				char (*publish)[30], int total){

	int select, i;
	char search[30];
	
	printf("select search keyword: \n");
	printf("1. title \n");
	printf("2. auth \n");
	printf("3. publish \n");
	scanf("%d", &select);
	
	printf("input word: ");
	scanf("%s", search);
	
	printf("result \n");
	
	if(select == 1){
		for (i = 0; i < total; i++){
			if(compare(title[i], search)){
				printf("number: %d, title: %s, auth: %s, publish: %s \n", i, title[i], auth[i], publish[i]);
			}
		}		
	} else if(select == 2){
		for(i = 0; i< total; i++){
			if(compare(auth[i], search)){				
				printf("number: %d, title: %s, auth: %s, publish: %s \n", i, title[i], auth[i], publish[i]);
			}
		}
	} else if(select == 3){
		for(i = 0; i< total; i++){
			if(compare(publish[i], search)){				
				printf("number: %d, title: %s, auth: %s, publish: %s \n", i, title[i], auth[i], publish[i]);
			}
		}
	}
	
	return 0;					
}

int compare(char *str1, char *str2){
	while (*str1){
		if(*str1 != *str2){
			return 0;
		}
		str1++;
		str2++;
	}
	
	if(*str2 == '\0') return 1;
	
	return 0;
}

int borrow_book(int *borrowed){
	int book_number;
	printf("input book number: ");
	scanf("%d", &book_number);
	
	if(borrowed[book_number] == 1){
		printf("borrowed already \n");
	}else{
		borrowed[book_number] = 1;
		printf("borrowed! \n");
	}
	
	return 0;
}

int return_book(int *borrowed){
	int book_number;
	printf("input book number: ");
	scanf("%d", &book_number);
	
	if(borrowed[book_number] == 0){
		printf("returned already \n");
	}else{
		borrowed[book_number] = 0;
		printf("returned! \n");
	}
	
	return 0;
}
