//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <stdio.h>
int main() {
   float len,bred;
   float area_rect,per_rect;

   printf("Enter the length and breadth of a rectangle:");
   scanf("%f", &len);
   scanf("%f", &bred);
   area_rect = len * bred;
   per_rect = 2 *(len+bred);
   if ( area_rect > per_rect){
     printf("Area is greater than perimeter");
   }
   else{
    printf("Area is not greater than perimeter");
   }

   return 0;
}

