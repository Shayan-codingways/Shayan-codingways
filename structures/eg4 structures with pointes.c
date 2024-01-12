// Example 4 with pointer

#include<stdio.h>

struct book{
	char title[100];
	int year;
	float price;
};

int main(){
	// declaring pointers
	char *ptr1;
	int *ptr2;
	float *ptr3; 
	
	// declaring struct variable
	struct book b;
	
	// initializing members of structures.
	strcpy(b.title,"LITERATUE"); 
	b.year=2016; 
	b.price=10.85; 
	
	// addresses of struct variables assigned to ptr. 
	ptr1=b.title; // no & with array as array itself stroes address directly.
	ptr2=&b.year;
	ptr3=&b.price;
	
	//Display contents on address
	printf("%s %d %.2f\n",ptr1,*ptr2,*ptr3);
	
}
