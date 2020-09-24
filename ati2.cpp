#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 3
#define MAX_NOME 51

using namespace std;

/*
Faça um programa para armazenar, através do uso de registros, os dados de 50 produtos de uma empresa 
(código, nome, preço e quantidade em estoque).
Ao final, o programa deve exibir os dados do(s) produto(s) mais caro(s).
*/

struct produto{
    int codigo[MAX], quantidade[MAX];
    char nome[MAX][MAX_NOME]; //M A T E U S
    float preco[MAX];
};

void test(produto x){
    float maior = 0;
    int indice;
    
    for (int i = 0; i < MAX; i++)
        if(x.preco[i]>maior){
            maior=x.preco[i];
            indice = i;  
        }

    cout<<"   DADOS DO PRODUTO MAIS CARO   "<<endl<<endl;
    cout<<"CODIGO DO PRODUTO: "<<x.codigo[indice]<<endl;
    /*cout<<"NOME DO PRODUTO: "<<x.nome[indice]<<endl;*/
    cout<<"PRECO DO PRODUTO: R$"<<x.preco[indice]<<endl;
    cout<<"QUANTIDADE DO PRODUTO: "<<x.quantidade[indice]<<endl;
}

int main()  {
    struct produto prod; 
    
    for (int i=0; i < MAX; i++){
        printf("\nDigite o codigo do produto %d: ",i+1); scanf("%d", &prod.codigo[i]);
        // printf("Digite o nome do produto %d: ",i+1 );
        setbuf(stdin,NULL);
        // gets(prod.nome[i]);
        printf("Digite o preco do produto %d: ", i+1); scanf("%f", &prod.preco[i]);
        printf("Digite a quantidade de estoque do produto %d: ", i+1); scanf("%d", &prod.quantidade[i]);
    }
    
    system("cls");

    test(prod);
    
    return 0;
}
