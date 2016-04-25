//using gsl library to demonstrate the amount of permutations starting form the identity.


#include <stdio.h>
#include <gsl/gsl_permutation.h>

int main(void)
{


	gsl_permutation *p = gsl_permutation_alloc(4);
	gsl_permutation_init(p);

	do
	{
		gsl_permutation_fprintf(stdout,p,"%u");
		printf("\n");
	}while(gsl_permutation_next(p) == GSL_SUCCESS) ;	


	gsl_permutation_free(p);

	return 0;
}
