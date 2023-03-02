#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0, x1 = 1, aux=0;

    int number;

    printf("Digite o numero a ser verificado: ");
    scanf("%d",&number);

    while( x1 < number ){
        aux = x1;
        x1 = x + x1;
        x = aux;
        if(number == x1){
            printf("O numero esta na sequencia.\n");
        }
        aux = 0;
    }

}