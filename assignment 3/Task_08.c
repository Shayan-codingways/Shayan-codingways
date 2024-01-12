// task 08

#include<stdio.h>

int main(){
    
	// declared variables
	int Pep_c=35, Dew_c=38;
	int quant, cash; 
	float total_costp, total_costd;
	char c;
	int order, total_pbot, total_dbot;
	
	//asking a user for choice selection
	printf("Enter the following:\n1. q for quantity\n2. c for cash\n\n");
	scanf(" %c",&c);
	
	// decision block
	switch(c){
		case 'q':
			printf("\nEnter the quantity of pepsi and dew you want to purchase: ");
	        scanf("%d",&quant);
	        
			if(quant>=50 && quant<155){
				
				total_costp=quant*Pep_c*0.915;
				total_costd=quant*Dew_c*0.915;
				
				printf("\nYou have to pay %.2f pkr for pepsi", total_costp);
				printf("\nYou have to pay %.2f pkr for dew", total_costd);
			}
			
			else if(quant>=155){
				
				total_costp=quant*Pep_c*0.75;
				total_costd=quant*Dew_c*0.75;
				
				printf("\nYou have to pay %.2f pkr for pepsi", total_costp);
				printf("\nYou have to pay %.2f pkr for dew", total_costd);
			}
			
			else{
				
				total_costp=quant*Pep_c;
				total_costd=quant*Dew_c;
				
				printf("\nYou have to pay %.2f pkr for pepsi", total_costp);
				printf("\nYou have to pay %.2f pkr for dew", total_costd);
			}
			
			break;
			
		case 'c':
			printf("\nEnter the cash amount you'll pay to buy pepsi and dew: ");
	        scanf("%d",&cash);
	        
	        if(cash>2000 && cash<=4500){
	        	
				total_pbot=(cash*1.085)/Pep_c;
				total_dbot=(cash*1.085)/Dew_c;
				
				printf("\nYou can buy %d pepsi bottles", total_pbot);
				printf("\nYou can buy %d dew bottles", total_dbot);
			}
			
			else if(cash>4500){
				
				total_pbot=(cash*1.25)/Pep_c;
				total_dbot=(cash*1.25)/Dew_c;
				
				printf("\nYou can buy %d pepsi bottles", total_pbot);
				printf("\nYou can buy %d dew bottles", total_dbot);
			}
			
			else{
				
				total_pbot=cash/Pep_c;
				total_dbot=cash/Dew_c;
				
				printf("\nYou can buy %d pepsi bottles", total_pbot);
				printf("\nYou can buy %d dew bottles", total_dbot);
			}
			
			break;
			
		default:
			printf("No such option");
	}
}
