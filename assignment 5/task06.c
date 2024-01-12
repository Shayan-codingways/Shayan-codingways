#include<stdio.h>
int main(){
	
	int x;
	int sum=0;
	int i;


    
for(x=11; x>=11 && x<=19;){ // the loop will only work when x will have values x=11 as that'll make condition true. 
	
	printf("\nEnter a number: ");
	scanf("%d",&x);
	
	if(x<0){
		printf("\nThe number you entered is = %d", x); 
		sum+=x;
		break;
	}
	if(x<0 || x<11 || x>19 ){
		sum+=x;
		break;
	}
	

	for(i=1; i<=x; i++){
	    if(x>=11 && x<=19){
		printf("\nWelcome to CSE141!");
	    }
    }
    
    sum+=x;
}
    
    printf("\nsum of integers entered is = %d", sum);
}
	
