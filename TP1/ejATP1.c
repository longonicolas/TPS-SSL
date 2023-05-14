#include <stdio.h>

int main (void){

    int longitud (char c[]);
    char texto[255];
    printf("Introduzca la cadena:\n"); 
    scanf("%s",texto);
    printf("La longitud de la cadena es de: %d \n", longitud(texto));

    return 0;
}

int longitud (char c[]){

    int i,j;
    while (c[i]!='\0')
        i++;
    
    return i;
}
