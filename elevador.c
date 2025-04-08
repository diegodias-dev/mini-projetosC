#include <stdio.h>


int main(){

    int inicial, destino =0;
    int i;

    printf("Digite o andar inicial:\n");
    scanf("%i",&inicial);
    printf("Digite o andar destino:\n");
    scanf("%i", &destino);


    if (destino > 5 || inicial < 1 ){
        printf("Erro!\n");
        
    }else if(inicial > destino){
        destino-=1;
        for(i = inicial;  i>destino; i--){
            printf("Elevador no andar %i\n",i);
        }
        printf("Destino alcancado!\n");

    }else if (inicial < destino)
    {
        destino+=1;
        for(i = inicial; i < destino ; i++){
            printf("Elevador no andar %i\n",i);
        }
        printf("Destino alcancado!\n");
        
    }










    return 0;
}