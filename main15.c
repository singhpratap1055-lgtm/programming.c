//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}
    
   
   

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
