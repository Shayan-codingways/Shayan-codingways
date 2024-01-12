// doing task 3 of assignment 1.
// Write a C program that takes two integer values as input from the user. Then swap the values taken from the user and display the output of the variables.

#include <stdio.h>

int main(){
	
	int x, y; // decared variables
	
	printf("Enter x: "); // displaying message for user to enter x
	scanf("%d", &x);     // asking user to input x and storing it
	
	printf("Enter y: "); // displaying message for user to enter y
	scanf("%d", &y);    // asking user to input y and storing it
	
	printf("you entered %d and %d ", y, x); // values swaped and result displayed. 
	
	
}

