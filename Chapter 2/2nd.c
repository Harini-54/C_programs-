#include <stdio.h>

int main() {
   int i,k,num,rev;

   printf("Enter a five digit number: ");
   scanf("%d",&num);
   printf("Reverse of the number:");
   for (i=0;i<5;i++){
    k = num%10;
    printf("%d",k);
    num = num/10;
   }
   return 0;
}

