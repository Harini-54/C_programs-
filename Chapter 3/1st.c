//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <math.h>
#include <stdio.h>
int main()
{
    float sp,cp,p,l,diff;
    printf("Enter the cost price of a product:");
    scanf("%f", &cp);
    printf("Enter the selling price of a product:");
    scanf("%f", &sp);
    diff = sp-cp;
    if (diff>0){
        p = (diff/cp)*100;
        printf("He got profit by %.2f%%",p);
    }
    else if (diff==0){
        printf("He didn't got any profit or loss");
    }
    else {
        l = (-diff/cp)*100;
        printf("He got loss by %.2f%%",l);
    }


}