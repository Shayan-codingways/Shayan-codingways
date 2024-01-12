#include <stdio.h>
#include <string.h>
int main(){
 char mystr[50] = "I am an example to use function strchr";
 
 printf ("%s", strchr(mystr, 'u')); // start from a particular character u
 printf ("\n%s", strchr(mystr, 'a'));
 printf ("\n%s", strchr(mystr, 'f'));
 
 return 0; 
 }
