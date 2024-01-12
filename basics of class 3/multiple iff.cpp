//multiple ifs


#include<stdio.h>
int main(){
	
//declaring variables
	int salary; 
	float hra, da, net_salary;
	
//input salary
    printf("Enter salary in rupees:");
	scanf("%d", &salary);

//condition statement
    if(salary<1500){
    	hra= 0.10*salary;
    	da= 0.9*salary;
    	
    	net_salary=salary+hra+da;
    	
    	printf("\nYour net salary is: %.2f ", net_salary);
    	return 0;
	}//End if
	
	  if(salary>=1500){
    	hra= 500;
    	da= 0.98*salary;
    	break;
    	net_salary=salary+hra+da;
    	
    	printf("\nYour net salary is: %.2f ", net_salary);
    	return 0;
	}//End if
	
}
	
