#include <stdio.h>

int main()
{

    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("%d\n", numero);

    int soma = 0;

    for (int i = 1; i < numero; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma += i;
        }
    }

    printf("A soma dos multiplos de 3 ou 5 abaixo de %d é: %d\n", numero, soma);

    return 0;
}