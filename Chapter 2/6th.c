#include <math.h>
#include <stdio.h>

int main()
{
    float t, wcf,v;
    printf("Enter the value of t: ");
    scanf("%f",&t);
    printf("Enter the value of v: ");
    scanf("%f",&v);
    wcf = 35.74 + 0.6215*t + (( 0.4275*t - 35.75 ) * pow(v,0.16));
    printf("Result: %f",wcf);
    

    return 0;
}
