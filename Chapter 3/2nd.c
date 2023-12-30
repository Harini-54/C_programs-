//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <math.h>
#include <stdio.h>
int main()
{
    int a;
    float tmp;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a==0){
        printf("%d is either odd or even",a);
    }
    tmp = a%2;
     if (tmp==0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }
}