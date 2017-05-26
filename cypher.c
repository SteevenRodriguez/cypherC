#include <stdio.h>

char[] cypherC(char word[], int key);

int main(){
char palabra[];
int clave;

printf("Ingrese una palabra para ser codificada");
gets(palabra);
printf("Ingrese la clave para el cifrado");
scanf("%d",%clave);

printf(cypherC(palabra[],clave));
}

char[] cypherC(char word[],int key){
int i;
char letra;
for(i = 0; word[i] != '\0'; ++i){
        letra = word[i];
        
        if(letra >= 'a' && letra <= 'z'){
            letra = letra + key;
            
            if(letra > 'z'){
                letra = letra - 'z' + 'a' - 1;
            }
            
            word[i] = letra;
        }
        else if(letra >= 'A' && letra <= 'Z'){
            letra = letra + key;
            
            if(letra > 'Z'){
                letra = letra - 'Z' + 'A' - 1;
            }
            
            word[i] = letra;
        }
    }
return word;
}
