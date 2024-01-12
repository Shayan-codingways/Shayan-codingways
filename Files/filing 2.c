// Filing

#include<stdio.h>
#include<stdlib.h>

int main(){


	FILE *ptr;
	ptr=fopen("floatinterger query.txt","w"); // creates txt file together with below text 

	
	fprintf(ptr,"//hey guyz");
	
	
	printf("\n\n");
	
	fclose(ptr); // file close
	
}
