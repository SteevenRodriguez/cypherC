#include <stdio.h>
#include <string.h>
void cypherC(char word[], int key);

void encodeMorse(char word[],char mor[]);

int main(int argc,char** argv){
if(argc==3){
	printf("Cifrado Ciclico\n");
	char palabra2[100]={'\0'};
	strcpy(palabra2,argv[2]);
	int key= atoi(argv[1]);
	cypherC(palabra2,key);
	
	return 0;

}

char palabra[100];
int clave;
printf("Cifrado Ciclico\n");
printf("Ingrese una palabra para ser codificada: ");
fgets(palabra, 100, stdin);
printf("Ingrese la clave para el cifrado: ");
scanf("%d", &clave);
cypherC(palabra,clave);
return 0;
}

void cypherC(char word[100],int key){
int i;
char letra;
char mor[100];
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
printf("Codigo Cifrado: %s\n",word);
encodeMorse(word,mor);
}
void encodeMorse(char word2[100],char mor[100]){
int k;
for(k = 0; word2[k]!='\0'; ++k){
	char letra=word2[k];
	if (letra=='A' || letra=='a')
		strcat(mor,".-");
	else if (letra==" ")
              	strcat(mor, "/");
	else if (letra=='B' || letra=='b')
		strcat(mor,"-...");
	else if (letra=='C' || letra=='c')
		strcat(mor,"-.-.");
	else if (letra=='D' || letra=='d')
		strcat(mor,"-..");
	else if (letra=='E' || letra=='e')
		strcat(mor,".");
	else if (letra=='F' || letra=='f')
		strcat(mor,"..-.");
	else if (letra=='G' || letra=='g')
		strcat(mor,"--.");
	else if (letra=='H' || letra=='h')
		strcat(mor,"....");
	else if (letra=='I' || letra=='i')
		strcat(mor,"..");
	else if (letra=='J' || letra=='j')
		strcat(mor,".---");
	else if (letra=='K' || letra=='k')
		strcat(mor,"-.-");
	else if (letra=='L' || letra=='l')
		strcat(mor,".-..");
	else if (letra=='M' || letra=='m')
		strcat(mor,"--");
	else if (letra=='N' || letra=='n')
		strcat(mor,"-.");
	else if (letra=='O' || letra=='o')
		strcat(mor,"---");
	else if (letra=='P' || letra=='p')
		strcat(mor,".--.");
	else if (letra=='Q' || letra=='q')
		strcat(mor,"--.-");
	else if (letra=='R' || letra=='r')
		strcat(mor,".-.");
	else if (letra=='S' || letra=='s')
		strcat(mor,"...");
	else if (letra=='T' || letra=='t')
		strcat(mor,"-");
	else if (letra=='U' || letra=='u')
		strcat(mor,"..-");
	else if (letra=='V' || letra=='v')
		strcat(mor,"...-");
	else if (letra=='W' || letra=='w')
		strcat(mor,".--");
	else if (letra=='X' || letra=='x')
		strcat(mor,"-..-");
	else if (letra=='Y' || letra=='y')
		strcat(mor,"-.--");
	else if (letra=='Z' || letra=='z')
		strcat(mor,"--..");
}
printf("Codigo Morse: %s\n",mor);
	
	
}
