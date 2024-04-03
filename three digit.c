#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the three digit number:");
    scanf("%d",&a);
    b=a/100;
    c=(a/10)-(b*10);
    d=a-(b*100)-(c*10);
    e=b+c+d;
    printf("\n%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
    printf("\nTHE SUM OF THREE DIGITS ARE:%d",e);
    
   
   
    return 0;
}
