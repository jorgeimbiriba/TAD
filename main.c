#include <stdio.h>
#include "matriz.h"  // Faz a inclusão do arquivo de heider (cabeçalho) onde as funções são declaradas

int main() {
    Matriz* m = cria(3, 3);//Achei melhor fazer 3x3
    int i,j;
    
    // Atribui valores à matriz, sem entrada de dados devido à função
    //Aponta pra matriz, dá as posições de i e j, e dá o valor float
    atribui(m, 0, 0, 1.0f);
    atribui(m, 0, 1, 2.0f);
    atribui(m, 0, 2, 3.0f);
    atribui(m, 1, 0, 4.0f);
    atribui(m, 1, 1, 5.0f);
    atribui(m, 1, 2, 6.0f);
    atribui(m, 2, 0, 7.0f);
    atribui(m, 2, 1, 8.0f);
    atribui(m, 2, 2, 9.0f);

    // Exibe os valores da matriz que já foram pré-definidos
    for (i = 0; i < linhas(m); i++) {
        for ( j = 0; j < colunas(m); j++) {
            printf("[%d][%d] = %.2f\n", i, j, acessa(m, i, j));
        }
        printf("\n");
    }
    

    // função que basicamente faz o trabalho do  free
    libera(m);
    
    return 0;
}
