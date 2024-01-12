#include<stdio.h>
int main(){
	
	int tot=0; 
	int a=0;// initializing a here so that loop begins, else it won't
	int count; // initializing count for second loop
	
	while(a>-1){
	  
	   printf("\nEnter the number");
	   scanf("%d",&a);
	   
	   if(a<=-1){ //if negative then break
	   break;
	   }
	   
	   // nested while for repeated display
	   count=1;// initializing here so that count always starts wth value of 1 and not with a previous ending value.
	   while(count<=a){ //repeating the body of this loop until count<=a
	   	count++;
	   	printf("\n\nCSE141 exam is is week 09");
	   }
	   
	   tot=tot+a;
    }
    
       printf("\n\nthe message is dispalyed %d times",tot);	   
}

