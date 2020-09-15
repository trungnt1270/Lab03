#include <stdio.h>

int main5t1()
{
	int s, m=3, n=5, r, t;
	float x=3.0, y;
	
	t=n/m; // = 1
	printf("\n t = n/m = %d\n",t);
	r=n%m; // = 2
	printf("\n r = n%m = %d\n",r);
	y=n/m; // = 1.000000
	printf("\n y = n/m = %f\n",y);
	t=x*y-m/2; // = 2
	printf("\n t = x*y-m/2 = %d\n",t);
	x=x*2.0; // = 6.000000
	printf("\n x = x*2.0 = %f\n",x);
	s=(m+n)/r; // = 4
	printf("\n s = (m+n)/r = %d\n",s);
	y=--n; // = 4.000000
	printf("\n y = --n = %f\n",y);
}
