// task_09

#include<stdio.h>
int main(){
	
	// declared variables
	float height;
	char gender;
	
	// taking inputs
	printf("Choose M for male and F for female: ");
	scanf(" %c", &gender);
	
	
	// doing without switch
	
	
	// case 1
	if(gender=='M'){   // take it in inverted commas
	
		printf("\nEnter your height:");
	    scanf(" %f", &height);
	    
	    
		if(height<1.70){
			printf("\nYou are Short!");
		}//end if
		else if(height>=1.70 && height<1.85){
			printf("\nYou are Normal!");
		}//end else if
		else{
			printf("\nYou are Tall!");
		} // end else
	} // end if
	
	
	
	// case 2
	if(gender=='F'){  // take it in inverted commas
	
		printf("\nEnter your height:");
	    scanf(" %f", &height);
	    
	    
		if(height<1.60){
			printf("\nYou are Short!");
		}//end if
		else if(height>=1.60 && height<1.75){
			printf("\nYou are Normal!");
		}//end else if
		else{
			printf("\nYou are Tall!");
		} // end else
	}// end if
	
	
	
	// default block
	if(gender!='M' && gender!='F'){
		printf("\nincorrect gender!");
	}
}

