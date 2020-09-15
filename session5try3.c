#include <stdio.h>

int main5t3()
{
	int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;
	
	printf("\niResult = %d", a - b - c - d); // = -9
	
	printf("\niResult = %d", a - b + c - d); // = 3
	
	printf("\niResult = %d", a + b / c / d); // = 10
	
	printf("\niResult = %d", a + b / c * d); // = 15
	
	printf("\niResult = %d", a / b * c * d); // = 30
	
	printf("\niResult = %d", a % b / c * d); // = 0
	
	printf("\niResult = %d", a % b % c % d); // = 2
	
	printf("\niResult = %d", a / (b - c) - d); // = 0
	
	printf("\niResult = %d", a - (b - c) - d); // = 3
	
	printf("\niResult = %d", a - ((b - c) - d)); // = 13
	
	printf("\niResult = %d", (a % (b % c) * d * e)); // = 0
	
	printf("\niResult = %d", a + (b - c) * d - e); // = 18
	
	printf("\niResult = %d", (a + b) * c + d * e); // = 118
	
	printf("\niResult = %d", (a + b) * (c / d) % e); // = 0
}
