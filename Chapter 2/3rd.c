#include <stdio.h>
#include <math.h>
int main() {
   float a,b,c,s;
   float area_tri;

   printf("Enter the sides of a triangle:");
   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);

   s = (a+b+c)/2;
   area_tri = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("Area of a triangle: %.2f\n",area_tri);

   return 0;
}

