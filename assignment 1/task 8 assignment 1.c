// task 8 assignment 1: Write a C Program to play beep five times.

#include<stdio.h>
#include<windows.h> // windows.h holds funtions like beep

int main(){ 

    int x; // declaring a variable
    printf("Enter a number \"2\" for beep:"); // taking input
    scanf("%d",&x);
     
	printf("\n");
     
    // Beep(frequency,time)
    // Sleep(time)
    
	    if(x=2){
		 Beep(1200,1200);
		 Sleep(500);
		 
		 Beep(2200,2200);
		 Sleep(500);
		 
		 Beep(3200,3200);
		 Sleep(500);
		 
		 Beep(4200,4200);
		 Sleep(500);
		 
		 Beep(5200,5200);
		 Sleep(500);
	}
	

    printf("\n");
    printf("Alert!");
 

}
