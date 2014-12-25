#include<stdio.h>
#include<conio.h>

void main() {
    int i,first,second,remiander,hcf;
      printf("Enter two numbers for HCF ");
     scanf("%d%d",&first,&second);
     
     for(i=1;i<=first|| i<=second; i++)
     {
     if(first%i==0 && second%i==0)
     
       hcf=i;            
      }
      printf("\n");
     printf("HCF of two numbers %d and %d = %d",first,second,hcf);
      
     
     
     
     
     
     
        getch();
     }