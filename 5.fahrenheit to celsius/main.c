/*program to convert temperature in
Fahrenheit into Celsius degree*/
#include<stdio.h>
#include<conio.h>
main()
{
float f,c;

printf("\nEnter temperature in Fahrenheit : ");
scanf("%f",&f);
c=(f-32)*5/9;  //Formula to convert Fahrenheit to Celsius
printf("\nTemprature in Celsius : %f",c);

}
