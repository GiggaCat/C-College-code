/*WAP to check a mark of a subject lie in which division*/
#include<stdio.h>
int main(){
    int a;
    printf("enter your marks: ");
    scanf("%d",&a);
    if (a<33){
        printf("Sorry you are fail..");
    }
    else if (a>=33 && a<45){
        printf("Fourth Division");
    }
    else if (a>=45 && a<65){
        printf("Third Division");
    }
    else if (a>=65 && a<80){
        printf("Second Division");
    }
    else if (a>=80 && a<=100){
        printf("First Division");
    }
    else {
        printf("Invalid Content");
    }
    return 0;
}