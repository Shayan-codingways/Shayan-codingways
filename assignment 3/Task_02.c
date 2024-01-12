
// task 2 for ascending order dispaly
#include<stdio.h>

int main(){
	
	// 1. declared variables
	float a,b,c;
	
	// 2. input marks
	printf("\nEnter PF marks:");
	scanf("%f", &a);
	
	printf("\nEnter English marks: ");
	scanf("%f", &b);
	
	printf("\nEnter Islamiat marks:");
	scanf("%f", &c);
	
	printf("\n");
	
	// 3. decision box + dispalying results
	
	if(a<=b && a<=c && b<=c){
		printf("%.1f\t\t",a);

		printf("%.1f\t\t",b);
		printf("%.1f\t\t",c);
	}
	
	else if (a<=b && a<=c && c<=b){
		printf("%.1f\t\t",a);

		printf("%.1f\t\t",c);
		printf("%.1f\t\t",b);
	}
	
	else if (b<=a && b<=c && a<=c){
		printf("%.1f\t\t",b);

		printf("%.1f\t\t",a);
		printf("%.1f\t\t",c);
	}
	
	else if (b<=a && b<=c && c<=a){
		printf("%.1f\t\t",b);

		printf("%.1f\t\t",c);
		printf("%.1f\t\t",a);
	}
	
	else if (c<=a && c<=b && b<=a){
		printf("%.1f\t\t",c);

		printf("%.1f\t\t",b);
		printf("%.1f\t\t",a);
	}

    else {
	
    	printf("%.1f\t\t",c);

		printf("%.1f\t\t",a);
		printf("%.1f\t\t",b);
}
	
}
