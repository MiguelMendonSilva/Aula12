#include <stdio.h>

int comparasenha(char senha1[], char senha2[])
{

    int i = 0;

    while (senha1[i] != '\0' || senha2[i] != '\0')
    {
        if (senha1[i] != senha2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{

    char senha[6] = "azimo";
    int tentativas = 3;
    char senhaDigitada[50];

    while (tentativas > 0)
    {
        printf("Digite a senha: ");
        scanf("%s", senhaDigitada);

        if (comparasenha(senha, senhaDigitada))
        {
            printf("Seja bem vindo!\n");
            break;
        }
        else
        {
            tentativas--;
            if (tentativas > 0)
            {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
            else
            {
                printf("Tente novamente mais tarde.\n");
            }
        }
    }

    return 0;
}