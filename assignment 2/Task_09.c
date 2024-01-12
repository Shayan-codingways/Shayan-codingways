#include<stdio.h>

int main(){
	int budget= 40, floor=4, rooms_in1floor=10, total_rooms, Area_1room=44; 
	float Area_insqft, onefloor_roomarea, Area_allrooms;
	float costof1room=0.5;
	int totalcost,remainingamount;

	
	printf("The budget assigned for the new academic block is:%d million pkr\n\n", budget);
	printf("The floors in the block will be %d and each floor will have %d rooms\n", floor, rooms_in1floor);
	
	
    total_rooms=rooms_in1floor*floor;
    printf("The total rooms in the acdemic block are %d \n\n",total_rooms);
    
    printf("The area of each floor in a block is %d square metres\n",Area_1room);
    
	Area_insqft=Area_1room*10.7639;
    printf("The area of each room in a block is %.2f square feet\n",Area_insqft);
	
	onefloor_roomarea=10*Area_insqft;
	printf("The area of every room in a single floor is %.2f square feet\n",onefloor_roomarea);
	  
	Area_allrooms=total_rooms*Area_insqft;
	printf("The area of  all the rooms in a block is %.2f square feet\n\n",Area_allrooms);
	
	printf("The cost of each room in a block is %f million pkr\n",costof1room);
	
	totalcost= total_rooms*costof1room;
	printf("The total cost of every room in a block is %d million pkr\n\n",totalcost);
	printf("the assigned budget seems enough for the new project!\n\n");
	remainingamount=budget-totalcost;
	printf("The remaining amount from the budget is %d million pkr\n",remainingamount);
}
