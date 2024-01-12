#include<stdio.h>
int main(){
	int num,num1;
	int pos=0,neg=0,count=0;
	int a;
	
	do{
	
	printf("\nEnter number:");
	scanf("%d",&num);
        if(num>0){
	      pos=pos+1;
	    } 
	    if(num<0){
	      neg=neg+1;
        }
        if(num>=100 && num<=200){
		    count=count+1;
	    }

	a=num%2;	
	if(num>=15 && num<=25){ // this validation is for operation. 
		break;
	}
	
	if(a!=0){//chk for odd num
		num1=num*num;
		printf("The square of the given number is = %d\n",num1);
	} 	 
    
	}while(num<15 || num>25);
	
	printf("Positive numbers are = %d", pos);
	printf("\t\tNegative numbers are = %d",neg);
	printf("\t\tTotal count of [100-200]= %d",count);
}
