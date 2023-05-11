

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