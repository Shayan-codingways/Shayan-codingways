// code 

#include <stdio.h>

int main() {
int i,j;
int k;

char string[6] = "shayan";

i=0;
while (i != 6) {
    j=0;
    while(j!=i+1){
        printf("%c",string[j]);
        j+=1;
        
    }
        i+=1;

    printf("\n");
}
}

