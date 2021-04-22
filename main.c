#include <stdio.h>
#include <string.h>

int main() {

    char cadena[50];

    printf("Ingresar cadena: "); //Se ingresa la cadena
    scanf("%s", cadena); //Leer la cadena

    //Inicializar la variable
    int i = 0;  

    for(i = 0; i < strlen(cadena); i++){        
        if((cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U')){        
            printf("%c\n", cadena[i]); //imprimo las vocales.
        }
    }   
}