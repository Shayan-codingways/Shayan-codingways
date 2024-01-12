//task03
#include<stdio.h>

int main(){
       
       int choice=1;
       int t;
       int in=0,freeseat;
       int s,j;
       int ticket;
       int tot1,tot2;
       float inco=0;
       int a;
       int t1=0;
       
       while(choice>=1 && choice<3){
	   
       printf("Menu Selections");
       printf("\n*-*-*-*-*-*-*-*-*-*");;
       
	   printf("\nEnter your choice please \n1.Purchase Ticket\n2.Dispaly inofrmation\n3.Exit\n");
       scanf("%d",&choice);
       
       switch(choice){
       	case 1:{
       		printf("Enter how many tickets you want to buy?");
			scanf("%d",&t);
			t1=t1+t;
			
			if(t>500){
				printf("Sorry, the available seats are 500\n"); 
				break;
			}
			
			
			printf("How many Sophos? ");
			scanf("%d",&s);
			
			
			printf("How many Juniors? ");
			scanf("%d",&j);
			
			a=s+j;
			
			if(a!=t){
				printf("No of sophos entered are not equal to no of juniors\n");
				break;
			}
			
			
			ticket=50;
			tot2=ticket*j;
			
			ticket=100;
			tot1=ticket*s;
			
			
		    in=tot1+tot2;
		    
			if(t>3){
				inco=inco+0.8*in;
			}
			
			break;
		}
       	case 2:
       		{
			
       		freeseat=500-t1;
       		printf("\nFree seats: %d",freeseat);
       		
       		
       		printf("\t\tIncome: %.1f\n", inco);
       		
       		break;
       	}
       	case 3:{
       		return 0;
	   }
}
}
}
