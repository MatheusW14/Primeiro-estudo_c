#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
   
    char texto [301];//301 pois a função utiliza um caractere nulo.
    char letra;
    int contagem=0;

    printf("Digite um texto de até 300 caracteres:\n");//texto inicial para introdução dos caracteres.

    fgets(texto, 301, stdin); //escolha de uma texto de até 300 caracteres que foi digitada no teclado(stdin).
    
    printf("Selecione uma letra:");//texto para inserir qual letra deseja buscar.
    scanf("%c", &letra);





    return 0;
}
