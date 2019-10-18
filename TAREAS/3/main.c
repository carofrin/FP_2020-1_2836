#include <stdio.h>
int main(int argc, char *argv[])
{
	double sum, resta, multi, div;
	double num1, num2;
	num1=atof(argv[1]);
	num2=atof(argv[2]);

	sum = (double)num1+num2;
	resta = (double)num1-num2;
	multi = (double)num1*num2;
	div = (double)num1/num2;

	printf("%f\n",sum);
	printf("%f\n",resta);
	printf("%f\n",multi);
	printf("%f\n",div);

	return 0;
}