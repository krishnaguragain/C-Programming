#include<stdio.h>
#include<math.h>
#define PI 3.01415
void main()
{
float area,radius,circumf;
printf("Enter Radius of a Circle : ");
scanf("%f",&radius);
area=(radius*radius)*PI;
circumf=2*PI*radius;
printf("\nArea of The circle is %f",area);
printf("\nCircumference of The Circle is %f",circumf);
getch();
}
