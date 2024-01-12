
// digit counting
#include<stdio.h>

int main(){
	
	int x;
	int a;
	int y=0;
	
	printf("Enter a 4 or a greater digit number: ");
	scanf("%d", &x);
   
    while(x!=0){
	
       a=x%10;  // eliminated last digit for count, it's just here for no use
       x=x/10;  // now divding the original number by 10  eliminated the last digit eg 7000 to 700 to 70 to 7 to 0
    
    y=y+1; // increment y for each previous step. 
    
    }
   
    printf("Total number of digits: %d",y);
}
