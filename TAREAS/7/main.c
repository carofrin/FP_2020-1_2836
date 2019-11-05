#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc,char*argv[){
	double operacion,base,potencia;//declaracion variables
	base=atof(argv[1]);//cambiamos elprimer argumento double sera la base
	potencia=atof(argv[2]);//cambiamos el segundo argumento a double sera la potencia
	operacion=pow(base,potencia);//operamos ambas variables
	printf("%.2f\n",operacion);//imprimimos el resultado
	return 0;
}