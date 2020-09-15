#include <stdio.h>

int main5t2()
{
	float a, feet, inch;
	printf("Nhap vao so cm : ");
	scanf("%f", &a);
	
	inch = a / 2.54;
	feet = inch / 12;
	
	printf("\n%.1f centimeters is %.1f feet\n", a, feet);
	printf("\n%.2f centimeters is %.1f inches\n", a, inch);
}
