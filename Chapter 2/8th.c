#include <math.h>
#include <stdio.h>

int main()
{
    int c,d;
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf(" %d",&d);
    c = c+d;
    d = c-d;
    c = c-d;
    printf("Value of c: %d\n",c);
    printf("Value of d: %d\n",d);

    

    return 0;
}