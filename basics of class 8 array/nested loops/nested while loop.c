#include<stdio.h>
int main(){
	int r,c,s;
	
	
	while(r<=5)
	{
        c=1;
	    while(c<=2){
	    	s=r+c;
	    	printf("r=%d c=%d sum=%d\n",r,c,s);
			
			c++;	
		}
		
	printf("\n");
	r++;
    }
}
