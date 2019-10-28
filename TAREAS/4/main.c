#include <stdio.h>
int main (int argc,char* argu[]){
	//se declara otra lista para guardar la lista de argu 
	//tambien se declara la variable suma 
	//argc es el numero de argumentos
	float lista[argc],suma=0
	//se declara promedio como numero real porque el resultado 
	//suele ser con decimales
	float promedio;
	//este for es para copiar argu a lista 
	//se empieza con 1 y no con 0 porque argu[0] es ./main
	for (int i=1;i<argc;i++){
	lista[i]=atof(argu[i]);
	}
	//este for es para sumar los elementos de la lista 
	//al principio suma=0 asi que la primera vez suma=lista[1] 
	//si suma=lista[1] la segunda vez que haga el proceso sera 
	//suma=lista[1]+lista[2] y asi sucesivamente 
	for (int i=1;i<argc:i++){
	    suma=suma+lista[i];
	}
	//en el promedio a la suma se le divide por argc-1
	//para quitar el ./main y solo cuenten los numeros que entran 
	promedio=(float)suma/(argc-1);
	printf("%.2f\n",promedio);
	return 0;
}