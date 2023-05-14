
// Punto A) Calcular y retornar la longitud de una cadena dada.
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

// Punto B) Convertir una cadena de dígitos en su equivalente numérico.
int stringToInt (char* cadena,int largoDeCadena) {
    int numero=0;
    int multiplicador = 1;
    for (int i=largoDeCadena; i>=0 ;i--)
    {
        int aux = (cadena[i] - 48) * multiplicador;
        multiplicador*=10;
        numero += aux;
    }
    return numero;
} 

int main () {
    int numero = stringToInt ("12345",4);
    return 0;
}
