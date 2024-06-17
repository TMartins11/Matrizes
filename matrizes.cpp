#include <iostream>
#include <ctime>

using namespace std;

void gerarMatriz(int tam1, int tam2)
{
    int mat1[tam1][tam2];
    srand(time(NULL));

    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            mat1[i][j] = rand() % 100;
        }
    }

    cout << endl << "Matriz 1" << endl;
    for (int i = 0; i < tam1; i++)
    {
        cout << "(";
        for (int j = 0; j < tam2; j++)
        {   
            if( j != 0){
                cout << " ";
            }
            cout << mat1[i][j];
        }
        cout << ")" << endl;
    }

    int mat2[tam1][tam2];
     for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            mat2[i][j] = rand() % 100;
        }
    }

    cout << endl << "Matriz 2" << endl;
    for (int i = 0; i < tam1; i++)
    {
        cout << "(";
        for (int j = 0; j < tam2; j++)
        {   
            if( j != 0){
                cout << " ";
            }
            cout << mat2[i][j];
        }
        cout << ")" << endl;
    }

}

void preencherMatriz(int tam1, int tam2)
{
    int mat1[tam1][tam2];
    srand(time(NULL));

    cout << endl << "Insira os valores da 1º Matriz" << endl;
    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            cout << "Insira o elemento da posição [" << i << "] [" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << endl << "Matriz 1" << endl;
    for (int i = 0; i < tam1; i++)
    {   
        cout << "(";
        for (int j = 0; j < tam2; j++)
        {
            if(j != 0){
                cout << " ";
            }
            cout << mat1[i][j];
        }
        cout << ")" << endl;
    }

    int mat2[tam1][tam2];

    cout <<  endl << "Insira os valores da 2º Matriz" << endl;
    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            cout << "Insira o elemento da posição [" << i << "] [" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    cout << endl << "Matriz 2" << endl;
    for (int i = 0; i < tam1; i++)
    {
        cout << "(";
        for (int j = 0; j < tam2; j++)
        {   
            if(j != 0 ){
                cout <<  " ";
            }
            cout << mat1[i][j];
        }
        cout << ")" << endl;
    }
}

int main(){
    int tam1, tam2, opcao;

    cout << "Manipulação de Matrizes" << endl;
    cout << endl << "Insira o número de linhas das Matrizes: ";
    cin >> tam1;
    cout << endl << "Insira o número de colunas das Matrizes: ";
    cin >> tam2;
    
    cout << endl << "Opções Disponíveis:" << endl;
    cout << endl << "1 - Gerar Matrizes Aleatórias";
    cout << endl << "2 - Preencher Matrizes Manualmente" << endl;
    cout << endl << "Escolha a Opção desejada: ";
    cin >> opcao;
    while (opcao <= 0 && opcao >= 3){
        cout << endl << "Opção Inválida!!! Insira novamente: ";
        cin >> opcao;
    }

    switch (opcao){
    case 1:
        gerarMatriz(tam1, tam2);
        break;
    case 2:
        preencherMatriz(tam1, tam2);
        break;
    }


    return 0;
}