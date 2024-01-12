
#include<stdio.h>
int main(){
	
	// declaring 
	int array1[5], array2[5];
	int i=1,j=1;	
	int common_marks[5];
	int y=0;
	int a=0;

	

	// takes input store it in x array
	printf("\nArray 1:");
	for(i=1; i<=5; i++){
		printf("\nEnter the marks of student %d = ", i);
		scanf("%d", &array1[i]);
    }
    
    printf("\nArray 2:");
	for(i=1; i<=5; i++){
		printf("\nEnter the marks of student %d = ", i+5);
		scanf("%d", &array2[i]);
    }
     
     
/*  common values WAY 1

    printf("\nCommon values are:");
    	for(i=1;i<=5;i++){
		   for(j=1; j<=5; j++){
		    
			    if(array1[i]==array2[j]){
		        printf("\n         %d ", array1[i]); //directly printing common values.  
		        break;
			}
		}
	} 
*/	
	
	
//  Common Values WAY 2	
	
	for(i=1;i<=5;i++){                   // checking each value of array 1 with all of array 2
		for(j=1; j<=5; j++){
		    
	     	if(array1[i]==array2[j]){
			  common_marks[a]=array1[i]; //common marks stored from a
		      y++;                       //counting common values 
		      break;                     // break for as soon 1 entry found, exit.
		    }
	    }
	    a=y;                              // storing y's value in a variable.
	}
	 
	 
	printf("\nCommon values are %d:",a); 
	
	for(i=0; i<a; i++){                  //printing common marks from 0th index to the last(a)
	  printf("\n           %d",common_marks[i]);
    }
		 
}


