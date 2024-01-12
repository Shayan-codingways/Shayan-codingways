#include<stdio.h>
int main(){
   int a,b,c,d;     
   printf("3a + 7b - 5c = 10 \n\n\n");
   printf("The integer roots for the given problem are: \n");
   
a=-10; 
while(a<=10){
 	
	b=-10;
	while(b<=10){
	 	
		c=-10;
 		while(c<=10){
 			
			d=3*a+7*b-5*c;
 			
 			if(d==10){
 			  printf("Solution:    a=%d    b=%d   c=%d \n", a,b,c);
			}
			
			c++;
	    }
	    
	 b=b+1;
	 }
 a=a+1;
 }
  
}
