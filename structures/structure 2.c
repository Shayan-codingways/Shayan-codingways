// Nested structure 2

#include<stdio.h>
#include<string.h>

struct universitydetails{
	int uniranking;
	char uniname[90];
};

struct student_detail{
	int std_id;
	char std_name[20];
	float std_percentage;
	
	// structure within structure
	struct universitydetails data; // data is the variable for struct uniranking
};

int main(){
	struct student_detail std_data={1,"Ali",85.5,220,"Fast-NUCES"};
	                            // {std-id, std name, std-percent, uni ranking, uni name}
	printf("ID is: %d\n",std_data.std_id);
	printf("Name is: %s\n", std_data.std_name);
	printf("Percentage is: %f\n\n",std_data.std_percentage);
	
	printf("Uni Rank is: %d\n",std_data.data.uniranking);
	printf("Uni Name is: %s\n",std_data.data.uniname);
}
	

