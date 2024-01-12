// Task 02

#include<stdio.h>
#include<string.h>

int main(){
	// declare
	char name[20], course_name[20],ch;
	int max_count[5];
	int courses,i=0,k=0,j=0,s=0,count,max=0;
	
	
	// initial inputs
	printf("\nEnter your name: ");
	gets(name);
	
	fflush(stdin); // while taking gets and strings use flush. 
	
	printf("\nHow many courses you want to enter: ");
	scanf("%d", &courses);
	
	//gets(courses);
	fflush(stdin);
	
	printf("\n==================================================================================\n\n");
	
	
	// repeated entarance of course names i
	for(i=0; i<courses; i++){
		
		printf("\nEnter %d course name: ",i+1);
		gets(course_name);
		
		fflush(stdin);
		
		printf("\n\n");
		
		
		// loops for dispalying frequencies 
		max=0;
		for (j = 0; name[j] != '\0'; j++){
	    	printf("\n");
		    count=0;

		    for(k=0; course_name[k] != '\0';k++) {

                if (course_name[k] == name[j]){ //alphabet of a couse name equal to name alphabet 
                	count=count+1;
                }   
            }
        max_count[j]=count;
        printf("     %c occured %d times", name[j],count);
        
        // max frequency calculator with max initially=0.      
        if(max_count[j]>max){ // if max value is smaller than previous jth max value
        	max=max_count[j];
        	ch=name[j];
		}
        
        } 
    // printing highest value. 
	printf("\"\n\n The character \"%c\" has the maximum frequency and occuring \"%d\" times\"", ch,max);
    printf("\n==================================================================================");
    
    }  
}
