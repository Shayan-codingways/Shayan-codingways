// Task 01
#include<stdio.h>
#include<string.h>

int main(){
	// declaration
	char first_name[10], last_name[10], full_name[20];
	int len,i;
	
	// taking input and using gets instead of scanf
	printf("Enter Your first name: ");
	gets(first_name);
	
	printf("Enter Your last name: ");
	gets(last_name);
	
	
	// connecting names with gap in between
	strcat(first_name," ");// first function used for x with gap 
	strcat(first_name,last_name); //and then for y.
	
	puts(first_name); // printing by puts
	printf("\n\nFull name is: %s", first_name); // printing by print f
	
	
	// in reverse order
	len=strlen(first_name);
	
	printf("\n\nlength is %d", len);
	
	printf("\n\nBackwards  name is:");
	for(i=len; i>=0 ;i--){ // i= len-1 due to space
		printf(" %c", first_name[i]);
	}
	
}
