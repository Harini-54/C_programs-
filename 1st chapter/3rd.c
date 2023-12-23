#include <stdio.h>

int main() {
    
   float marks1,marks2,marks3,marks4,marks5,sum,percnt;

    printf("Enter the marks scored in subject 1: ");
    scanf("%f", &marks1);

    printf("Enter the marks scored in subject 2: ");
    scanf("%f", &marks2);

     printf("Enter the marks scored in subject 3: ");
    scanf("%f", &marks3);

     printf("Enter the marks scored in subject 4: ");
    scanf("%f", &marks4);

     printf("Enter the marks scored in subject 5: ");
    scanf("%f", &marks5);

    sum += marks1+marks2+marks3+marks4+marks5;
   
   printf("The aggregrate marks of the student is %.2f\n",sum);

   percnt = (sum/500)*100;
   
   printf("The percentage marks of student is %.2f",percnt);
   

   return 0;
}
