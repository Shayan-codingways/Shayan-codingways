// strcmp function

#include <stdio.h>
#include <string.h>
int main(){
	
 char str1[15], str2[15]; 
 int ret; 
 
 //strcpy(str1, "abcdef"); 
  strcpy(str1, "AbCDEF");
  strcpy(str2, "aBCDEF");
 
 ret = strcmp(str1, str2); 
 
 if(ret < 0) {
 printf("str1 is less than str2");
 } 
 else if(ret > 0) {
 printf("str2 is less than str1");
 } 
 else {
 printf("str1 is equal to str2");
 } 
 
}
