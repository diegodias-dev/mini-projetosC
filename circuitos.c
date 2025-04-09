#include <stdio.h>

int main(){
    int verde, vermelho,amarelo,i,a = 0;
    

    printf("Insira o valor do sinal verde\n");
    scanf("%i",&verde);
    
    if (verde <10 || verde > 60)
    {
        printf("TEMPO INVALIDO!\n");
    }else if (verde > 9 || verde <61)
    {
        for(i=1; i<=verde;i++){
            printf("Verde:   %i\n",i);
        }
    }
    verde+=1;
    amarelo=verde+5;
    
    for(a=verde; a<=amarelo;a++){
        printf("Amarelo: %i\n",a);
    }
    
    amarelo+=1;
    for(i=amarelo;i<=80;i++){
        printf("Vermelho: %i\n",i);
    }








    return 0;
}