#include <stdio.h>
#include "func.h"
void di (double a,double a1,double b,double b1)
{
	double c1,c2;
	if (b == 0 && b1 == 0)
        printf("EROR division by 0 + 0i isn't allowed.");
    else
	   c1 = (a*b+a1*b1)/(b*b+b1*b1);
       c2 = (b*a1-b1*a)/(b * b+b1*b1);
	   printf("multiplication= %0.3lf + %0.3lfi\n", c1, c2);
}
