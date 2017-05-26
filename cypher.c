#include <stdio.h>

cypherC(char word[], int key);

int main(int argc, char *argv[]){
if(argc==2){
	cypherC(argv[2],argv[1]);
}

char palabra[100];
int clave;

printf("Ingrese una palabra para ser codificada: ");
fgets(palabra, 100, stdin);
printf("Ingrese la clave para el cifrado: ");
scanf("%d", &clave);
cypherC(palabra,clave);
return 0;
}

cypherC(char word[100],int key){
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
printf("Tu clave es %s",word);
}
