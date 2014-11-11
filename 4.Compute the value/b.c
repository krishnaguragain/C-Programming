#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Compute sin-1 root x2+y2 /z */
#define PI 3.14159265
int main() {
	float val,sub,a,x,y,z;
	printf("Enter the three Numbers x y z ");
	scanf("%f %f %f",&x,&y,&z);
	sub = sqrt((x*x+y*y)/z);
	
	val = 180.0 / PI;
	a = asin(sub) * val;
	
	printf("The solution is %f",val);
	getch();
}
