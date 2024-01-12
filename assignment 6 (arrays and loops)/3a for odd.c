// task 03
# define size 7
#include<stdio.h>


int main(){
	
	int x[size];
	int i=0,j=5,a,y,z;
	
	
	// taking input
	for(i=0; i<=6; i++){
	printf("Enter Element x[%d]: ", i);
	scanf("%d", &x[i]);
    }
    
	a=0;
	for(i=0; i<=3; i++){
        		
		for(j=6-i; j>2; j--){
		
			if(x[i]==x[j]){
				a++;
			}
			   break;
			}
			y=a;	
		}
	
		
    
    printf("%d",y);
    if(y==(size+1)/2){
    	printf("\n\nARRAY IS SYMMETRIC!");
	}
	else{
		printf("\n\nARRAY ISN'T SYMMETRIC!");
	}
}
