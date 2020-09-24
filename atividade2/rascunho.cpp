#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 1
using namespace std;

typedef struct registro{
    // int codigo, quantidade;
    float preco;
    char nome[20];
}registro;

void maiorPreco(registro reg, float *preco){
    // float p_maior = 0;
    
    // reg.preco[i]
    
    // for(int i=0; i < MAX; i++){
    //     if(preco>p_maior){
    //         p_maior=preco;
    //     }
    // }

    cout<<"reg.preco: "<<reg.preco<<endl<<"*preco: "<<preco<<endl;
    // return indice;

    // float aluno_media(aluno x, float *m)
    // {
    //     for(int i=0; i<4; i++)
    //     {
    //         *m += x.nota[i];
    //     }
    //     *m /= 4;
    // }
}

main(){
    struct registro reg[MAX];
    float preco = 0;

    for (int i=0; i < MAX; i++){
        // printf("\nDigite o codigo do produto %d: ",i+1); scanf("%d", &reg[i].codigo);
        // printf("Digite o nome do produto %d: ",i+1 );
        // setbuf(stdin,NULL);
        // gets(reg[i].nome);
        printf("Digite o preco do produto %d: ", i+1); scanf("%f", &reg[i].preco);
        // printf("Digite a quantidade de estoque do produto %d: ", i+1); scanf("%d", &reg[i].quantidade);
    }

    system("cls");
    
    for (int i=0; i < MAX; i++){
        // printf("\nO codigo %d: %d",i+1, reg[i].codigo);
        printf("\nO nome %d: %s",i+1, reg[i].nome);
        // printf("\nO preco %d: %.2f",i+1, reg[i].preco);
        // printf("\nO quantidade %d: %d",i+1, reg[i].quantidade);
    }
  
    maiorPreco(registro, &preco);
    // aluno_media(alu,&media);
}
