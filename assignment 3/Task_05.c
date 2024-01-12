//task 05

#include<stdio.h>

int main(){
	
	// declared variables
	int fees, fine=500, x, fine1, fine2, total_fee;
	
	// inputing date and fee
	printf("What's the fee per semester: ");
	scanf("%d",&fees);
	
	printf("\n\nFee paying deadline for the new month is the 30th of the previous month!");
	printf("\n\"You sould pay on time to keep away from paying fines\": Mr. Abdul Saeed.");
	
	printf("\n\nWhat's the date you're paying fee on if you are late (just mention the date from 1 to 30)? ");
	scanf("%d",&x);
	
	
	// decision block + output block
	if(x<=7){
		fine=500;
		total_fee=fine+fees;
		printf("\nYou'll be charged a fine of %d rupees", fine);
		printf("\nTotal fee you'll have to pay will be: %d", total_fee);
	}
	
	else if(x>7 && x<14){
		fine1=2*fine;
		total_fee=fine1+fees;
		printf("\nYou'll be charged a fine of %d rupees", fine1);
		printf("\nTotal fee you'll have to pay will be: %d", total_fee);	
	}
	
	else{
		fine2=3*fine;
		total_fee=fine2+fees;
		printf("\nYou'll be charged a fine of %d rupees", fine2);
		printf("\nTotal fee you'll have to pay will be: %d", total_fee);
	}
	
}
