// coding a flowchart with if and else

#include<stdio.h>
int main(){
	
//declaring variables
	int salary; 
	float hra, da, net_salary;
	
//input salary
    printf("Enter salary in rupees:");
	scanf("%d", &salary);

//condition statement with 2 conditions
    if(salary<1500){
    	hra= 0.10*salary;
    	da= 0.9*salary;
    	
	}//End if

	else{
		hra=500;
		da=0.98*salary;
	} //Else if
	
//calaculating net salary
net_salary=salary+hra+da;
		
// dispalying results
printf("\nYour net salary is: %.2f ", net_salary);
	
}
