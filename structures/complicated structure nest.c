// More complicated structure

#include<stdio.h>
#include<string.h>

struct type{
	char typename[20];
};

struct car{
	char carname[20];
	char make[15];
	char model[15];
	char color[20];
	int seats;
	int engine;
	int price;
	
	struct type cartype;
};

int main(){
	struct car mycar;
	
	puts("*****EXAMPLE OF NESTED STRUCTURE*****");
	
	puts("Enter name of car");
	gets(mycar.carname);
	
	puts("Enter type of car: {mini, sedan, sports,luxury,SUV}");
	gets(mycar.cartype.typename);
	
	puts("Enter Color of car:");
	gets(mycar.color);
	
	puts("Enter maker of car:");
	gets(mycar.make);
	
	puts("Enter model of car:");
	gets(mycar.model);
	
	// can't use gets for strings so now scanf
	puts("Enter no of seats of car:");
	scanf("%d",&mycar.seats);
	
	puts("Enter price of car:");
	scanf("%d",&mycar.price);
	
	puts("Enter engine capacity of car:");
	scanf("%d",&mycar.engine);
	
	
	puts("\n\n**************PRINT****************\n\n");
	
	printf("\nCar Name: %s",mycar.carname);
	printf("\nCar Type: %s",mycar.cartype.typename);
	printf("\nColor: %s",mycar.color);
	printf("\nMarker: %s",mycar.make);
	printf("\nModel: %s",mycar.model);
	printf("\nSeats: %d",mycar.seats);
	printf("Car Price: %d",mycar.price);
	printf("Car Engine Capacity:%d",mycar.engine);

	
}
