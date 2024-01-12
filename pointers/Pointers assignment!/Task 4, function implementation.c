#include <stdio.h>


// condition well set
// if tab's there, line space there or space there there then don't add one.
// but if you are on a charcter with gaps/line space/tab space before or the character is the first one then add 1
// it also implies that characters in between won't add count as lower condition doesn't holds. 

int WordCount(char *Text, int *size) {
    
    int i,count = 0;
 
    for ( i = 0; i < *size; i++) {
        
		if ((Text[i] != ' ' && Text[i] != '\t' && Text[i] != '\n') &&
            (i == 0 || Text[i - 1] == ' ' || Text[i - 1] == '\t' || Text[i - 1] == '\n')) {
            
			count++;
        }
    }

    return count;
}

int main() {
  int size;
  int Count;
  char text[]="Hello guyz. Are you feeling well.   So where are you going?";
  	
  size=strlen(text);
  printf("%d \n",size);
  
  Count = WordCount(text,&size);
  printf("Word Count is %d",Count);
  
}

