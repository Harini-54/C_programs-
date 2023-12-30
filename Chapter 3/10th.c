//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <stdio.h>
int main() {
   float x1,y1,x2,y2,x3,y3;
   float a,b;

   printf("Enter (x1,y1):");
   scanf("%f%f", &x1,&y1);
   printf("Enter (x2,y2):");
   scanf("%f%f", &x2,&y2);
   printf("Enter (x3,y3):");
   scanf("%f%f", &x3,&y3);

   a = (y2 - y1)/(x2-x1);
   b = (y3 - y2)/(x3-x2);
   if ( a==b){
     printf("Given three points lie on same line");
   }
   else{
    printf("Given three points doesn't lie on same line");
   }

   return 0;
}
