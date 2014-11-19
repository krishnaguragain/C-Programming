#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Compute a = x + |y-z| */

void main() {
	float sub,a,x,y,z;
	printf("Enter the three Numbers x y z ");
	scanf("%f %f %f",&x,&y,&z);
	sub = y-z;
	a = x + abs(sub);
	printf("The solution is %f",a);
	getch();
}
