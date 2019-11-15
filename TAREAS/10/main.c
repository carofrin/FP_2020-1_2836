#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//esta funcion es para las raices reales positivas 
void raicesR(double a, double b, double c,double determinante){
	double x1, x2;
	//es la formula general
	double parte;
	parte=sqrt(determinante);
	x1=(-b/2*a)+(parte/2*a);
	x2=(-b/2*a)-(parte/2*a);
	printf("%.2lf\n",x1);
	printf("%.2lf\n",x2);
}
//esta funcion es para raices imaginarias 
void raicesI(double a,double b, double c,double determinante){
	//se pone - en el determinante para que sea positivo y se haga la raiz 
	double parte;
	parte=sqrt(-determinante);
	//se necesitaran 4 variables
	double x11,x12,x21,x22;
	//esta es la primer x 
	x11=-b/(2*a); x12=parte/(2*a);
	//esta es la segunda x
	x21=-b/(2*a); x22=-parte/(2*a);
	if (b==0){
	   x11=0; x21=x11;
	}
	//se imprime las partes imaginarias con una i 
	printf("%.2lf+%.2lfi\n",x11,x12);
	printf("%.2lf%.2lfi\n",x21,x22);
}
//esta es si solo existe una solucion 
void raizU(double a, double b){
	double xU;
	xU=-b/(2*a);
	printf("%.2lf\n",xU);
}
int main (int argc, char* argu[]){
	//estas son las 3 entradas
	double a,b,c;
	a=atof(argu[1]);b=atof(argu[2]);c=atof(argu[3]);
	double determinante;
	//se hace el determinante 
	determinante=pow(b,2);
	determinante=determinante-(4*a*c);
	//si es 0 solo tiene una solucion 
	if (determinante==0){
	   raizU(a,b);
	}
	//si no debe ser mayor o menor 
	else{
	    //si es mayor se usan las raices reales
	    if (determinante>0){
	    raicesR(a,b,c,determinante);
	    }
	    //si no se usa para las raices imaginarias
	    else{
	        raicesI(a,b,c,determinante);
	    }
	}
	return 0;
}