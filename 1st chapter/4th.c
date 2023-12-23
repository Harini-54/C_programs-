#include <stdio.h>

int main() {
   float F,C;
   printf("Enter the temperature in fahrenhit: ");
   scanf("%f", &F);

   C = (F - 32) * 5/9;
   printf("Temperature in centigrade is: %.2f\n", C);


   return 0;
}

