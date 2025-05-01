#include <stdio.h>
#include <string.h>

int main()
{

    char nome[50];
    char sobrenome[50];
    char nomeCompleto[200];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}