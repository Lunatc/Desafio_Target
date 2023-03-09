/* 
Desafio Target - Estágio Análise e Desenvolvimento
Nome: Cintia Braz Mesquita 

Exercício 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    FILE* a;

    int i=0,j, k=0;

    double fatu[30], menor, maior=0, media=0;

    int menor_mes, maior_mes, quant_maior=0;

    char aux[50];
    char* pEnd;

    a = fopen("dados.xml", "r");

    if ( a == NULL ) 
        printf("Nao foi possivel ler o arquivo");



    //Leitura do arquivo
    while(1){
        
        if( feof(a) ) { 
            break;
        }

        fscanf(a, "%s", aux);
        
        //Le apenas os numeros e '.'
        for (i = 0; aux[i] != '\0'; i ++) {
            if (aux[i] != '0' && aux[i] != '1' && aux[i] != '2' && aux[i] != '3' && aux[i] != '4' && aux[i] != '5' && aux[i] != '6' && aux[i] != '7' && aux[i] != '8' && aux[i] != '9' && aux[i] != '.') {
                for (j = i; aux[j] != '\0'; j ++)
                    aux[j] = aux[j + 1];
                i--;
            }
        }
        
        if(aux != "\0"){

        //Converte de string para double e armazena no vetor fatu    
            for(i=0;aux[i] != '\0'; i ++){
                if(aux[i] == '.'){
                    fatu[k] = atof(aux);
                    k++;
                }  
            } 
        }
    }

    //Procura o menor

    menor = fatu[0];
    for(i=0;i<30;i++){
        if(menor > fatu[i] && fatu[i] != 0){
           menor = fatu[i];  
           menor_mes = i+1;
        }
           
    }

    //Procura o maior
    for(i=0;i<30;i++){
        if(maior < fatu[i]){
            maior = fatu[i];
            maior_mes = i+1;
        }
    }

    //Calcula a media
    for(i=0;i<30;i++){
        if(fatu[i] != 0)
            media += fatu[i];
    }

    media = media/30;

    //Conta quantos estao acima da media
    for(i=0;i<30;i++){
        if(media < fatu[i]){
            quant_maior++;
        }
    }

    printf("Menor faturamento em um dia (ignorando finais de semana e feriados):%lf\n",menor);
    printf("Maior faturamento em um dia:%lf\n",maior);
    printf("Quantidade de dias que o faturamento foi maior que a media:%d\n",quant_maior);

    fclose(a);

}