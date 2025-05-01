#include <stdio.h>
#include <string.h>

int main() {

    char senha[] = "azimo";
    int tentativas = 3;
    char senhaDigitada[100];

    while (tentativas > 0 ){

        printf("Digite a senha: ");
        scanf("%s", senhaDigitada);
        
        if (strcmp(senha, senhaDigitada) == 0){
            printf("Seja bem vindo!\n");
            break;
        } else {
            tentativas--;
                if (tentativas > 0){
                    printf("Senha errada. Tentativas restantes: %d\n", tentativas);
                } else {
                    printf("Tente novamente mais tarde!\n");
                }
        }
    }

  return 0;
}
