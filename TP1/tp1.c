#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Punto A) Calcular y retornar la longitud de una cadena dada.

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

// Punto B) Convertir una cadena de dÃ­gitos en su equivalente numÃ©rico.
int stringToInt (char* cadena,int largoDeCadena) {
    int numero=0;
    int multiplicador = 1;
    int i;
    for (i=largoDeCadena; i>=0 ;i--)
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

//Punto C) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.

void cadenaEnMayuscula(char cadena[], int largoDeCadena){
	
	int i;
	//char cadenaMayuscula[largoDeCadena];
	
	for(i=0; i<largoDeCadena; i++){
		cadena[i] = toupper(cadena[i]);
	}
	
}

int main(){
    
    int i, tamanio;
    char cadena[50+1];
    
    printf("Ingresar cadena de caracteres\n");
    scanf("%s",cadena);
    
    tamanio = sizeof(cadena);
    
    cadenaEnMayuscula(cadena,tamanio);
    
   printf(cadena);

    return 0;
}

//Punto D) Eliminar de una cadena dada todas las ocurrencias de un carÃ¡cter dado.
void eliminarCaracter(char* cadena, char caracter) {
    int i, j;
    for (i = 0, j = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != caracter) {
            cadena[j] = cadena[i];
            j++;
        }
    }
    cadena[j] = '\0';
}
int main(){
    char cadena[50];
    char caracter;
    printf("Ingrese una cadena: ");
    scanf("%49s",cadena);
    printf("Ingrese el caracter que desea eliminar: ");
    scanf("%c",&caracter);
    printf("La cadena principal es: %s\n", cadena);
    eliminarCaracter(cadena, caracter);
    printf("La cadena resultante: %s\n", cadena);
    return 0;
}


//Punto E) Concatenar al final de la primera cadena dada una segunda cadena tambiÃ©n dada.

void concatenarCadenas (char primerCadena[], char segundaCadena[]){

    int i, j;
    for (i = 0; primerCadena [i] != 0; i++);

    for (j = 0; segundaCadena [j] != 0; j++){
        primerCadena [i] = segundaCadena [j];
        i++;
    }
    primerCadena[i] = '\0';
}
int main() {

    char primerCadena[100];
    char segundaCadena[100];

    printf ("Ingresar primer cadena: ");
    scanf ("%s", primerCadena);
    printf ("Ingrese segunda cadena: ");
    scanf ("%s", segundaCadena);
    concatenarCadenas (primerCadena, segundaCadena);
    printf ("Cadenas concatenadas: %s\n", primerCadena);
    
    system ("pause");
    return 0;
}

//Punto F) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.

int main(){
    char *cadena;
    int posicion;
    char caracter;
    
    printf("Ingrese cadena:\n");
    scanf("%s",&cadena);
    int longitud = strlen(&cadena);

    printf("Ingrese posicion de cadena la cual quiere reemplazar\n");
    scanf("%d",&posicion);
    while (posicion > (longitud-1)){
        printf("Ingrese nuevamente posicion de cadena la cual quiere reemplazar\n");
        scanf("%d",&posicion);
        }
    
    printf("Ingrese caracter el cual va a ser insertado\n");
    scanf("%c",&caracter);

    cadena[posicion] = caracter;
    printf("La nueva cadena con el caracter insertado es: %s",&cadena);

    return 0;
}