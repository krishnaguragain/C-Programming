#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Compute x-z^4/3 */

int main() {
	float val,sub,a,x,y,z;
	printf("Enter the three Numbers x y z ");
	scanf("%f %f %f",&x,&y,&z);
	
	val = pow(x-z,1.34); //1.34 = 4/3
	printf("The solution is %f",val);
	getch();
}
