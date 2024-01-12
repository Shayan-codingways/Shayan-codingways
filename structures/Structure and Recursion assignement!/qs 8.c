#include<stdio.h>

struct std_data{
	int roll_no;
	char name[50];
	float marks;
};

int main(){
    int n,i;
    struct std_data p[100];
    
	printf("How many students info you want to store? ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    	printf("\nFor roll number %d:",i+1);
    	scanf("%d",&p[i].roll_no);
    	
    	puts("\nEnter first name");
    	scanf("%s",&p[i].name);
    	
    	puts("\nEnter marks");
    	scanf("%f",&p[i].marks);
	}
	
	printf("\n\n*************DISPLAY****************\n\n");
	
	for(i=0;i<n;i++){
		printf("roll number: %d\n", p[i].roll_no);
		puts(p[i].name);
		printf("Marks: %f\n\n", p[i].marks);
    }
    

}
