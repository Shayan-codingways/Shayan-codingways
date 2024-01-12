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
	for(i=0; i<4; i++){	
		for(j=6-i; j>3; j--){
		
			if(x[i]==x[j]){
				a++;
			}
			   break;
			}
			y=a;	
		}
	
		
    
    printf("%d",y);
    if(y==(size)/2){
    	printf("\n\nARRAY IS SYMMETRIC!");
	}
	else{
		printf("\n\nARRAY ISN'T SYMMETRIC!");
	}
    



	/*for(i=0; i<=5; i++){
		a=x[0];
		c=x[1];
		e=x[2];
		for(j=5; j>=0; j--){
			b=x[5];
			d=x[4];
			f=x[3];	
		}
    }
    
		if(a==b){
			    if(c==d){
			    	if(e==f){
					}
				}
				printf("ARRAY IS SYMMETRIC!");			
	    }
	    else{
	    	    printf("ARRAY ISN'T SYMMETRIC!");
		}
		*/
	    
}
