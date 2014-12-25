#include<stdio.h>
#include<conio.h>

void main() {
     int rsize,csize,r,c;
     printf("enter no of rows and columns :- ");
     scanf("%d %d",&rsize,&csize);
     
     for(r=1;r<=rsize;r++) {
           for(c=1;c<=csize;c++) {
                                 if(r==1||r==rsize||c==1||c==csize)
                                 
                                 printf("*");
                                 
                                 else
                                 printf(" ");
                                 
                                 
                                 }
           
           
          printf("\n");
            
           
           }
      
     getch();
     
     }