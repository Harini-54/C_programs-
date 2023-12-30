//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <stdio.h>
int main() {
   float x1,y1;

   printf("Enter (x1,y1):");
   scanf("%f%f", &x1,&y1);

   if ( y1 == 0 && x1!=0){
     printf("The point is on x-axis");
   }
   else if(x1 ==0 && y1!=0){
    printf("The point is on y-axis");
   }
   else if (x1==0 && y1==0){
    printf("The points is on origin");
   }
   else{
    printf("The points is not on any of the axis");
   }

   return 0;
}
