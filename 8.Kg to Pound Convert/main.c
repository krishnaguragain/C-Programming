#include<stdio.h>
#include<math.h>

int main(){
   
    float kg,pound,ans;
   
    printf("Enter Weight in KG : ");
    scanf("%f",&kg);
   
    ans= kg * 2.2;
   
    printf("%f KG weight in Pound is: %f",kg,ans);
   
    return 0;
}
