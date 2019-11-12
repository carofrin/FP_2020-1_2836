#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc, char *argu[]){
//numeroD es el numero de digitos
int numeroD;
//se aprovecha la función strlen para saber cuantos caracteres tiene 
numeroD=strlen(argu[1]);
//argumentos de caracteres es una nueva lista para guardar el numero 
char arguc[numeroD];
//resultado empiez con el neutro aditivo 
int resultado=0;
//digitos es una lista de eneros para guardar el numero 
int digitos[numeroD];
//se suman los caracteres de acuerdo con el numero de digitos 
for(int i=0;i<numeroD;i++){
	//se guarda el numero en la lista de caracteres 
	arguc[i]=argu[1][i];
	//se guarda otra vez pero en la lista de enteros
	digitos[i]=atoi(&arguc[i]);
	//se suma cada digito por separado 
	resultado=resultado+digitos[i];
}
//se imprime el resultado
printf("%i\n",resultado);
return 0;
}