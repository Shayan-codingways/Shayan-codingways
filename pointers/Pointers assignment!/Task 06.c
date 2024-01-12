// task 06 
#include<stdio.h>
#include<string.h>
int main(){
	int size;
	char text[]="i know That ITP isn't?easy to do.well i must do it to pass.";
	
	size=strlen(text);// will also take gaps so eliminate it on punctuations. 
	
    printf("size is %d\n\n", size);
	sentencecase(text, &size); 
	
	printf("\n\nCorrected Text: %s\n", text);
}

#include <stdio.h>

void sentencecase(char *Text, int *size) {
    int i;
    
    // changing 1st letter to capital
    for(i=1; i<*size; i++){
    	if(Text[0]>='a' && Text[0]<='z'){
    		Text[0]=Text[0]-32;
		}
    }
    	
    // changing capital in between to smaller
    for(i=1; i<*size; i++){
	
    	if(Text[i]>='A' && Text[i]<='Z'){
    		Text[i]=Text[i]+32;
		}
    }
    
    // changing after puctuation to smaller by eliminating gaps. 
    for(i=1;i<*size;i++){
	
		if(Text[i]=='.' || Text[i]=='?' || Text[i]=='!'){
			Text[i+1]-=32;
		}
	}
}







	

