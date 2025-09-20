//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
    int i,n,product=1;
    printf("Enter a value: ");
    scanf("%d", &n);
    for(i=2;i<=n;i+=2){
        product=product*i;
    }
    printf("The product of even numbers from 1 to %d is%d \n",n,product);
    return 0;
   
}
    
/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
