#include<stdio.h>
#include<stdlib.h> //library for random numbers
int main(){
	int x,y,j=0,a, i=0,b=0;
	
	
	printf("CHECKING YOUR ABILITY, \"MY DEAR SIBLING\"");
	
	while(j!=-1){
	
	    x=(rand()%(11));
	    y=(rand()%(11));  //generating random number //(rand()%(upper-lower+1))+lower
     
	    printf("\n\n%d*%d =  ",x,y);
	    scanf("%d",&j); 	
	
	a=x*y;
	if(j==a){
		printf("\nCorrect!");
		b=b+1;
	}
	else if(j!=a && j!=-1){
		printf("\nWrong!");
		printf("\nAnswer=%d",a);
		i=i+1;
	}

}
	
	
	printf("Fails = %d,\t\t\tPass = %d ",i,b);
	
	
}
