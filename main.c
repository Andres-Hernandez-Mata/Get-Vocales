#include <stdio.h>
#include <string.h>

int main() {

    char cadena[50];
		//Se ingresa la cadena
    printf("Ingresar cadena: "); 
		//Leer la cadena
    scanf("%s", cadena); 

    //Inicializar la variable
    int i = 0;  

    for(i = 0; i < strlen(cadena); i++){        
        if((cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U')){        
            //imprimo las vocales
						printf("%c\n", cadena[i]); 
        }
    }   
}