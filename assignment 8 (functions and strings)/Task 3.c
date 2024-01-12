// Task 03

#include<stdio.h>
#include<string.h>

int main(){
	// declared
	char st_1[20], st_2[20];
	int a;
    
    // input strings
	printf("Enter What you want to: ");
	gets(st_1);
	
	printf("Enter What you want to: ");
	gets(st_2);
	
	// checking size
	printf("\n\nSize of string 1 is %d",strlen(st_1));
	printf("\nSize of string 2 is %d",strlen(st_2));
	
	// equal process...
    a = strcmp(st_1,st_2); // function for comparing sizes
    
    if(a < 0) { // negative a means st1<st2
    printf("\n\nstr1 is less than str2");
    } 
    else if(a > 0) { // positive means st1>st2
    printf("\n\nstr2 is less than str1"); 
    } 
    else { // equal strings on 0
    printf("\n\nstr1 is equal to str2");
    }
	
	
	
}
