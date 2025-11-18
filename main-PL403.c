/**
 * @file main-PL403.c
 * @brief Programa principal.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions-PL403.h"
int main(){
        int vetor[TAM], simetrico[TAM];
        int i, j, menu=-53; // A varivél menu é um valor aleatório para garantir que o menu aparece pelo menos uma vez
        srand(time(NULL)); //A semente gerada vai variar conforme o tempo
        for (i=0 ; i<TAM; i++){
                printf("Introduza números inteiros entre -3 e 27:\n");
                scanf("%d" , &vetor[i]);
                if (vetor[i] < -3 || vetor[i]>27){ //validação de entrada
                        printf("Valor Inválido!");
                        i--;
                }
        }
        while (menu !=0 ){
                printf("\n");
                printf("\n-MENU-\n");
                printf("1 - Devolução do vetor ordenado por ordem crescente dos seus valores simétricos\n");
                printf("2 - Calculo da soma da primeira metade dos elementos no vetor com os da segunda metade\n");
                printf("3 - Devolução dos valores em posições multiplas de três do vetor\n");
                printf("4 - Retorno de um elemento aleatório desse vetor\n");
                printf("5 - Construção de uma matriz 14 x 14, em que cada linha é composta pelo vetor lido e por permutações dos seus valores\n");
                printf("6 - Calculo da raiz quadrada de todos elementos no vetor\n");
                printf("7 - Página de ajuda\n");
                printf("8 - Mistura de dois vetores\n");
                printf("9 - Calcula o maximo divisor comum entre dois elementos seguidos do vetor\n");
                printf("10 - Construção de uma matriz 14x14 composta pelo produto do vetor original com o vetor  original ordenado\n");
                printf("0 - Finalizar\n");
                printf("Caso: ");
                scanf("%d", &menu);
                switch(menu){ //Switch Case que vai chamar a função correspondente á operação  que foi escolhida no menu
                        case 1:
                                simetricovetor(vetor);
                                break;
                        case 2:
                                somavetor(vetor);
                                break;
                        case 3:
                                multiplovetor(vetor);
                                break;
                        case 4:
                                aleatoriovetor(vetor);
                                break;
                        case 5:
                                matrizvetor(vetor);
                                break;
                        case 6:
                                raizvetor(vetor);
                                break;
                        case 7:
                                ajuda();
                                break;
                        case 8:
                                misturavetor(vetor);
                                break;
                        case 9:
                                mdcvetor(vetor);
                                break;
                        case 10:
                                matriz2vetor(vetor);
                                break;
                        case 11:
                                transpostavetor(vetor);
                                break;
                        case 0:
                                printf("O programa vai encerrar!\n");
                                break;
                        default:
                                printf("Opção inválida");

                }
        }
}
