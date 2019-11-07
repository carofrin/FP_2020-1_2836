#include <stdio.h>
#include <stdlib.h>
#define x 5/9;
int main(int argc, char*argu[]){
	//el primer argumento es un munero entero
	int n1;
	//el segundo es flotante 
	float n2, resultado;
	//se hace la conversion el primero en entero y el segundo en flotante
	n1=atoi(argu[1]);
	n2=atof(argu[2]);
	//se pregunta por el primer argumento
	if (n1==1){
	   //el 1 es para la conversion de F a C
	   resultado=n2-32;
	   resultado=resultado*x;
	}
	//si no es 1 debe ser 0 
	else{
	    //el 0 es para pasar de C a F 
	    resultado=n2*1.8;
	    resultado=resultado+32;
	}
	printf("%.2f\n",resultado);
	return 0;
}