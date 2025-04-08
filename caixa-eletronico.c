#include <stdio.h>

int main(){

    char letra = 's';
    int menu,deposito,saque; 
    int saldo = 1000;


    while (letra == 's'){
      system("clear");
      printf("ESCOLHA A FUNCAO DESEJADA:\n1 - DEPOSITO:\n2 - SAQUE\n3 - SALDO\n4 - SAIR\n");
      scanf("%i",&menu);

      switch(menu){
        case 1:
        system("clear");
        printf("\n\nSALDO: %i\n",saldo);
        printf("DIGITE O VALOR QUE VOCE DESEJA DEPOSITAR:\n");
        scanf("%i",&deposito);
        saldo+=deposito;
        printf("SEU SALDO FINAL: %i\n",saldo);
        break;

        case 2:
        system("clear");
        printf("\n\nSALDO: %i\n",saldo);
        printf("DIGITE O VALOR QUE VOCE DESEJA SACAR:\n");
        scanf("%i",&saque);
        saldo-=saque;
        printf("SALDO: %i\n",saldo);
        break;

        case 3:
        system("clear");
        printf("\nSEU SALDO EM CONTA E: %i\n",saldo);
        break;

        case 4:
        //sair
        letra = 'n';
        break;

        default:
          printf("Opcao invalida:\n");
          break;


      }
        
        printf("Deseja fazer outra operacao? (s/n)\n");
        scanf(" %c",&letra);
    }
    printf("Programa Finalizado\n");
    



    return 0;
}