#include <stdio.h>

cypherC(char word[], int key);
encodeMorse(char word[]);
int main(int argc, char** argv){
if(argc==3){
	char palabra2[100];
	strcpy(palabra2,argv[2]);
	int kee= atoi(argv[1]);
	cypherC(palabra2,kee);
	return ;

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
printf("Tu clave es %s ",word);
encodeMorse(word);
}
encodeMorse(char word2[100]){
int k;
char** mor;
for(k = 0; word2[k]!='\0'; ++k){
	char letra=word2[k];
	if (letra=='A' || letra=='a')
		mor[k] = ".-";
	else if (letra==' ')
              	mor[k]  = "/";
	else if (letra=='B' || letra=='b')
		mor[k] ="-...";
	else if (letra=='C' || letra=='c')
		mor[k] = "-.-.";
	else if (letra=='D' || letra=='d')
		mor[k] = "-..";
	else if (letra=='E' || letra=='e')
		mor[k] = ".";
	else if (letra=='F' || letra=='f')
		mor[k] = "..-.";
	else if (letra=='G' || letra=='g')
		mor[k] = "--.";
	else if (letra=='H' || letra=='h')
		mor[k] = "....";
	else if (letra=='I' || letra=='i')
		mor[k] = "..";
	else if (letra=='J' || letra=='j')
		mor[k] = ".---";
	else if (letra=='K' || letra=='k')
		mor[k] = "-.-";
	else if (letra=='L' || letra=='l')
		mor[k] = ".-..";
	else if (letra=='M' || letra=='m')
		mor[k] = "--";
	else if (letra=='N' || letra=='n')
		mor[k] = "-.";
	else if (letra=='O' || letra=='o')
		mor[k] = "---";
	else if (letra=='P' || letra=='p')
		mor[k] = ".--.";
	else if (letra=='Q' || letra=='q')
		mor[k] = "--.-";
	else if (letra=='R' || letra=='r')
		mor[k] = ".-.";
	else if (letra=='S' || letra=='s')
		mor[k] = "...";
	else if (letra=='T' || letra=='t')
		mor[k] = "-";
	else if (letra=='U' || letra=='u')
		mor[k] = "..-";
	else if (letra=='V' || letra=='v')
		mor[k] = "...-";
	else if (letra=='W' || letra=='w')
		mor[k] = ".--";
	else if (letra=='X' || letra=='x')
		mor[k] = "-..-";
	else if (letra=='Y' || letra=='y')
		mor[k] = "-.--";
	else if (letra=='Z' || letra=='z')
		mor[k] = "--..";
}
printf("Su frase en codigo morse es: %s \n",mor);	
	
}
