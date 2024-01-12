// factorial by function making

#include<stdio.h>
int factorial(int x);

int main(){
	int y,a; 
	y=factorial(a);
	printf("\n\nfactorial is %d ", y);
} 

int factorial(int x){
	int i, a,factorial=1;
	
	printf("enter a number");
	scanf("%d", &a);
	
	for(i=a;i>=1;i--){
		factorial=factorial*i;
		
	}
    printf("\n\nfactorial is %d ", factorial);
    
    return factorial;
}
