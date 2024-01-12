// Filing

#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch;
	
	FILE *ptr; //file declaration
	ptr=fopen("floatinterger query.c","r"); // read (file in same folder)
	
	
	printf("\n %p %d",ptr,ptr);
	
	printf("\n\n");
	
	// print
	while(1){
		ch=fgetc(ptr);// generate characters from file
		
		if(ch==EOF){  // eof is end character
			break;
		}
		else{
			printf(" %c",ch);
		}
	}
	
	
}
