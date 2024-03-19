/*WAP to find greatest among three numbers*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("\nenter second number:");
    scanf("%d",&b);
    printf("\nenter third number:");
    scanf("%d",&c);
    if (a>=b && a>=c){
        printf("a is greater");
    }
    if (b>=a && b>=c){
        printf("b is greater");
    }
    if (c>=b && c>=a){
        printf("c is greater");
    }

    getch();
    return 0;
}