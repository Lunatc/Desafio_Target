/* 
Desafio Target - Estágio Análise e Desenvolvimento
Nome: Cintia Braz Mesquita 

Exercício 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[20], string2[20], aux, aux2[20];

    int i;

    printf("Digite a string:");
    scanf("%s",string1);


    //Cada caracter da string será copiado para uma string de apoio
    for(i=0;string1[i] != '\0';i++){

        //pega um caracter
        aux = string1[i];

        //copia o que tiver da string2
        strcpy(aux2, string2);

        //apaga string2
        memset(string2,0,sizeof(string2));

        //coloca o caracter na primeira posicao da string2
        string2[0] = aux;

        //copia o que tinha antes na string2 de volta para ela (agora na frente do novo caracter)
        strcat(string2, aux2);
        
        //apaga aux2
        memset(aux2,0,sizeof(aux2));
        printf("%s\n",string2);
    }

    printf("%s",string2);
}