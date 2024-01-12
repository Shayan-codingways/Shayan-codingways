#include<stdio.h>
int main(){
 
 int i,j,mult;                               // decalartion
 
 
 j=3;                                        // starting value is 3
 while(j<10){                                // j in the outer loop to keep it constant for the display
 	i=1;                                     //i is kept one so that next loop enters
	 while(i>0 && i<=10){                    // i is the inner loop to dispaly it 1 to 10 times
	 	mult=i*j;                            // assigning operation
 		printf("%d * %d = %d\n",j,i,mult);   // dispalying repeated results
 		i=i+1;                               // disaplaying 1 to 10   
	 }
    j=j+2;                                   // moving on to 5 7 9
    printf("\n\n");                          // two line gap before jumping onto other tables
 }
 
}
 
