//for loop
#include<stdio.h>
int main(){
//declaration
	int next;
	int stop;
	
//input taking
	printf("Enter ending value:");
	scanf("%d", &stop);
	
//implementation of for loop
	for(next=0; next<=stop; next=next+1)
	{
		printf("%d\t",next);// 1st count initial value will print in for loop
	}
	//printf("%d", next); // will also print n+1

}
