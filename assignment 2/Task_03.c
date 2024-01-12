// task 03

#include<stdio.h>

int main(){
	float time_Ali, time_Ahmed, time_Zeeshan;
	
	time_Ali= 20*4/30.0; // learnt a new thing: even though it's a float variable, it will display integer number like 2.00000 instead of 2.66667 if all the entries are integer. 
    time_Ahmed= 20*4/30.0;
	time_Zeeshan= 21*4/30.0;	
	
	printf("Ali says \"I'll study 4 hours for 5 days a week\": %.2f hrs on average in a month\n", time_Ali); // kept precison of 2 decimal places
    printf("Ahmed says\"I'll study 5 hours for 4 days a week\": %.2f hrs on average in a month\n", time_Ahmed);
    printf("Zeeshan says\"I'll study 3 hours for 7 days a week\": %.2f hrs on average in a month", time_Zeeshan);

}
