#include<stdio.h>
int main(){
	
	int c;
	int h,a;
	float r;
	float s;
	int sales;
	
	int num;
	float z,x,y;
	
	
	printf("===================Payroll Management=======================");
	
	printf("\nSelect <1> to Calculate salary\nSelect <2> to Commision on sale\nSelect <3> to Calculate Sales tax\n");
	scanf("%d", &c);
	
	
while(1){


	switch(c){
		
		
		case 1:
			printf("\nEnter the number of hours worked <-1 to end>: ");
			scanf("%d",&h);
			
			if(h==-1){
				return 0;
			}
			
			printf("Enter hourly rate of the worker <$ 00.00>: ");
			scanf("%f",&r);
			
			if(h==40){
				s=h*r;
			}
			else if(h>40){
				a=h-40;
				s=(h*r)+(a*(r/2));
			}
			
			printf("\nSalary is %f", s);
			
			break;
			
			
		case 2:
			printf("\nEnter sales in dollars<-1 to end>");
			scanf("%d" , &sales);
			
			if(sales==-1){
				return 0;
			}
			
			s=200+(0.09*sales);
			printf("\nSalary is : $%f", s);
			
			break;
			
			
		case 3:
			printf("\nEnter number of month : <-1 or greater than 12 to end>: ");
			scanf("%d", &num);
			
			if(num==-1 || num>12){
				return 0;
			}
			
			printf("\nEnter sales in dollars : <-1 to end>: ");
			scanf("%d", &sales);
			
			if(sales==-1){
				return 0;
			}
			
			z=0.05*sales;
			x=0.04*sales;
			y=z+x;
			
			printf("\nCountry tax is: $%f", z);
			printf("\nstate tax is: $%f", x );
			printf("\nTotal tax is: $%f", y );
			
			break;
			
			
		default:
			printf("incorrect choice!");
			break;
	}
}
}
