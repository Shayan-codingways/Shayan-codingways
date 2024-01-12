// example 3

#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
} s;              // variable s initialized for struct

int main(){
	
	printf("Enter information \n");
	printf("__________________\n\n");
	
	// takes input, first time sues fgets
	printf("Entename: ");
	fgets(s.name,sizeof(s.name), stdin);
	
	printf("Enter roll number: ");
	scanf("%d", &s.roll);
		
	printf("Enter marks: ");
	scanf("%f", &s.marks);
	
	// dispalying information
	printf("\n\nDisplaying information \n");
	printf("_______________________\n\n");
	
	printf("Name: ");
	printf("%s",s.name);
	
	printf("Roll number: %d\n",s.roll);
	printf("Marks: %.1f\n", s.marks);
} 
