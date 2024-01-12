// Task 07
#include<stdio.h>
struct course{
	char course_name[50]; 
	float GPA[3];
};

struct address{
	int street_address; 
	char city[50]; 
	char state[50]; 
	int zip;
};


struct studentdata1{
	float CGPA;
	
	struct course course_data;
	struct address address_info;
};

struct studentdata2{ // must have taken struct studentdata student 2 as variable
	float CGPA;
	struct course course_data;
	struct address address_info;
};



int main(){
	int i;
	struct studentdata1 d;
	struct studentdata1 b;
	float sum_st1=0.0,sum_st2=0.0;

	
	
	for(i=0;i<3;i++){
		puts("\nEnter course name: ");
		scanf(" %s",&d.course_data.course_name[i]);
        fflush stdin;
	}
	
	
	puts("......Record of 1st student!........\n");
	
	for(i=0;i<3;i++){
       puts("Enter GPA: ");
       scanf("%f", &d.course_data.GPA[i]);
       sum_st1 = sum_st1 + d.course_data.GPA[i];
    }
    d.CGPA=sum_st1/3;
	
    puts("......Record of 2nd student!........\n");
    for(i=0;i<3;i++){
       
       puts("Enter GPA: ");
       scanf("%f", &b.course_data.GPA[i]);
       
	   sum_st2 = sum_st2 + b.course_data.GPA[i];
    }
    b.CGPA=sum_st2/3;
    
    printf("________________Compare!___________________\n\n");
    
    i=0;
    for(i=0;i<3;i++){
    	    //printf(" %s\n",d.course_data.course_name[i]);
    	    
    		
    		if(d.course_data.GPA[i]>b.course_data.GPA[i]){
    			printf("\n\nStudent 1 has highest GPA %.1f",d.course_data.GPA[i]);
			}
			else if(d.course_data.GPA[i]<b.course_data.GPA[i]){
				printf("Student 2 has highest GPA %.1f",b.course_data.GPA[i]);
			}
			else{
				printf("Student 1 and 2 has same GPA %.1f",d.course_data.GPA[i]);
			}
	        printf("\n\n");
	}
	
	if(b.CGPA>d.CGPA){
    			printf("student2 has highest CGPA %f",b.CGPA);
    
	}
	else if(b.CGPA<d.CGPA){
    			printf("student1 has highest CGPA %f",d.CGPA);
    
	}
	else{
		     printf("student1 and 2 have same CGPA %f",d.CGPA);
	}
    
    
    
    
    // instead of taking members as array take variables takes as array to remove prininting name issue
 
 }
