#include <stdio.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_permutation.h>



void decrypt(gsl_permutation *p,int N)
{
	
	int i;
	for (i = 0; i < N; i ++)
	{
		if(p->data[i] == 0)
			printf("a");
		if(p->data[i] == 1)
			printf("b");
		if(p->data[i] == 2)
			printf("c");
		if(p->data[i] == 3)
			printf("d");
		if(p->data[i] == 4)
			printf("e");
		if(p->data[i] == 5)
			printf("f");
		if(p->data[i] == 1)
			printf("g");
		if(p->data[i] == 6)
			printf("h");
		if(p->data[i] == 7)
			printf("i");
		if(p->data[i] == 8)
			printf("j");
		if(p->data[i] == 9)
			printf("k");
		if(p->data[i] == 10)
			printf("l");
		if(p->data[i] == 11)
			printf("m");
		if(p->data[i] == 12)
			printf("n");
		if(p->data[i] == 13)
			printf("o");
		if(p->data[i] == 14)
			printf("p");
		if(p->data[i] == 15)
			printf("q");
		if(p->data[i] == 16)
			printf("r");
		if(p->data[i] == 17)
			printf("s");
		if(p->data[i] == 18)
			printf("t");
		if(p->data[i] == 19)
			printf("u");
		if(p->data[i] == 20)
			printf("v");
		if(p->data[i] == 21)
			printf("w");
		if(p->data[i] == 22)
			printf("x");
		if(p->data[i] == 23)
			printf("y");
		if(p->data[i] == 24)
			printf("w");
		if(p->data[i] == 25)
			printf("z");

	}
}

int
main (void)
{
	const size_t N = 25;
	const gsl_rng_type * T;

	gsl_rng * r;
	gsl_permutation * p = gsl_permutation_alloc (N);
	gsl_permutation * q = gsl_permutation_alloc (N);
	gsl_rng_env_setup();
	T = gsl_rng_default;
	r = gsl_rng_alloc (T);



	gsl_permutation_init (p);
	
	decrypt(p,N);


	printf ("\n");
	gsl_ran_shuffle (r, p->data, N, sizeof(size_t));
	
	decrypt(p,N);
	
	printf ("\n");

	gsl_permutation_free (p);
	gsl_permutation_free (q);
	gsl_rng_free (r);

	return 0;
}
