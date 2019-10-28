#include <stdio.h>
int main(int argc,char* argu[]){
	float 
num1,num2,suma,resta,multiplicacion,division;
    num1=atof(argu[1]);
    num2=atof(argu[2]);
    suma=num1+num2;
    resta=num1-num2;
    multiplicacion=num1*num2;
    division=num1/num2;
    printf("%.2f\n",suma);
    printf("%.2f\n",resta);
    printf("%.2f\n",multiplicacion);
    printf("%.2f\n",division);
}