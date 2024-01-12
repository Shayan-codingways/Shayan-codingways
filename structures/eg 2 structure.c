#include<stdio.h>
#include<string.h>

// decalaration of struct here
struct book{
	char title[100];
	int year;
	float price;
};

int main(){
	struct book b; // initializing variable
	
	strcpy(b.title,"LITERATUE"); // copying literature onto b.title
	b.year=2016; // year stored
	b.price=10.85; // prioce stored.
	
	printf("%s %d %.2f\n", b.title, b.year,b.price); // printing
}

