#include <stdio.h>
#include <gsl/gsl_vector.h>

// using gsl_vector.h

int 
main(void)
{
	int i;
	gsl_vector *v = gsl_vector_alloc(2);
	gsl_vector *w = gsl_vector_alloc(2);
	// creating a vector(greek: dianysma) 
	
	gsl_vector_set(v,0,2);
	gsl_vector_set(v,1,4);
	
	gsl_vector_set(w,0,5);
	gsl_vector_set(w,1,8);


	for(i = 0; i< 2; i++)
		printf("v_%d = %.2f\n",i,gsl_vector_get(v,i));
	for(i = 0; i< 2; i++)
		printf("w_%d = %.2f\n",i,gsl_vector_get(w,i));
	printf("Vectors sum.\n");
	for(i = 0; i <2; i++)
		printf("v_ %d + w_%d = %.1lf\n",i,i,gsl_vector_get(v,i)+gsl_vector_get(w,i));


	gsl_vector_free(v);
	gsl_vector_free(w);
	//free-ing the vector we allocated space.
	return 0;
}
