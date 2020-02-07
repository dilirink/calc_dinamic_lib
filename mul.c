#include <stdio.h>
#include "func.h"
void mul (double a,double a1,double b,double b1){
	double c1,c2;
	  c1 = a*b - a1*b1;
      c2 = a1*b + a*b1;

      if (c1 >= 0)
        printf("multiplication= %0.3lf + %0.3lfi\n", c1, c2);
      else
        printf("multiplication= %0.3lf %0.3lfi\n", c1, c2);
}
