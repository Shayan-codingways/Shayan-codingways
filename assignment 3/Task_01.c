//task 01

#include<stdio.h>

int main(){
	
	
    // declared variables
	int sub_code;
	float a;
	
	
	//email msg shown
	printf("A min of 80%% attendace is required for each subject to appear in that subject's exams");
	
	
	// asking for input, presenting percentages, making decision and dispalying results. 
	printf("\n\nEnter subject code!\n2. 70200 for Maths\n2. 70201 for English\n3. 70202 for Computer science\n4. 70203 for Physics\n\n",sub_code);
	scanf("%d",&sub_code);
	
    
    // decision
    switch(sub_code){
	
	    case 70200: //case for maths
	    	
			printf("Enter your attendance: ");
	    	scanf("%f",&a);
	    	
	                if(a<=80){
		            printf("\nSorry! You can't appear for maths paper.");
	                }
	                else{
	                printf("\nYou should be giving the exam.");
                    }
	    	
		break;
	    	
	    	
	    case 70201: // case for english
	    	
			printf("Enter your attendance: ");
	    	scanf("%f",&a);
	    	
	                if(a<=80){
		            printf("\nSorry! You can't appear for English paper.");
	                }
	                else{
	                printf("\nYou should be giving the exam.");
                    }
        
        break;
        
	    case 70202: // case for computer
	    	
			printf("Enter your attendance: ");
	    	scanf("%f",&a);
	    	
	                if(a<=80){
		            printf("\nSorry! You can't appear for Computer science paper.");
	                } 
	                else{
	                printf("\nYou should be giving the exam.");
                    }
        
        break;
	      	
	    case 70203: // case for physics
	    	
			printf("Enter your attendance: ");
	    	scanf("%f",&a);
	    	
	                if(a<=80){
		            printf("\nSorry! You can't appear for Physics paper.");
	                }
	                else{
	                printf("\nYou should be giving the exam.");
	                }
	    
	    break;
	    
	    default:
	    	
	    	printf("Wrong code entered");	    	
	    	
    }
    
}
