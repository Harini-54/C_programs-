//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <stdio.h>
#include <math.h>
int main() {
   float x1,y1,x2,y2,r;
   float res;

   printf("Enter the center co-ordinates (x1,y1):");
   scanf("%f%f", &x1,&y1);
   printf("Enter the points (x2,y2):");
   scanf("%f%f", &x2,&y2);
   printf("Enter radius:");
   scanf("%f", &r);

   res = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   if ( res > r){
     printf("The point is outside the circle");
   }
   else if (res < r){
    printf("The point is inside the circle");
   }
   else{
    printf("The point is on the circle");
   }

   return 0;
}
