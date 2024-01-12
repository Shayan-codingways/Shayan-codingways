#include<stdio.h>
int main(){
	
	int tot, a;
	int count=0;
	
	while(1){       //took it 1 as we don't know how many times loop will work. it can be any other number as well
	
	    printf("\nEnter the number");
	    scanf("%d",&a);
	    
	    printf("\n***************");
	    
	    if(a<0){
	    	break;
		}
		
		while(count<a){
			printf("\nCSE141 is in week 09");
			count=count+1;
		}
		
		tot=tot+a;
	}
	
	printf("The message is displayed %d times", tot);
}
