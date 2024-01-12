//TASK03
#include<stdio.h>

int main(){
	//declaring variables
	float cal,fatg,cal_fat,perct_fatcal;
	
	//taking input
	printf("Enter calories in a food: ");
	scanf("%f", &cal);
	
	if(cal<0){
		printf("\n\"Incorrectly Entered!\"");
	    return 0;
	}
	
	printf("Enter fat grams in a food: ");
	scanf("%f", &fatg);
	
	if(fatg<0){
		printf("\n\"Incorrectly Entered!\"");
		return 0;
	}
	
	
	// assigning operations
	cal_fat=fatg*9;
	perct_fatcal=cal_fat/cal;
	
    // decision
	if(cal_fat<0.3*cal){
		printf("\nFood is low in fat!");
	}
	
	if(cal_fat>cal){
		printf("\nEither calories or fat grams were incorrectly entered!");
	}
	else{
		printf("\n\n\"Percentage of calories that comes from fat are %.1f%%\"",perct_fatcal*100);
	}
	
}
