#include <stdio.h>


int main() {

    //Criar as variaveis com o movimento das peças
    int movimento_bispo = 5;
    int movimento_torre = 5;
    int movimento_rainha = 8; 

    printf("Movimento do bispo: \n"); //Inicio aos movimentos do bispo
    for (int i = 1; i <= movimento_bispo; i++){ //for que "printa" cada movimento
        printf("\nDireita.\nCima.\n");
    }
    
    printf("\n\nMovimento da torre: \n");//Movimentos da torre
    for (int i = 1; i<= movimento_torre; i++){ //for que "printa" cada movimento
        printf("\nDireita.");
    }

    printf("\n\nMovimento da rainha: \n"); //Movimentos da rainha
    for (int i = 1; i<= movimento_rainha; i++){ //for que "printa" cada movimento
        printf("\nEsquerda.");
    }

    printf("\n\nFinalizando programa...");
    return 0;
}
