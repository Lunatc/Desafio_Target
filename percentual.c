/* 
Desafio Target - Estágio Análise e Desenvolvimento
Nome: Cintia Braz Mesquita 

Exercício 4
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;

    float total = sp + rj + mg + es + outros;

    printf("Percentual de representação de cada estado:\n");

    printf("SP: %.2f\n", (sp*100)/total);
    printf("RJ: %.2f\n", (rj*100)/total);
    printf("MG: %.2f\n", (mg*100)/total);
    printf("ES: %.2f\n", (es*100)/total);
    printf("Outros: %.2f\n", (outros*100)/total);


}