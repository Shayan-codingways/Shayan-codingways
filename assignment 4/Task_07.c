//task07
#include<stdio.h>
int main(){
	//declare
	char a,b;
	double c,d,e,f,g,h,total;
	


	printf("                                    Hello, Make a coffee!");
	
	
	//Input and validation check
	printf("\n\nEnter following:\nB, for Black coffee\nW, for White coffee \n");
	scanf(" %c", &a);
		if(a!='B' && a!='W'){
		printf("\nEnter again!");
		return 0;
     	}
     	
    printf("\n\nEnter the cup size:\nD, for Double\nM, for Manual\n");
	scanf(" %c", &b);
		if(b!='D' && b!='M'){
		printf("\n Enter again!");
		return 0;
     	}
     	
    // main decision block for  a and b, switch within switch.
	switch(a){
		case 'B':
			switch(b){
				
				case 'M':
					c=20;
					printf("\n1.Put Water!");
					d=20;
					printf("\n2.Add Water!");
					e=25;
					printf("\n3.Mix Well!");
					f=15;
					printf("\n4.Add coffee!");
					g=25;
					printf("\n5.Mix Well!");
					
					total=c+d+e+f+g;
					printf("\n\nThe Total time to prepare the manual Black coffee is %.1f mins", total);
					
					break;
					
				case 'D':
					c=20*1.5;
					printf("\n1.Put Water!");
					d=20*1.5;
					printf("\n2.Add Water!");
					e=25*1.5;
					printf("\n3.Mix Well!");
					f=15*1.5;
					printf("\n4.Add coffee!");
					g=25*1.5;
					printf("\n5.Mix Well!");
					
					total=c+d+e+f+g;
					printf("\n\nThe Total time to prepare the manual Black coffee is %.1f mins", total);
					
					break;
					
				default:
					printf("Incorrect coffee size!");
		    }
		break;	
				
			
		case 'W':
			switch(b){
				
				case 'M':
					c=15;
					printf("\n1.Put Water!");
					d=15;
					printf("\n2.Add Water!");
					e=20;
					printf("\n3.Mix Well!");
					f=2;
					printf("\n4.Add coffee!");
					h=4;
					printf("\n5.Add Milk!");
					g=20;
					printf("\n6.Mix Well!");
					
					total=c+d+e+f+g+h;
					printf("\n\nThe Total time to prepare the manual White coffee is %.1f mins", total);
					
					break;
					
				case 'D':
					c=15*1.5;
					printf("\n1.Put Water!");
					d=15*1.5;
					printf("\n2.Add Water!");
					e=20*1.5;
					printf("\n3.Mix Well!");
					f=2*1.5;
					printf("\n4.Add coffee!");
					h=4*1.5;
					printf("\n5.Add Milk!");
					g=20*1.5;
					printf("\n6.Mix Well!");
					
					total=c+d+e+f+g+h;
					printf("\n\nThe Total time to prepare the manual White coffee is %.1f mins", total);
					
					break;
					
				default:
					printf("incorrect coffee size!");
		    }
		break;	
				
			
			
	    default:
	    	printf("incorrect Coffee Type!");
	}
}
