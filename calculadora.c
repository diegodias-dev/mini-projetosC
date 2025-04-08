#include <stdio.h>
#include <stdlib.h>

// Declarar funcao soma

int somar (int a, int b){
    return a+b;
}

int subtrair (int a, int b){
    return a-b;
}

int multiplicar (int a, int b){
    return a*b;
}

int dividir (int a, int b){
    if (b != 0 ){
        return a/b;
    }else {
        printf("Erro: Divisao por zero \n");
        return 0;
    }
}


int exibir_menu(char *apelido){
    int opcao;
    system("clear");
    printf("                   Seja Bem-vindo %s.\n", apelido);
    puts("---------------------------------------------------------------\n\n");
    printf("Escolha a função desejada:\n");
    printf("1 - Somar.\n");
    printf("2 - Subtrair.\n");
    printf("3 - Multiplicar.\n");
    printf("4 - Dividir.\n");
    printf("5 - Sair.\n");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    char apelido[30];
    int num1, num2, res, opcao;

    // Entrada do nome do usuário
    system("clear");
    puts("Olá.");
    puts("Informe seu nome:");
    scanf("%s", apelido);

    // Loop principal do menu
    do {
        opcao = exibir_menu(apelido);

        if (opcao >= 1 && opcao <= 4) {
            system("clear");
            printf("Informe o primeiro número: ");
            scanf("%d", &num1);
            printf("Informe o segundo número: ");
            scanf("%d", &num2);

            // Escolha da operação com base na opção do menu
            switch (opcao) {
                case 1:
                    res = somar(num1, num2);
                    printf("O resultado da soma é: %d\n", res);
                    break;
                case 2:
                    res = subtrair(num1, num2);
                    printf("O resultado da subtração é: %d\n", res);
                    break;
                case 3:
                    res = multiplicar(num1, num2);
                    printf("O resultado da multiplicação é: %d\n", res);
                    break;
                case 4:
                    res = dividir(num1, num2);
                    if (num2 != 0) {
                        printf("O resultado da divisão é: %d\n", res);
                    }
                    break;
            }
        } else if (opcao != 5) {
            printf("Opção inválida! Tente novamente.\n");
        }

        if (opcao != 5) {
            puts("\nPressione qualquer tecla para continuar...");
            getchar(); getchar(); // Pausa para o usuário visualizar o resultado
        }

    } while (opcao != 5);

    system("clear");
    printf("Obrigado por usar o programa, %s. Até logo!\n", apelido);
    return 0;
}