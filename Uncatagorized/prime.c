#include<stdio.h>
#include<conio.h>

void main() {
    
    int i,n,flag;
      printf("Enter  number ");
     scanf("%d",&n);

     for(i=2;i<=(n/2);i++){
                        if(n%i==0){
                                   flag=1;
                                   break;
                                   }
                                   }
                        if(flag==1) 
                        {printf("not prime");}
                        else {printf("prime");}
                                   
    
     
     
     
     
     
     
     
     
     
     
     
     
                                 
                               getch();
     }