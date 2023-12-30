//CH.EN.U4CYS21054 - Pasupuleti Harini
#include <math.h>
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the age of Ram:");
    scanf("%d", &a);
    printf("\nEnter the age of Shyam:");
    scanf("%d", &b);
    printf("\nEnter the age of Ajay:");
    scanf("%d", &c);
    if (a<b && a<c){
        printf("Ram is the younger child");
    }
    else if (b<a && b<c){
        printf("Shyam is younger child");
    }
    else if (c<a && c<b) {
        printf("Ajay is younger child");
    }
}