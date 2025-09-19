//Q23: Write a program to calculate library fine based on late days as follows:
//First 5 days late: ₹2/day
//Next 5 days late: ₹4/day
//Next 20 days days late: ₹6/day
//More than 30 days: Membership Cancelled.
#include<stdio.h>
int main(){
    int day;
    int fine=0;
    printf("Enter a day:");
    scanf("%d", &day);
    
    if(day<=5){
        fine=day*2;
        printf("The fine will be %d\n", fine);
        
    }
    else if(day<=10){
        fine=(5*2) + (day-5)*4;
        printf("The fine will be %d\n",fine);
    }
    else if(day<=30){
        fine=(5*2) + (5*4) + (day-10)*6;
        printf("The fine will be %d\n",fine);
    }
    else{
        printf("Your membership is cancelled now\n ");
    }
    return 0;
    
    
}
/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
