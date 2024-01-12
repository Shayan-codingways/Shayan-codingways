#include<stdio.h>
int main(){
	
	int x,y;
	int sum;
	int a,b;
	int c,d;
	int e,f,g;
	int z;
	
	printf("\nEnter a 4 digit number: ");
	scanf("%d" ,&x);
	
	printf("\n\tEnter a 4 digit number: ");
	scanf("%d" ,&y);
	
	sum=x+y;
	printf("\n\nThe sum of %d and %d = %d", x,y,sum);
	
	//palindrome
	a=sum/1000;
	b=sum%10;
	
	c=(sum%1000)/100;
	d=(sum%100)/10;
	
	
	z=sum%2;
	if(a==b && c==d){
		printf("\nThe reverse number is %d%d%d%d",b,d,c,a);
	}
	
	e=sum%2;
	f=sum%3;
	g=sum%5;

if(z==0){

	if(e==0){
		printf("\nThe sum is multiple of 2");
	}
    if(f==0){
		printf("\nThe sum is multiple of 3");
	}
	if(g==0){
		printf("\nThe sum is multiple of 5");
	}
	if(e!=0 && f!=0 && g!=0){
		printf("The sum is not multiple of 2,3,5");
	}
}

if(z!=0){
		if(f==0){
		printf("\nThe sum is multiple of 3");
	   }	
	    else
	    printf("\nThe sum is not multiple of 3");
	}
}


