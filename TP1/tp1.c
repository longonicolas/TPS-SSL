
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


//Punto D) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.
void eliminarCaracter(char* cadena, char caracter) {
    int i, j;
    for (i = 0, j = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != caracter) {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j] = '\0'; //Asigno el carácter nulo en la posición de J.
}
int main(){
    char cadena[50];
    char caracter;
    printf("Ingrese una cadena: ");
    scanf("%99s",cadena);
    printf("Ingrese el caracter que desea eliminar: ");
    scanf("%c",&caracter);
    printf("La cadena principal es: %s\n", cadena);
    eliminarCaracter(cadena, caracter);
    printf("La cadena resultante: %s\n", cadena);
    return 0;
}




