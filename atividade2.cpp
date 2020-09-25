#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 50
#define MAX_NOME 51

using namespace std;

/*
                NOMES                       MATRICULA
    Jhonatha Vinicius de Oliveira Silva     2020101275
    Mateus Santos de Azevedo                2020100086
    Rhuan Gonzaga Cunha Francisco           2020100052
    Victor Alberto dos Santos Dionizio      2020101250
    Vinícius Silva de Oliveira              2020101398
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
    cout<<"NOME DO PRODUTO: "<<x.nome[indice]<<endl;
    cout<<"PRECO DO PRODUTO: R$"<<x.preco[indice]<<endl;
    cout<<"QUANTIDADE DO PRODUTO: "<<x.quantidade[indice]<<endl;
}

int main()  {
    struct produto prod; 
    
    for (int i=0; i < MAX; i++){
        printf("\nDigite o codigo do produto %d: ",i+1); scanf("%d", &prod.codigo[i]);
        printf("Digite o nome do produto %d: ",i+1);
        setbuf(stdin,NULL);
        gets(prod.nome[i]);
        printf("Digite o preco do produto %d: ", i+1); scanf("%f", &prod.preco[i]);
        printf("Digite a quantidade de estoque do produto %d: ", i+1); scanf("%d", &prod.quantidade[i]);
    }
    
    system("cls");

    test(prod);
    
    return 0;
}
