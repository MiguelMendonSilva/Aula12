#include <stdio.h>

int main()
{

    char nome[7] = {'M', 'i', 'g', 'u', 'e', 'l'};

    printf("Nome: %s\n", nome);

    printf("*");
    for (int i = 0; nome[i] != '\0'; i++)
    {
        printf("%c*", nome[i]);
    }

    printf("\n");

    return 0;
}