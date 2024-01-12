//task 10a

#include<stdio.h>
int main(){
    int x;
	int a,b,c,d,Sum, sum;
	
	printf("Enter any 4 digit number:");
	scanf("%d", &x);
	
	a = x/1000;
	//printf("1st digit of 4 digit number is: %d\n",a); disaplying a
    
    b = (x%1000)/100;
	//printf("2nd digit of 4 digit number is: %d\n",b); disaplying b
	
	c = (x%100)/10;
	//printf("3rd digit of 4 digit number is: %d\n",c); disaplying c
	
	d = x%10;
	//printf("4th digit of 4 digit number is: %d\n",d); dispalying d
	
	Sum=a+b+c+d;
	printf("The sum of all the 4 digits of a number is: %d\n",Sum);
	
//task10b
    sum=a+d;
	printf("The sum of the first and the last digit of a number is: %d",sum);
}

