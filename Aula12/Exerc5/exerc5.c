#include <stdio.h>
#include <string.h>

int main()
{

    char senha[50];

    printf("Digite sua senha: ");
    scanf("%s", senha);

    int tamanho = strlen(senha);

    if (tamanho >= 8)
    {
        printf("Senha conforme\n");
    }
    else
    {
        printf("Erro na senha\n");
    }

    return 0;
}