//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <math.h>
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d", &a);
     if (a%4==0){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
}