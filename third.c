/*WAP Check whether a number is even or odd*/
#include <stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if (a%2==0){
        printf("\nnumber is even");
    }
    else{
        printf("\nnumber is odd");
    }
    getch();
    return 0;
}