#include<stdio.h>

int main(){
	int A=1,B=2,C=3,D=4;
	char a,b,c,d,e,x,y,z,w;
	char choice,choice1,choice2,choice3;
	
	
	printf("       Abdur Rehman Restaurant Online Order Placement \n");
	printf("                   WELCOME      \n ");
	printf("PLEASE select from the following Menu \n ");
    printf("How many types of snacks you want to order\n ");
	scanf("%d", &a);
	
	
	switch(a){
		case 1:
			printf("Enter the snack you want to order\n ");
			printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches\n ");
			scanf(" %c", &choice);
			switch (choice){
				case 'B':
					printf("Enter Please provide quantity\n ");
					scanf("%d",&b);
					printf("     You have ordered!\n %d Burgers value %d Rupees   ",b,b*200);			
                    break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
			}
			break;
		case 2:
		
				printf("Enter First snack you want to order\n ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
		    	scanf(" %c", &choice);
			switch (choice){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
				    break;
		}
		    
				printf("Enter second snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice1);
			switch (choice1){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
				    break;
			}
		break;
		
		case 3:
			
				printf("Enter First snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
				scanf(" %c", &choice);
			switch (choice){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
				    break;
		    }
		    
				printf("Enter second snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice1);
			switch (choice1){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
			}
			
				printf("Enter third snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice2);
			switch (choice2){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
			}
		break;
		case 4:
		
		
				printf("Enter First snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice);
			switch (choice){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
		    		break;
			}
		    
				printf("Enter second snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice1);
			switch (choice1){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
			}
		
				printf("Enter third snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
			    scanf(" %c", &choice2);
			switch (choice2){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
		}
				printf("Enter fourth snack you want to order ");
				printf("B for Burger\n F for french Fries\n P for Pizza \nS for sanwiches ");
				scanf(" %c", &choice3);
			switch (choice3){
				case 'B':
					printf("Enter Please provide quantity");
					scanf("%d",&b);
					printf("You have ordered!\n %d Burgers value %d Rupees",b,b*200);			
					break;
				case 'F':
					printf("Enter Please provide quantity");
					scanf("%d",&c);
				    printf("You have ordered!\n %d FrenchFries value %d Rupees",c,c*50);
					break;
				case 'P':
					printf("Enter Please provide quantity");
					scanf("%d",&d);
				    printf("You have ordered!\n %d Pizzas value %d Rupees",d,d*500);
					break;
				case 'S':
					printf("Enter Please provide quantity");
					scanf("%d",&e);	
				    printf("You have ordered!\n %d Sanwitches value %d Rupees",e,e*150);
					break;
			}
		}
}
