#include <stdio.h>
#include <gsl/gsl_math.h>
//calculating a simple power using the function offered from gsl lib.
int 
main(void)
{
	double x;
	int n;
	printf("Calculatign the x^n.\n");
	printf("Enter a number x.(double) followed by the power (n)(int)\n");
	scanf("%lf",&x);
	scanf("%d",&n);
	printf("(%lf) ^ %d = %lf\n",x,n,gsl_pow_int(x,n));




	return 0;
}
