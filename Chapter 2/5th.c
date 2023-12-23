#include <stdio.h>
#include <math.h>
int main() {
   float L1,L2,G1,G2,D,a,b;
   printf("Enter latitude in degrees:");
   scanf("%f", &L1);
   scanf("%f", &L2);
   printf("Enter Longitude in degrees:");
   scanf("%f", &G1);
   scanf("%f", &G2);
   a = cos(L1-L2);
   b = cos(G2-G1);

   D = 3963 *(acos(a*b));
   printf("Distance:%f",D);
   return 0;
}