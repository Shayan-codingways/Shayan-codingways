//task_02

#include<stdio.h>
int main(){
	float a,b,c;
	
	printf("Enter sides of triangle: ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	
    if(a==b && a!=c){
		printf("\nTriangle is Isoceles!");
	}
	else if(a==c && b!=c){
		printf("\nTriangle is Isoceles!");
	}	
	else if(b==c && a!=c){
		printf("\nTriangle is Isoceles!");
	}	
	else if(a==b && b==c){
    	printf("\nTriangle is Equilateral!");
	} 
    else if(a!=b && a!=c && b!=c){
	    printf("\nTriangle is Scalene!");
    }
    
}

