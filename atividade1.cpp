#include<iostream>
#include<stdlib.h>
#define MAX 2
using namespace std;

void atribuiValores(char *A, char *B, char *C, char *D)
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            if (A[i] == B[j])
                C[i] = A[i];
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
                D[i] = ' ';
                break;
            }
        }
    }
}

void exibeTela(char nome, char *vetor)
{
    if (nome == 'C')
        printf("%c (INTERSECAO) = {", nome); 
    else if (nome == 'D')
        printf("%c (DIFERENCA) = {", nome); 
    else
        printf("%c = {", nome); 
    
    for (int i = 0; i < MAX; i++)
    {
        if (vetor[i] != ' ')
            cout<<vetor[i]<<", ";
    }

    (vetor[MAX - 1] == ' ') ? printf(" } \t") : printf("\b\b} \t");
}

void inicializaVetor(char *vetor)
{
    for(int i = 0; i < MAX; i++)
        vetor[i] = ' '; 
}

int main()
{
    char A[MAX], B[MAX];

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

    char C[MAX], D[MAX];

    inicializaVetor(C);
    inicializaVetor(D);

    atribuiValores(A, B, C, D);

    exibeTela('C', C);
    exibeTela('D', D);

    return 0;
}