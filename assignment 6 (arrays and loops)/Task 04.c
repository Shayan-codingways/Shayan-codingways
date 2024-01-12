#include<stdio.h>
int main(){
	
	// declaring variables
	float pass_marks[10];
	float fail_marks[10];
	float x[10];
	int i;
	int z=0,y=0;
	float sum1=0, sum2=0;
	
	// takes input store it in x array
	for(i=1; i<11; i++){
		printf("\nEnter the marks of student %d = ", i);
		scanf("%f", &x[i]);
		
		// termination
	    if(x[i]==-1){
		    break;
	    }
	
	    // if value of x greater than 5, the x value is stored in pass else fail
	    if(x[i]>5 && x[i]<=10){
		    pass_marks[i]=x[i];
        }
        else if(x[i]<=5){
    	    fail_marks[i]=x[i];
	    }
    
    }
    
    // printing value of array 1/2 and taking its sum and counting pass/fail 
    printf("\n\nArray 1 values are = ||");
    for(i=1; i<11; i++){
    	if(x[i]>5){
		    printf(" %.2f || ", pass_marks[i]);
		    sum1=sum1+pass_marks[i];
		    z=z+1;
        }
	}
        
    printf("\n\nArray 2 values are = ||");
    for(i=1; i<11; i++){
        if(x[i]<5 && x[i]>-1){
            printf(" %.2f || ", fail_marks[i]);	
            sum2=sum2+fail_marks[i];
            y=y+1;
		}
	    if(x[i]==-1){
		    break; 
	    }
	}
	
    // displaying results!
    printf("\n\nAverage of Array 1 is %.2f", sum1/z);
    printf("\nAverage of Array 2 is %.2f", sum2/y);
    
    printf("\n\nPass = %d", z);
    printf("\nFail= %d", y);
    
    
    
    
}
