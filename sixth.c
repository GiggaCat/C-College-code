/*WAP for calculator for the operation like  +,-,/,* using Switch case*/
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Choose the operator(+,-,*,/): ");
    scanf("%c",&ch);
    printf("\nenter the first number:");
    scanf("%d",&a);
    printf("\nenter the second number:");
    scanf("%d",&b);
    switch (ch){
        case '+':
        printf("\nSum of a and b is: %d",a+b);
        break;
        case '-':
        printf("\nSubtraction of a and b is: %d",a-b);
        break;
        case '*':
        printf("\nMultiplication of a and b is: %d",a*b);
        break;
        case '/':
        printf("\nDivision of a and b is: %d",a/b);
        break;
        default:
        printf("invalid Content");
        break;
    }
    
    return 0;
}