#include<stdio.h>
int main(){
	
	int x;
	int a,b,c;
	int y=0,sum=0;
	
	printf("Enter a 4 or a greater digit number: ");
	scanf("%d", &x);

    while(x>0){
	
        a=x%10; //remainder
		x=x/10; //chaninging x everytime
        y=y+1;  //digit counter
        sum+=a; // sum counter
 
    }
   
    printf("Total number of digits: %d",y);
    printf("\nTotal sum: %d",sum);
}
