#include<stdio.h>

//gloabal variable

int x=10;

// func definition

int fun(){
	int x=5; //local variable
	printf("%d", x);
}

int main(){
	printf("%d\n\n",x); // prints global
	fun(); // prints 5 as prefers local variable
}

