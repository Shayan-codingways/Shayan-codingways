// task 5 assignment 1

#include<stdio.h>

int main(){
	
	float time_hrs, distance, avgspeed; //declared variables taken
	
	printf("Enter the time taken in hours between 1 to 5: "); //prompting and taking input of time in hours
	scanf("%f", &time_hrs);
	
	// only dispalying, if values of time added are wrong
	    if (time_hrs<=1){
		    printf("%f isn't the appropriate time entered\n\n", time_hrs);
		    return 0; // exiting on wrong value
	}

	    if (time_hrs>=5){
		    printf("%f isn't the appropriate time entered\n\n", time_hrs);
		    return 0; //exiting on wrong value
	}
	
	printf("Enter the \"distance\" taken in miles (not displacement): "); //prompting and taking input of distance in miles
	scanf("%f", &distance);
	
	printf("\n"); // just for new line
	
	// only displaying if distance taken is wrong
        if (distance<0){
		    printf("%f isn't appropriately entered!'\n\n", distance);
		    return 0; //exiting on wrong value
	}

	avgspeed = distance/time_hrs; // assigning operation of average speed
	

	printf("The Averagespeed is %f miles/hour", avgspeed); // displaying the average speed
	
}
