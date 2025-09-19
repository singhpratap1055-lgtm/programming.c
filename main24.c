//Q24: Write a program to calculate electricity bill based on units consumed with these rates:
//First 100 units at ₹5/unit
//Next 100 units at ₹7/unit
//Next 100 units at ₹10/unit
//Above at ₹12/unit
#include<stdio.h>
int main(){
    int units;
    int bill=0;
    printf("Enter a units:");
    scanf("%d", &units);
    
    if(units<=100){
        bill=units*5;
        printf("The electricty bill is %d\n", bill);
        
    }
    else if(units<=200){
        bill=(100*5) + (units-100)*7;
        printf("The electricity bill is %d\n",bill);
    }
    else if(units<=300){
        bill=(100*5) + (100*7) + (units-200)*10;
        printf("The electricity bill is %d\n",bill);
    }
    else{
        bill=(100*5) + (100*7) + (100*10) + (units-300)*12;
        printf("the electricity bill is %d\n ",bill);
    }
    return 0;
    
    
}
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/


