#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string1[20], string2[20], aux, aux2[20];

    int i;

    printf("Digite a string:");
    scanf("%s",string1);

    for(i=0;string1[i] != '\0';i++){
        aux = string1[i];
        strcpy(aux2, string2);
        memset(string2,0,sizeof(string2));
        string2[0] = aux;
        strcat(string2, aux2);
        memset(aux2,0,sizeof(aux2));
        printf("%s\n",string2);
    }

    printf("%s",string2);
}