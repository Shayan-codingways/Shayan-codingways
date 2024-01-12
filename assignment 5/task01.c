#include<stdio.h>
int main(){
	
	//declaration of varibales 
	int first;
	int second;
	
	//input from user
	printf("Enter 1st number: ");
	scanf("%d", &first);
	
	printf("Enter 2nd number: ");
	scanf("%d", &second);
	
	// iterative
	while(first!=second){ //condition on while
		first>>=2; //binary right shif operator
		second=second*second;
		
		printf("\n******************");
		
		// dispalying results
		printf("\n1st Number: %d ",first); //this will display binary shifed number
		printf("\n2nd Number: %d ",second); 
	}
}
