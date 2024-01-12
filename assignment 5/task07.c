#include<stdio.h>
int main(){
	
	// declaration
	int total=0;
	int x;
	int marks;
	int count;
	
	//loop
	for(count=1; count<=10; count++){ //initial condition should always be true as count=1<10.
	
	    printf("Enter your choice:[1-3]\t ");
	    scanf("%d",&x);
	    
	    switch(x){
	    	case 1:
	    		//difficult question
	    		marks=3;
	    		break;
	    	case 2:
	    		//moderate question
	    		marks=1;
	    		break;
	    	case 3:
	    		//easy question
	    		marks=3;
	    		break;
	    	default:
	    		marks=0; //necessary else it'll add previously stored mark value. for example last value was 2 so mark stored would be 1. again after default it'll add 1 to the total. 
	    		printf("\nError: Wrong Answer ...\n\n");
	    		break;
		}
    // total mark calculation
	total=total+marks;
    }
    //printing results. 
    printf("Candidate gets %d points in total",total);
}
