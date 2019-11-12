#include <stdio.h>
#include <stdlib.h>

int saludos (int personas){
        int saludo, total;
        saludo=personas-1;
        if (saludo==1){
                return saludo;
        }
        total= saludo+saludos(personas-1);
        return total;
}

int main (int argc, char *argu[]) {
        int personas, total;
        personas=atoi(argu[1]);
        total=saludos(personas);
        printf("%i\n", total );
}