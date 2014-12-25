#include<stdio.h>
#include<conio.h>

void main() {
     
     int first,second,remiander,temp;
      printf("Enter two numbers for HCF ");
    scanf("%d%d",&first,&second);
    
    if(first<second){
                     temp = second;
                     second = first;
                     first= second;
                     }
                     
    
    remiander = first%second;
    
    while(remiander>0)
    {
      first= second; second = remiander;  remiander = first%second;
      }
        printf("HCF is %d",second);           
           
                     
//    if(remiander==0) {
//                     printf("HCF is %d",second);
//                     }
//    else {
//    
//         first = second;
//         second = remiander;
//       }

    
   //  printf("HCF is %d",second);
     
     
     
     
     
     
     
     
     
          
      getch();
     }