#include <stdio.h>
#include <string.h>

int main()
{

    char palavra[6];
    char letra;
    int tentativas = 1;
    char *posicao;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%s", palavra);

    while (tentativas < 3)
    {

        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        posicao = strchr(palavra, letra);

        if (posicao != NULL)
        {
            printf("A letra %c foi encontrada na palavra.\n", letra);
            break;
        }
        else
        {
            printf("A letra %c não foi encontrada na palavra.\n", letra);
            tentativas++;
        }
    }

    return 0;
}