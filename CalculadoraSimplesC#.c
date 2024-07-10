#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int operacao, num1, num2, resultado;
    char reiniciar[4];
    setlocale(LC_ALL, "Portuguese");

    do {
        do {
            printf("Digite a operação que deseja utilizar:\n");
            printf("-----------\n");
            printf("Soma = 1\n");
            printf("Subtração = 2\n");
            printf("Multiplicação = 3\n");
            printf("Divisão = 4\n");
            printf("-----------\n");
            scanf("%d", &operacao);

            if (operacao < 1 || operacao > 4) {
                printf("Operação inválida. Digite novamente.\n");
            }

        } while (operacao < 1 || operacao > 4);

        printf("Digite o primeiro número:\n");
        scanf("%d", &num1);

        printf("Digite o segundo número:\n");
        scanf("%d", &num2);

        switch (operacao) {
            case 1:
                resultado = num1 + num2;
                break;

            case 2:
                resultado = num1 - num2;
                break;

            case 3:
                resultado = num1 * num2;
                break;

            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                } else {
                    printf("Não é possível dividir por zero. Tente novamente.\n");
                    continue;
                }
                break;

            default:
                printf("Opção inválida\n");
                exit(0);
                break;
        }

        printf("O resultado é %d\n", resultado);
        printf("-----------\n");
        printf("Deseja utilizar a calculadora novamente? Sim/Não\n");
        scanf("%s", reiniciar);

    } while (strcmp(reiniciar, "Sim") == 0 || strcmp(reiniciar, "sim") == 0);

    return 0;
}
