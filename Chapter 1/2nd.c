#include <stdio.h>

int main() {
   float distance, m, feet, inches, cm;
   printf("Enter the distance between two cities (in km): ");
   scanf("%f", &distance);

   m = distance / 1000;
   printf("Distance in meters: %.2f\n", m);

   cm = distance / 100000;
   printf("Distance in cms: %.2f\n", cm);

   feet = distance / 3280.84;
   printf("Distance in feet: %.2f\n", feet);

   inches = distance / 39370.1;
   printf("Distance in inches: %.2f\n", inches);

   return 0;
}
