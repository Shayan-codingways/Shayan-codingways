#include <stdio.h>
#include <string.h>
int main(){
 char s1[20] = "string 1";
 char s2[50] = "string 2 : I will be copied into s1";
 
 /* this function has copied s2 into s1*/
 strcpy(s1,s2);
 
 printf("String s1 is: %s", s1);
 return 0; }
