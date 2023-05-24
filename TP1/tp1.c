#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Punto A) Calcular y retornar la longitud de una cadena dada.
int longitud (char* cadena){
    int i=0;
    while (cadena[i]!='\0')
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

//Punto C) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.

void cadenaEnMayuscula(char cadena[]){
	
	int i = 0;
	//char cadenaMayuscula[largoDeCadena];
	
	while(cadena[i] != '\0'){
		cadena[i] = toupper(cadena[i]);
		i++;
	}
	
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

//Punto F) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.

void insertarCaracter (char* cadena)
{
    int posicion;
    char caracter;
    int tamanio = longitud(cadena);

    printf("Ingrese posicion de cadena la cual quiere reemplazar\n");
    scanf("%d",&posicion);
    while (posicion > (tamanio-1)){
        printf("Ingrese nuevamente posicion de cadena la cual quiere reemplazar\n");
        scanf("%d",&posicion);
        }
    
    printf("Ingrese caracter el cual va a ser insertado\n");
    scanf("%c",&caracter);

    cadena[posicion] = caracter;
    printf("La nueva cadena con el caracter insertado es: %s",cadena);
}

int main (){
    int menu;
    char cadena[50];
    char caracter;
    printf ("Ingrese una opcion.\n\n");
    printf ("Menu\n1: Calcular longitud de cadena.\n2: Convertir cadena de numeros a numeros.\n3: Convertir la cadena a mayuscula.\n");
    printf ("4: Eliminar todas las ocurrencias de un caracter de la cadena.\n5: Concatenar dos cadenas.\n6: Insertar un caracter en la cadena en la posicion dada.\n0: Salir\n\n");
    scanf("%d",&menu);

    while (menu != 0)
    {
        switch (menu)
        {
            case 1:
            {
                printf("Introduzca la cadena:\n"); 
                scanf("%s",cadena);
                printf("La longitud de la cadena es de: %d \n", longitud(cadena));
                break;
            }
            case 2:
            {
                printf("Introduzca la cadena:\n");
                scanf("%s",cadena);
                printf("La cadena ahora es el numero: %d \n", stringToInt(cadena,longitud(cadena)-1));
                break;
            }
            case 3:
            {
    
                printf("Ingresar cadena de caracteres\n");
                scanf("%s",cadena);
                cadenaEnMayuscula(cadena);
                printf("Cadena en mayusculas: %s",cadena);
                break;
            }
            case 4:
            {
                printf("Ingrese una cadena: ");
                scanf("%s",cadena);
                printf("Ingrese el caracter que desea eliminar: ");
                scanf(" %c",&caracter);
                printf("La cadena principal es: %s\n", cadena);
                eliminarCaracter(cadena, caracter);
                printf("La cadena resultante: %s\n", cadena);
                break;
            }
            case 5:
            {
                
                char primerCadena[100];
                char segundaCadena[100];
                printf ("Ingresar primer cadena: ");
                scanf ("%s", primerCadena);
                printf ("Ingrese segunda cadena: ");
                scanf ("%s", segundaCadena);
                concatenarCadenas (primerCadena, segundaCadena);
                printf ("Cadenas concatenadas: %s\n", primerCadena);
                system ("pause");
                break;
            }
            case 6:
            {
                printf("Ingrese cadena:\n");
                scanf("%s",cadena);
                insertarCaracter (cadena);
                break;
            }
        }

        printf ("\nVuelva a ingresar una opcion.\n\n");
        printf ("Menu\n1: Calcular longitud de cadena.\n2: Convertir cadena de numeros a numeros.\n3: Convertir la cadena a mayuscula.\n");
        printf ("4: Eliminar todas las ocurrencias de un caracter de la cadena.\n5: Concatenar dos cadenas.\n6: Insertar un caracter en la cadena en la posicion dada.\n0: Salir\n\n");
        scanf("%d",&menu);
    }
    return 0;
}
