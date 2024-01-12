
//task 4

#include<stdio.h>

int main(){
	
// declaring variables	
	char site_1[50]; // sting with size
	char site_2[50]; // sting with size
	int total_site1, total_site2, gas, hotel_room, meal;
	int gas1, meal1, hotel_room1;
	int basic_rates=1000;

//entering sites names
	printf("Enter site 1 to visit for 6 nights and 7 days: ");
	scanf("%s", &site_1);

    printf("Enter site 2 to visit for 6 nights and 7 days: ");
	scanf("%s", &site_2);

    printf("\n");

// Details for site 1
	printf("What are the rates of site 1 in dollars for the following: \n1.gas: ");
	scanf("%d", &gas1);
	
	printf("\n2.hotel_room: ");
    scanf("%d", &hotel_room1);    

    printf("\n3.meal: ");
	scanf("%d", &meal1);
	
	printf("\n\n");

//Total for site 1	
	total_site1 = basic_rates + gas1 + hotel_room1 + meal1;
	printf("Total rates for site 1 is %d$ \n\n", total_site1);
	

// Details for site 2
	printf("What are the rates of site 2 in dollars for following: \n1.gas: ");
	scanf("%d", &gas);
	
	printf("\n2.hotel_room: ");
    scanf("%d", &hotel_room);    

    printf("\n3.meal: ");
	scanf("%d", &meal);
	
	printf("\n\n");
	
// Total for site 2
	total_site2 = basic_rates + gas + hotel_room + meal;
	printf("Total rates for site 2 is %d$\n\n", total_site2);
	
// decision making
	if(total_site1 > total_site2){
		printf("\"%s is the place you woud love to visit\"", site_1);
	}
	else if(total_site2 > total_site1){
		printf("\"%s is the place you woud love to visit\"", site_2);
	}
	else {
		printf("\"Any of the 2 would be a good option for you\"");
	}//end else
	
	

	
}
