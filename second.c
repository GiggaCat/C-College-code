/*WAP to find greatest between two numbers*/
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("\nenter the second number :");
    scanf("%d",&b);
    if (a>b){
        printf("\na is greater");
    }
    else{
        printf("\nb is greater");
    }
    getch();
    return 0;
}