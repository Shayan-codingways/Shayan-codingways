#include<stdio.h>
int main(){
		
	int i, x[10]={0};
		
    for(i=0; i<10; i++){
        
        x[++i]=20; //pre increment . initially it hold 0 in i
        x[i]=20;  // here it'll have i=1 as increment done in last step
        printf("The elements of array are AT X[%d]: \t%d\n",i,x[i]); // i here used for 1st step will be 1 dure pre increment.
        // value will come 5 times as it'll work at 1,3,5 ,7 ,9
    }
}
  
