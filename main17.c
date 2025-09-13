//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,d,root1,root2,realpart,imagpart;
    printf("enter coefficient a,b,c:");
    scanf("%f %f %f", &a,&b,&c);
    d=b*b - 4*a*c;
    if(d>0){
        root1=(-b + sqrt(d)) / (2*a);
        root2=(-b - sqrt(d)) / (2*a);
       
        
        printf("Roots are real and distinct\n");
        printf("root1= %.2f , root2=%.2f\n",root1,root2);
    }
    else if(d==0){
        root1=root2=-b / (2*a);
        printf("Roots are real and equal\n");
        printf("root1=root2=%.2f\n",root1);
    }
    else{
        realpart=-b /(2*a);
        imagpart=sqrt(-d) / (2*a);
        printf("Roots are complex\n");
      
    }
    return 0;
    
}
/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
