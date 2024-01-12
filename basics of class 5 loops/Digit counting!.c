#include<stdio.h>
int main(){
	int x;
	int a;
	int y=0;
	
	printf("Enter a 4 or a greater digit number: ");
	scanf("%d", &x);
   
    while(x!=0){
	
    a=x%10;
    x=x/10;
    
    y=y+1;
    
    }
   
    printf("Total number of digits: %d",y);
}
