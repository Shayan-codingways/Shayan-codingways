// append
#include<stdio.h>
#include<stdlib.h>

int main(){
	

	FILE *ptr;
	
    ptr=fopen("floatinterger query.txt","a"); // also allows to change text in fprintf and print in same file
	
	fprintf(ptr,"//hey guyz");
	
	
	printf("\n\n");
	
}
