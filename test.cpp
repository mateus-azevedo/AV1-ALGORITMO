#include<iostream>
#include<stdlib.h>
using namespace std;

void inicializaVetor(char vetor[][3])
{
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            vetor[i][j] = ' '; 
    vetor[2][3 - 1] = ' ';
}

int main()
{
    char vetor[2][3], vetor2[][3] = {"6", "5", "4", "3", "2", "1"};
    //char v[2][3];
    /*
            vetor               vetor2
        linha 1 {1, 2, 3}   linha 1 {6, 5, 4}
        linha 2 {4, 5, 6}   linha 2 {3, 2, 1}
    */
    
    inicializaVetor(vetor);
    
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            cout<<"Valor do Vetor["<<i<<"]["<<j<<"]: "; cin>>vetor[i][j];
            for(int j = 0; j < 3; j++)
                if (vetor[i][j] == ' ') vetor[i][j] = '\0';
            break;
        }

    for (int i = 0; i < 2; i++)
    {
        cout<<endl<<endl;

        for (int j = 0; j < 3; j++)
        {
            cout<<"Vetor["<<i<<"]["<<j<<"]: "<<vetor[i][j]<<endl;
        }

        cout<<endl<<endl;

        for (int j = 0; j < 3; j++)
        {
            cout<<"Vetor2["<<i<<"]["<<j<<"]: "<<vetor2[i][j]<<endl;
        }
    }
            // if (vetor[i][j] == vetor2[i][j])
            //     v[i][j] = vetor[i][j];

    // for (int i = 0; i < 2; i++)
    //     for (int j = 0; j < 3; j++)
    //         cout<<"V["<<i<<"]["<<j<<"]: "<<v[i][j]<<endl;

    return 0;
}