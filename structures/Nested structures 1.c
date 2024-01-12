// Nested structures

#include<stdio.h>
#include<string.h>

struct date{  // structure made with members
	int day;
	int month;
	int year;
};

struct product{ // since type date is declared, it can be used to declare nested structures. 
	char name[50];
	double price;
	
	struct date s_date;
	struct date e_date;
};

int main(){
	struct product prod; // declared prod for struct product
	
	strcpy(prod.name, "product");
	
	prod.s_date.day=1;
	prod.s_date.month=9;
	prod.s_date.year=2012;
	
	prod.e_date.day=1;
	prod.e_date.month=9;
	prod.e_date.year=2015;
	
	prod.price=7.5;
	
	printf("The product life is %d years\n",prod.e_date.year-prod.s_date.year);
}





