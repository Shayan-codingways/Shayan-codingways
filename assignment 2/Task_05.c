// task 05
#include<stdio.h>

int main(){
	int time_spent=3;
	int hourly_total, minutes_total, seconds_total;
	
	printf("Hours spent every Thursday in lab is 3 hours.\n\n\n");
	
	hourly_total=17*time_spent;
	minutes_total=60*17*time_spent;
	seconds_total=60*60*17*time_spent;
		
	printf("Hours spent every semester in lab is: %d hrs\n", hourly_total);
	printf("Minutes spent every semester in lab is: %d min\n", minutes_total);
	printf("Seconds spent every semester in lab is: %d sec", seconds_total);
}
