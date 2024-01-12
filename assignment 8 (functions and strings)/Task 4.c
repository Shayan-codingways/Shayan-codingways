// Task 04

#include<stdio.h>

// prototype of the function introduced. 
char decide_position(int marks,int ex_no); 

int main(){
	
	// declaration
	int marks, ex_no;

    //input please 
    printf("\n   Enter marks: ");
    scanf("%d", &marks);
    
    printf("\n   Enter the Experience: ");
    scanf("%d", &ex_no);
    
    // call to a function now as now i want the compiler to know what is the use of marks and experience. 
    decide_position(marks, ex_no);
	
}

// definition of a function
char decide_position(int marks, int ex_no){

	if(marks>=50){
		if(marks>=60 && marks<70 && ex_no>=2){
			printf("\n\n   The assigned position is a Assistant Developer!");
		}
		else if(marks>=70 && ex_no>=3){
			printf("\n\n   The assigned position is a Associate Developer!");
		}
		else if(marks>=50 && marks<60 && ex_no>=1){
			printf("\n\n   The assigned position is a Trainee Engineer!");
		}
	    else if(marks>=50 && ex_no==0){
		printf("\n\n   Sorry! You haven't been able to win any positions ");
	    }
    } 
    
	else{
		printf("\n\n   Sorry! You haven't been able to win any positions ");
	}

}
