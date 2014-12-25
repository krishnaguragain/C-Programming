#include<stdio.h>
#include<conio.h>

void main() {
    int i,first,second,remiander,hcf;
      printf("Enter two numbers for HCF ");
     scanf("%d%d",&first,&second);
     
     
     while(first!=second)
     {
          if(first>second)
          {first-=second;}
          else
          {second-=first;}               
              
     }
     printf("HCF is %d",first);  
                          
                          
                          
                          
                            
                               getch();
     }