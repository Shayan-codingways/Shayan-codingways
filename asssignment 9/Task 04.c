#include <stdio.h>
#include <ctype.h>

int WordCount(char *Text, int *size);

int main(){
    char Text[1000];
    int size;

    printf("Enter some text: ");
    fgets(Text, 1000, stdin);

    int wordCount = WordCount(Text, &size);

    printf("The number of words in the text is %d\n", wordCount);
    printf("The size of the text is %d\n", size);

    return 0;
}

int WordCount(char *Text, int *size)
{
    int wordCount = 0, inWord = 0, i = 0;

    while(Text[i] != '\0'){
    	
        if(isalpha(Text[i])){
        	
            if(!inWord){
                wordCount++;
                inWord = 1;
            }
        }
        
        else{
            inWord = 0;
        }
        
        i++;
    }
    
    *size = i;
    return wordCount;
}

