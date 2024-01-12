
    // storing values in array
    // using macro 
    #define size 5// for task 4
    #include <stdio.h>
    int main(){
        int i;
        
   /* // 1st method
        int arrOfNumbers[5];
        arrOfNumbers[0]=10;
        arrOfNumbers[1]=20;
        arrOfNumbers[2]=30;
        arrOfNumbers[3]=40;
        arrOfNumbers[4]=50;
        
        // 2nd alternative
        int arrOfNumbers[5]={10,20,30,40,50};
        
        //3rd alternative
        int arrOfNumbers[]={10,20,30,40,50}; // no size predefined, can be any amount of numbers store. 
     */   
        //4th alternative using macro
        int arrOfNumbers[size]={10,20,30,40,50};
        
        for(i=1; i<5; i++){
            if(arrOfNumbers[i] > 20)
            printf("%d\n", arrOfNumbers[i]);
        }
        
        return 0;
    }
    
    
