#include<stdio.h>
#include<conio.h>

void main() {
    int i,n,temp,first=0,second=1;
      printf("Enter  number ");
     scanf("%d",&n);
     
     for(i=1;i<n;i++)
     {
     if(i<=1)
    { temp=i;}
     else 
     {
          temp=first+second;
          first= second;
          second=temp;
      }
      printf("%d+",temp);
     
     
     }
      printf("%d",first+second);
     
     
     
     
     
     
     
     
     
     
     
                                
                               getch();
     }