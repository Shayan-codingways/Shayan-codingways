#include<stdio.h>
int main(){
	
	//declare
	int count;
	float a,b,c;
	float avg1,avg2,avg3;
	float sum1=0,sum2=0,sum3=0;
	float avggrade;
	
//loop	
for(count=1; count<=10; count++){
	
    printf("\n\n_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+");
    
	printf("\n\nInput your grade in CSE-141 between 0 to 100: ");
	scanf("%f",&a);
	
	printf("\nInput your grade in CSE-141 lab between 0 to 100: ");
	scanf("%f",&b);
	
	printf("\nInput your grade in CSE-578 between 0 to 100: ");
	scanf("%f",&c);
	
	//validation
	if(a>100||a<0 || b>100||b<0 || c>100||c<0){
		printf("\n\nMarks wrongly entered!");
		return 0;
	}
	
	//avg of every student in every course
	avggrade=(a+b+c)/3;
	printf("\n\n\"Average grade of a student in all courses is\" = %.1f", avggrade);

	// assignment operators used within loop but disaplayed outside as 1 whole
	sum1+=a;
	sum2+=b;
	sum3+=c;
	
	avg1=sum1/10;
	avg2=sum2/10;
	avg3=sum3/10;
}

	printf("\n\n\nAverage grade in CSE-141 is = %.1f", avg1);
	printf("\nAverage grade in CSE-141 lab is = %.1f", avg2);
	printf("\nAverage grade in CSE-578 is = %.1f", avg3);
}
