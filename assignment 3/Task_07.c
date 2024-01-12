//task 07

#include<stdio.h>

int main(){
	
	// variables decalred
	char c;
	float w;
	float cost; 
	
	
	// enter the option user wills
	printf("Enter the following:\n1. E for Economy class\n2. B for Business class\n3. V for VIP class\n\n");
	scanf(" %c",&c);
	
	
	// weight input, decision making, cost calculation. (decision making, assigning operations, dispalying results)
	
	switch(c){
		
		case 'E':
			printf("\nEnter the weight(kgs) you'll carry!\n\n");
	        scanf("%f",&w);
			
			if (w<=25){
				cost=0;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			else if(w>25 && w<=40){
				cost=w*1.5;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			else{
				cost=w*2;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			
			break;
			
		case 'B':
			printf("\nEnter the weight(kgs) you'll carry!\n\n");
	        scanf("%f",&w);
			
			if (w<=35){
				cost=0;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			else if(w>35 && w<=50){
				cost=w*1.25;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			else{
				cost=w*1.5;
				printf("Cost of carrying luggage is %.2f",cost);
			}
			
			break;
			
			
		case 'V':
			printf("\nEnter the weight(kgs) you'll carry!\n\n");
	        scanf("%f",&w);
			
			if (w<60){
				cost=0;
				printf("Cost of carrying luggage is %.2f", cost);
			}
			else{
				cost=30;
				printf("Cost of carrying luggage is %.2f" ,cost );
			}
			
			break;
		
		default:
			printf("\nIncorrect selection of class!");
	}
	
}
