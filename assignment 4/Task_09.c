//task 09

#include<stdio.h>
int main(){
	
    //declare
	char choice,c,ch,cho;
	int select, a,b,d,e;
	int r1,r2,r3,r4;
	int total;

	
	// Intro
	printf("                                  Shayan Restaurant Online Order Placement\n                                                Welcome! ");
	
	
	
	// displayed menu
	printf("\n\nThis is our menu: \n1.B = Burger \n2.F = French Fries \n3.P = Pizza \n4.S = Sandwiches");
		
	// asking for selection of snacks types
	printf("\n\nHow many types of snacks you want to order out of the 4 we have?");
	scanf(" %d",&select);
	

	
	// switch for selection
	switch (select){
		
		
		case 1:
			printf("\nPlease Select the snack you want to order! ");
	        scanf(" %c",&choice);
	        
			if(choice != 'B' && choice != 'F' && choice != 'P' && choice != 'S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&a);
	        
	        
			if(choice=='B'){
				r1=200*a;
		    }
			else if(choice=='F'){
				r1=50*a;
			} 
			else if(choice=='P'){
				r1=500*a;
			} 
			else if(choice=='S'){
				r1=150*a;
			} 
			
			total=r1;	
			printf("-----------------------------------------------------------------------------------------------------------");	
			printf("\nYou have ordered!");
			printf("\n%d %c for %d PKR",a,choice,total);
			printf("\nTotal:%d PKR",total);
			printf("\nThankyou for your order. Have a nice day!");
			
			break;
			
			
		case 2:
			printf("\nPlease Select the first snack you want to order! ");
	        scanf(" %c",&choice);
	        
	        if(choice!='B' && choice!='F' && choice!='P' && choice!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&a);
	        
	        printf("\nPlease Select the second snack you want to order! ");
	        scanf(" %c",&c);
	        
	        if(c!='B' && c!='F' && c!='P' && c!='S'){
				printf("\nWe don't have anything like that!");
			    return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&b);
	        
	       	
	        
			if(choice=='B' && c=='P'){
				r1=200*a;
				r2=500*b;
		    }
			else if(choice=='P' && c == 'B' ){
				r1=500*a;
				r2=200*b;
			} 
			else if(choice=='B' && c == 'F' ){
				r1=200*a;
				r2=50*b;
			} 
			else if(choice=='F' && c == 'B' ){
				r1=50*a;
				r2=200*b;
			} 
			else if(choice=='B' && c == 'S' ){
				r1=200*a;
				r2=150*b;
			} 
			else if(choice=='S' && c == 'B' ){
				r1=150*a;
				r2=200*b;
			} 
			else if(choice=='P' && c == 'F' ){
				r1=500*a;
				r2=50*b;
			} 
			else if(choice=='F' && c == 'P' ){
				r1=50*a;
				r2=500*b;
			} 
			else if(choice=='P' && c == 'S' ){
				r1=500*a;
				r2=150*b;
			} 
			else if(choice=='S' && c == 'P' ){
				r1=150*a;
				r2=500*b;
			} 
			else if(choice=='S' && c == 'F' ){
				r1=150*a;
				r2=50*b;
			} 
			else if(choice=='F' && c == 'S' ){
				r1=50*a;
				r2=150*b;
			} 
			
			total=r1+r2;
			printf("-----------------------------------------------------------------------------------------------------------");	
			printf("\nYou have ordered!");
			printf("\n%d %c for %d PKR",a,choice,r1);
			printf("\n%d %c for %d PKR",b,c,r2);
			printf("\nTotal:%d PKR",total);
			printf("\nThankyou for your order. Have a nice day!");
			
			break;
			
				
		case 3:
			printf("\nPlease Select the first snack you want to order! ");
	        scanf(" %c",&choice);
	        
	        if(choice!='B' && choice!='F' && choice!='P' && choice!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&a);
	        
	        printf("\nPlease Select the second snack you want to order! ");
	        scanf(" %c",&c);
	        
	        if(c!='B' && c!='F' && c!='P' && c!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&b);
	        
	        printf("\nPlease Select the third snack you want to order! ");
	        scanf(" %c",&ch);
	        
	        if(ch!='B' && ch!='F' && ch!='P' && ch!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&d);
	        
	        
	            if(choice=='B' && c=='P' && ch=='S'){
	        	r1=200*a;
	        	r2=500*b;
	        	r3=150*d;
			}
			    else if(choice=='B' && c=='S' && ch=='P'){
	        	r1=200*a;
	        	r2=150*b;
	        	r3=500*d;
			}
				else if(choice=='P' && c=='B' && ch=='S'){
	        	r1=500*a;
	        	r2=200*b;
	        	r3=150*d;
			}
				else if(choice=='S' && c=='B' && ch=='P'){
	        	r1=150*a;
	        	r2=200*b;
	        	r3=500*d;
			}
				else if(choice=='S' && c=='P' && ch=='B'){
	        	r1=150*a;
	        	r2=500*b;
	        	r3=200*d;
			}
				else if(choice=='P' && c=='S' && ch=='B'){
	        	r1=500*a;
	        	r2=150*b;
	        	r3=200*d;
			}
				else if(choice=='B' && c=='F' && ch=='S'){
	        	r1=200*a;
	        	r2=50*b;
	        	r3=150*d;
			}
				else if(choice=='B' && c=='S' && ch=='F'){
	        	r1=200*a;
	        	r2=150*b;
	        	r3=50*d;
			}
				else if(choice=='F' && c=='B' && ch=='S'){
	        	r1=50*a;
	        	r2=200*b;
	        	r3=150*d;
			}
				else if(choice=='F' && c=='S' && ch=='B'){
	        	r1=50*a;
	        	r2=150*b;
	        	r3=200*d;
			}
				else if(choice=='S' && c=='B' && ch=='F'){
	        	r1=150*a;
	        	r2=200*b;
	        	r3=50*d;
			}
				else if(choice=='S' && c=='F' && ch=='B'){
	        	r1=150*a;
	        	r2=50*b;
	        	r3=200*d;
			}
				else if(choice=='F' && c=='P' && ch=='S'){
	        	r1=50*a;
	        	r2=500*b;
	        	r3=150*d;
			}
		     	else if(choice=='F' && c=='S' && ch=='P'){
	        	r1=50*a;
	        	r2=150*b;
	        	r3=500*d;
			}
		    	else if(choice=='P' && c=='F' && ch=='S'){
	        	r1=500*a;
	        	r2=50*b;
	        	r3=150*d;
			}
			    else if(choice=='S' && c=='F' && ch=='P'){
	        	r1=150*a;
	        	r2=50*b;
	        	r3=500*d;
			}
		    	else if(choice=='S' && c=='P' && ch=='F'){
	        	r1=150*a;
	        	r2=500*b;
	        	r3=50*d;
			}
		    	else if(choice=='P' && c=='S' && ch=='F'){
	        	r1=500*a;
	        	r2=150*b;
	        	r3=50*d;
			}
			    else if(choice=='B' && c=='P' && ch=='F'){
	        	r1=200*a;
	        	r2=500*b;
	        	r3=50*d;
			}
			    else if(choice=='B' && c=='F' && ch=='P'){
	        	r1=200*a;
	        	r2=50*b;
	        	r3=500*d;
			}
			    else if(choice=='P' && c=='B' && ch=='F'){
	        	r1=500*a;
	        	r2=2000*b;
	        	r3=50*d;
			}
			    else if(choice=='P' && c=='F' && ch=='B'){
	        	r1=500*a;
	        	r2=50*b;
	        	r3=200*d;
			}
			    else if(choice=='F' && c=='P' && ch=='B'){
	        	r1=50*a;
	        	r2=150*b;
	        	r3=50*d;
			}
			    else if(choice=='F' && c=='B' && ch=='P'){
	        	r1=50*a;
	        	r2=150*b;
	        	r3=50*d;
			}
			
			
			total=r1+r2+r3;
			
		    printf("-----------------------------------------------------------------------------------------------------------");	
			printf("\nYou have ordered!");
			printf("\n%d %c for %d PKR",a,choice,r1);
			printf("\n%d %c for %d PKR",b,c,r2);
			printf("\n%d %c for %d PKR",d,ch,r3);
			printf("\nTotal:%d PKR",total);
			printf("\nThankyou for your order. Have a nice day!");
			break;
			
			
			
		case 4:
			printf("\nPlease Select the first snack you want to order! ");
	        scanf(" %c",&choice);
	        
	        if(choice!='B' && choice!='F' && choice!='P' && choice!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&a);
	        
	        printf("\nPlease Select the second snack you want to order! ");
	        scanf(" %c",&c);
	        
	        if(c!='B' && c!='F' && c!='P' && c!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&b);
	        
	        printf("\nPlease Select the third snack you want to order! ");
	        scanf(" %c",&ch);
	        
	        if(ch!='B' && ch!='F' && ch!='P' && ch!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&d);
	        
	        printf("\nPlease Select the fourth snack you want to order! ");
	        scanf(" %c",&cho);
	        
	        if(cho!='B' && cho!='F' && cho!='P' && cho!='S'){
				printf("\nWe don't have anything like that!");
				return 0;
			}
	        
	        printf("Please select the quantity: ");
	        scanf("%d",&e);
	        
	        if(choice=='P' && c=='B' && ch=='F' && cho=='S'){
	        r1=500*a;
	        r2=200*b;
	        r3=50*d;
	        r4=150*e;
	        }
	        else if(choice=='P' && c=='B' && ch=='S' && cho=='F'){
	        r1=500*a;
	        r2=200*b;
	        r3=150*d;
	        r4=50*e;
	        }
	        else if(choice=='P' && c=='F' && ch=='B' && cho=='S'){
	        r1=500*a;
	        r2=50*b;
	        r3=200*d;
	        r4=150*e;
	        }
			else if(choice=='P' && c=='F' && ch=='S' && cho=='B'){
	        r1=500*a;
	        r2=50*b;
	        r3=150*d;
	        r4=200*e;
	        }
			else if(choice=='P' && c=='S' && ch=='F' && cho=='B'){
	        r1=500*a;
	        r2=150*b;
	        r3=50*d;
	        r4=200*e;
	        }
			else if(choice=='P' && c=='S' && ch=='B' && cho=='F'){
	        r1=500*a;
	        r2=150*b;
	        r3=200*d;
	        r4=50*e;
	        }  
	        
			else if(choice=='B' && c=='P' && ch=='F' && cho=='S'){
			r1=200*a;
	        r2=500*b;
	        r3=50*d;
	        r4=150*e;
	        } 
			else if(choice=='B' && c=='P' && ch=='S' && cho=='F'){
			r1=200*a;
	        r2=500*b;
	        r3=150*d;
	        r4=50*e;
	        }
			else if(choice=='B' && c=='F' && ch=='P' && cho=='S'){
	        r1=200*a;
	        r2=50*b;
	        r3=500*d;
	        r4=150*e;
	        }
			else if(choice=='B' && c=='F' && ch=='S' && cho=='P'){
	        r1=200*a;
	        r2=50*b;
	        r3=150*d;
	        r4=500*e;
	        }
			else if(choice=='B' && c=='S' && ch=='F' && cho=='P'){
	        r1=200*a;
	        r2=150*b;
	        r3=50*d;
	        r4=500*e;
	        }
			else if(choice=='B' && c=='S' && ch=='P' && cho=='F'){
	        r1=200*a;
	        r2=150*b;
	        r3=500*d;
	        r4=50*e;
	        }
			
			else if(choice=='F' && c=='B' && ch=='P' && cho=='S'){
			r1=50*a;
	        r2=200*b;
	        r3=500*d;
	        r4=150*e;
	        }
			else if(choice=='F' && c=='B' && ch=='S' && cho=='P'){
	        r1=50*a;
	        r2=200*b;
	        r3=150*d;
	        r4=500*e;
	        }
			else if(choice=='F' && c=='S' && ch=='B' && cho=='P'){
	        r1=50*a;
	        r2=150*b;
	        r3=200*d;
	        r4=500*e;
	        }
	        else if(choice=='F' && c=='S' && ch=='P' && cho=='B'){
	        r1=50*a;
	        r2=150*b;
	        r3=500*d;
	        r4=200*e;
	        }
	        else if(choice=='F' && c=='P' && ch=='B' && cho=='S'){
	        r1=50*a;
	        r2=500*b;
	        r3=200*d;
	        r4=150*e;
	        }
	        else if(choice=='F' && c=='P' && ch=='S' && cho=='B'){
	        r1=50*a;
	        r2=500*b;
	        r3=150*d;
	        r4=200*e;
	        }
	        
	        
	        else if(choice=='S' && c=='B' && ch=='P' && cho=='F'){
	        r1=150*a;
	        r2=200*b;
	        r3=500*d;
	        r4=50*e;
	        }
	        else if(choice=='S' && c=='B' && ch=='F' && cho=='P'){
	        r1=150*a;
	        r2=200*b;
	        r3=50*d;
	        r4=500*e;
	        }
	        else if(choice=='S' && c=='P' && ch=='F' && cho=='B'){
	        r1=150*a;
	        r2=500*b;
	        r3=50*d;
	        r4=200*e;
	        }
	        else if(choice=='S' && c=='P' && ch=='B' && cho=='F'){
	        r1=150*a;
	        r2=500*b;
	        r3=200*d;
	        r4=50*e;
	        }
	        else if(choice=='S' && c=='F' && ch=='B' && cho=='P'){
	        r1=150*a;
	        r2=50*b;
	        r3=200*d;
	        r4=500*e;
	        }
	        else if(choice=='S' && c=='F' && ch=='P' && cho=='B'){
	        r1=150*a;
	        r2=50*b;
	        r3=500*d;
	        r4=200*e;
	        }
	        
	        total=r1+r2+r3+r4;
	        
	        printf("-----------------------------------------------------------------------------------------------------------");	
	        printf("\nYou have ordered!");
			printf("\n%d %c for %d PKR",a,choice,r1);
			printf("\n%d %c for %d PKR",b,c,r2);
			printf("\n%d %c for %d PKR",d,ch,r3);
			printf("\n%d %c for %d PKR",e,cho,r4);
			printf("\nTotal:%d PKR",total);
			printf("\nThankyou for your order. Have a nice day!");
	        break;
	        
	    default:
	    	printf("Wrongly entered value!");
	
	}
	        
} 
