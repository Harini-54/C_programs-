//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <math.h>
#include <stdio.h>
int main()
{
    int a,b,c, res;
    printf("Enter the first angle:");
    scanf("%d", &a);
    printf("Enter the second angle:");
    scanf("%d", &b);
    printf("Enter the third angle:");
    scanf("%d", &c);
    res = a+b+c;
    if (res == 180){
        printf("Triangle is valid with given angles");
    }
    else {
        printf("Triangle is not valid with given angles");
    }
}