#include <stdio.h>
#include <stdlib.h>
#define MAX 1

typedef struct registro{
    int codigo, quantidade;
    float preco;
    char nome[20];
}produto;

main(){

    struct registro reg[MAX];
    
    for (int i=0; i < MAX; i++){
        printf("\nDigite o codigo do produto %d: ",i+1); scanf("%d", &reg[i].codigo);
        printf("Digite o nome do produto %d: ",i+1 ); //scanf("%s", &reg[i].nome);
        fflush(stdin);
        gets(reg[i].nome);
        printf("Digite o preco do produto %d: ", i+1); scanf("%f", &reg[i].preco);
        printf("Digite a quantidade de estoque do produto %d: ", i+1); scanf("%d", &reg[i].quantidade);
    }

    system("cls");
    
    for (int i=0; i < MAX; i++){
        printf("\nO codigo %d: %d",i+1, reg[i].codigo);
        printf("\nO nome %d: %d",i+1, reg[i].nome);
        printf("\nO preco %d: %d",i+1, reg[i].preco);
        printf("\nO quantidade %d: %d",i+1, reg[i].quantidade);
    }
}