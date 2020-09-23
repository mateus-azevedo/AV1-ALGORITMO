#include<iostream>
#include<stdlib.h>
#define MAX 2
#define CASA 10
using namespace std;

// void atribuiValores(char *A, char *B, char *C, char *D)
// {
//     for(int i = 0; i < MAX; i++)
//     {
//         for(int j = 0; j < MAX; j++)
//         {
//             if (A[i] == B[j])
//                 C[i] = A[i];
//         }
//     }

//     for(int i = 0; i < MAX; i++)
//     {
//         for(int j = 0; j < MAX; j++)
//         {
//             if (A[i] != B[j])
//                 D[i] = A[i];
//             else
//             {
//                 D[i] = ' ';
//                 break;
//             }
//         }
//     }
// }

void exibeTela(char nome, char vetor[][CASA])
{
    if (nome == 'C')
        printf("%c (INTERSECAO) = {", nome); 
    else if (nome == 'D')
        printf("%c (DIFERENCA) = {", nome); 
    else
        printf("%c = {", nome); 
    
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < CASA; j++)
        {
            if (vetor[i][j] != ' ')
                cout<<vetor[i][j]<<", ";
        }
    (vetor[MAX][CASA - 1] == ' ') ? printf(" } \t") : printf("\b\b} \t");
    cout<<"ESTOU NO "<<nome<<" : "<<vetor[MAX][CASA - 1]<<"\t";
}

void inicializaVetor(char vetor[][CASA])
{
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < CASA; j++)
            vetor[i][j] = ' '; 
    vetor[MAX][CASA - 1] = ' ';
}

int main()
{
    char A[MAX][CASA], B[MAX][CASA];

    // for(int j = 0; j < 2; j++)
    // {
    //     for(int i = 0; i < MAX; i++)
    //         for(int j = 0; j < CASA; j++)
    //         {
    //             (j == 0) ? cout<<"Valor de A["<<i+1<<"]: " : cout<<"Valor de B["<<i+1<<"]: "; 
    //             (j == 0) ? cin>>A[i][j] : cin>>B[i][j];
    //         }
    //     cout<<endl;
    // }

    system("cls");

    // exibeTela('A', A);
    // exibeTela('B', B);
    cout<<endl<<endl;

    char C[MAX][CASA], D[MAX][CASA];

    inicializaVetor(C);
    inicializaVetor(D);

    // atribuiValores(A, B, C, D);

    exibeTela('C', C);
    exibeTela('D', D);

    return 0;
}