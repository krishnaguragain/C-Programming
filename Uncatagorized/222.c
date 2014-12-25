#include<stdio.h>
#include<conio.h>

void main() {
     int n,sum=0,i;
     printf("Enter  N ");
    scanf("%d",&n);
     
   //  sum = (n*(n+1))/2;
   //  printf("Ans %d",sum);
   
   
   for(i=0;i<=n;i++) {
         sum = sum+i;
         }
         printf("Ans %d",sum);
     getch();
     }