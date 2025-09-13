//: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//-100: Grade A
//80-89: Grade B
//70-79: Grade C
//60-69: Grade D
//below 60: Grade F.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a marks:");
    scanf("%d", &n);
    if(n==100){
        printf("Grade A\n");
    }
    else if(n>=80 && n<=89){
        printf("Grade B\n");
    }
    else if(n>=70 && n<=79){
        printf("Grade C\n");
    }
    else if(n>=60 && n<=69){
        printf("Grade D");
    }
    else{
        printf("Grade F\n");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
