
/*C program to check whether a number entered by user is even or odd. */

#include <stdio.h>
int main(){
      int num;
      printf("Enter a positive integer: ");
      scanf("%d",&num);
      if((num%2)==0)      /* Check whether remainder is 0 or not. */
           printf("%d is even.",num);
      else
           printf("%d is odd.",num);
      return 0;
      getch();
}
