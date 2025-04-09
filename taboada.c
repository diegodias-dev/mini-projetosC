/*Usando while, switch case e for, faça um programa que solicite ao usuário
três informações: um número, uma das operações básicas e um número
limite. Usando essas informações, exiba a tabuada do primeiro número
digitado, para a operação solicitada até o limite informado. Use um loop while
para permitir que o usuário informe vários números até que ele digite um
número negativo, um for para percorrer a tabuada e um switch case para
determinar qual operação será feita para cada número inserido. Abaixo, um
exemplo do programa em funcionamento.*/


#include <stdio.h>


int main(){
    
    int num, i, limite;
    char operacao ;

    while(1){
        printf("Digite um numero (ou um numero negativo para sair.)\n");
        scanf("%i",&num);


        if (num < 0){
            break;
        }

        printf("Digite a operacao desejada ( +,-,*,/)\n");
        scanf(" %c", &operacao);

        printf("Digite um numero limite:\n");
        scanf("%i",&limite);

            switch(operacao){
                case '+':
                    for(i=1; i<=limite; i++){
                        printf("%d + %d = %d\n", num, i, i+num);
                    }
                break;

                case '-':
                    for(i = 1; i <= limite; i++){
                        printf("%d - %d = %d\n",num , i, num-i);
                    }
                break;

                case '*':
                    for(i=1; i<= limite; i++){
                        printf("%d * %d = %d\n", num, i, num*i);
                    }
                break;

                case '/':
                    for(i=1; i<=limite; i++){
                        if(i != 0){
                            printf("%d / %d = %.2f\n",num , i,(float) num/i);
                        }else{
                            printf("%d / %d = INDEFINIDO",num,i);
                        }

                    }
                break;

                default:
                    printf("Opcao incorreta.\n");
            }
        }
        
    printf("\n");

    printf("Programa finalizado com sucesso!\n");

    return 0;
}
