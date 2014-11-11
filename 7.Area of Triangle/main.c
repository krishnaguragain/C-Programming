#include<stdio.h>
#include<math.h>

int main(){
   
    float a,b,c;
    float s,area;
   
    printf("Enter side 'a b c' of Sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
   
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
   
    printf("Area of triangle is: %.3f",area);
   
    return 0;
}
