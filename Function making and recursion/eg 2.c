// Pass by value and refrence

//function definition

#include<stdio.h>
void doit(int x){
	x=5;
}

int main(){
	
	int z=27;
	
	doit(z); 
	
	printf("now z is=%d",doit(z)); // having no effect ... so loop at eg 3
	
}
