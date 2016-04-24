//using the gsl library random genarating a matrix 3x3. 

#include <stdio.h>
#include <gsl/gsl_matrix.h>
#include <stdlib.h>
int
main(void)
{
	int i,j,k;
	gsl_matrix  *m = gsl_matrix_alloc(3,3) ;

	for(i = 0; i< 3; i++)
		for(j=0 ; j < 3; j++)
		{
			k = rand() % 10 ;
			gsl_matrix_set(m,i,j,i+j+k);
			k = rand() %5 ;
		}

	for( i= 0; i< 3; i++)
	{	for(j=0 ; j < 3; j++)
		{
			printf("%.1f\t",gsl_matrix_get(m,i,j));
		}
		printf("\n");
	}



	return 0;
}
