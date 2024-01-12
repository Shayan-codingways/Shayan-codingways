// code 

#include <stdio.h>

int main() {
int i,j;

char string[6] = "shayan";

i=0;
while (i != 6) {
    printf("%c",string[i]);
    j=i+1;
    while (j != 6){
        printf("%c",string[j]);
        j+=1 ;
    }
        i+=1;

    printf("\n");
}
}

