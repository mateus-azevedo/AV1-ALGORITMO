#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;

void atribuiValores(int *A, int *B, int *C, int *D)
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            if (A[i] == B[j])
                C[i] = A[i];
            // else
                // C[i] = -1;
        }
    }

    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            if (A[i] != B[j])
                D[i] = A[i];
            else
            {
                D[i] = -1;
                break;
            }
        }
    }
}

void exibeTela(int nome, int *vetor)
{
    if (nome == 'C')
        printf("%c (INTERSECAO) = { ", nome); 
    else if (nome == 'D')
        printf("%c (DIFERENCA) = { ", nome); 
    else
        printf("%c = { ", nome); 
    
    for (int i = 0; i < MAX; i++)
    {
        if (vetor[i] != -1)
            cout<<vetor[i]<<"  ";
    }

    (vetor[MAX - 1] == -1) ? printf("\b} \t\t") : printf("\b} \t\t");
}

void inicializaVetor(int *vetor)
{
    for(int i = 0; i < MAX; i++)
        vetor[i] = -1;
    vetor[MAX - 1] = -1;
}

int main()
{
    int A[MAX], B[MAX];

    for(int j = 0; j < 2; j++)
    {
        for(int i = 0; i < MAX; i++)
        {
            (j == 0) ? cout<<"Valor de A["<<i+1<<"]: " : cout<<"Valor de B["<<i+1<<"]: "; 
            (j == 0) ? cin>>A[i] : cin>>B[i];
        }
        cout<<endl;
    }

    system("cls");

    exibeTela('A', A);
    exibeTela('B', B);
    cout<<endl<<endl;

    int C[MAX], D[MAX];

    inicializaVetor(C);
    inicializaVetor(D);

    atribuiValores(A, B, C, D);

    exibeTela('C', C);
    exibeTela('D', D);

    return 0;
}