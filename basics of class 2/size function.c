#include<stdio.h>
int main(){
	// declare variables
	int a;
	float b;
	double c;
	char d;
	
	printf("size of int= %lu bytes\n", sizeof(a));
	printf("size of float= %lu bytes\n", sizeof(b));
	printf("size of double= %lu bytes\n", sizeof(c));
	printf("size of char= %lu byte\n", sizeof(d));
	
	return 0;
}
