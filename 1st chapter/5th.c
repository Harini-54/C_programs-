#include <stdio.h>

int main() {
   float len,bred,rad;
   float area_cir, area_rect,per_cir,per_rect;
   float pi = 22/7;

   printf("Enter the length and breadth of a rectangle:");
   scanf("%f", &len);
   scanf("%f", &bred);

   printf("Enter the radius of a circle:");
   scanf("%f", &rad);

   area_rect = len * bred;
   area_cir = pi*rad*rad;
   per_rect = 2 *(len+bred);
   per_cir = 2*pi*rad;

   printf("Perimeter of a rectangle: %.2f\n",per_rect);

   printf("Area of a rectangle: %.2f\n",area_rect);
   
   printf("Perimeter of a circle: %.2f\n",per_cir);
   
   printf("Area of a circle: %.2f\n",area_cir);

   return 0;
}

