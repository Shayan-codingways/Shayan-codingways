// doing task 4 of assignment 1
// A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after paying the tax. This information is then provided to the user


#include<stdio.h>

int main(){
	
	int salary, tax, remainingsalary; // decalaring the variables
	float taxrate;
	
	// taking input
	printf("What's your salary\? ");
	scanf("%d", &salary );
	
	printf("Tax rate applied: ");
	scanf("%f", &taxrate);
	
	tax= taxrate*salary;           //assigning opertaions to tax
	remainingsalary= salary-tax;   // assigning operations to calculate remain salary
	
	printf(" \n \n");
	printf("The tax you'll have to pay is %d \n \n", tax);                        // printing tax to be paid
	printf("The amount that you'll have at the end is %d", remainingsalary);     // printing remainging salary
	
	 
	
	
}
