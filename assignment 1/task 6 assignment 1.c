// task 6 assignment 1: Write a C Program to format an integer number, the integer number occupies a minimum number of 9 spaces on the screen.

#include<stdio.h>

int main(){
	
    int x;
	printf("enter an integer number: ");
	scanf("%9d", &x);

	printf("\nYour entered value is %9d", x);
	
	
}

