#include<stdio.h>
#include<stdlib.h>
//se usara una funcion llamada raiz 
double raiz(double num, double tolerancia, double resultado){
	//se declaran dos variables mas necesarias 
	double division,diferencia;
	//aqui esta el algoritmo 
	division=num/resultado;
	diferencia=resultado-division;
	//se hace que diferencia sea con valor absoluto 
	diferencia= diferencia> 0? diferencia:-diferencia;
	//si la diferencia es menor o igual que la tolerancia se retorna 
	//el candidato a resultado 
	if(diferencia<=tolerancia){
	     return resultado;
	}
	//si no 
	else{
	    //se obtiene nuevo candidato 
	    resultado=(resultado+division)/2;
	    //y se retorna la funcion con el nuevo candidato 
	    return raiz(num,tolerancia,resultado);
	}
}
int main (int argc, char *argu[]){
	//se declaran las tres variables necesarias para la funcion
	double num,tolerancia,resultado;
	//y los argumentos se guardan en estas variables 
	num=atof(argu[1]); tolerancia=atof(argu[2]); resultado=atof(argu[3]);
	//en esta variable se guarda el resultado 
	resultado=raiz(num,tolerancia,resultado);
	//y se muestra
	printf("%lf\n",resultado);
}