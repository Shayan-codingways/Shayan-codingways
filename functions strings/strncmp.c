// strncmp

#include <stdio.h>
#include <string.h>
int main () {
  char str1[15], str2[15];
  int ret;
  
  strcpy(str1, "abcdef");// storing values in str 1 and str 2
  strcpy(str2, "ABCDEF");

  ret = strncmp(str1, str2, 4);

if(ret < 0) {
printf("str1 is less than str2");
} 
else if(ret > 0) {
printf("str2 is less than str1"); 
} 
else { 
printf("str1 is equal to str2");
}
return(0);
}
