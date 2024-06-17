#include <iostream>
#include <ctime>

using namespace std;

// Implementada função para gerar matriz aleatória
void gerarMatriz(int tam1, int tam2, int mat1[][100], int mat2[][100]){
    srand(time(NULL));

    cout << endl << "Matriz 1" << endl;
    for (int i = 0; i < tam1; i++) {
        cout << "(";
        for (int j = 0; j < tam2; j++) {
            mat1[i][j] = rand() % 100;
            if (j != 0) {
                cout << " ";
            }
            cout << mat1[i][j];
        }
        cout << ")" << endl;
    }

    cout << endl << "Matriz 2" << endl;
    for (int i = 0; i < tam1; i++) {
        cout << "(";
        for (int j = 0; j < tam2; j++) {
            mat2[i][j] = rand() % 100;
            if (j != 0) {
                cout << " ";
            }
            cout << mat2[i][j];
        }
        cout << ")" << endl;
    }
}

// Implementada Função para que o usuário preencha a matriz manualmente
void preencherMatriz(int tam1, int tam2, int mat1[][100], int mat2[][100]) {
    cout << endl << "Insira os valores da 1º Matriz" << endl;
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            cout << "Insira o elemento da posição [" << i + 1 << "] [" << j + 1 << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << endl << "Matriz 1" << endl;
    for (int i = 0; i < tam1; i++) {
        cout << "(";
        for (int j = 0; j < tam2; j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << mat1[i][j];
        }
        cout << ")" << endl;
    }

    cout << endl << "Insira os valores da 2º Matriz" << endl;
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            cout << "Insira o elemento da posição [" << i << "] [" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    cout << endl << "Matriz 2" << endl;
    for (int i = 0; i < tam1; i++) {
        cout << "(";
        for (int j = 0; j < tam2; j++) {
            if (j != 0) {
                cout << " ";
            }
            cout << mat2[i][j];
        }
        cout << ")" << endl;
    }
}

// Implementada Função para realizar a soma de matrizes
void somamatrizes(int tam1, int tam2, int mat1[][100], int mat2[][100], int mat3[][100]){
    int i, j;

    for(i = 0; i < tam1; i++){
        for(j = 0 ; j < tam2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << endl << "O resultado da soma entre matrizes é:" << endl;
    for(i = 0; i < tam1; i++){
        cout << "(";
        for(j = 0; j < tam2; j++){
            if(j != 0){
                cout << " ";
            }
            cout << mat3[i][j];
        }
        cout << ")" << endl;
    }
}

// Implementada Função para transposição de matrizes
void transpormatrizes(int tam1, int tam2, int mat1[][100], int mat2[][100], int mat_transp[][100]){
    int i, j, optransposta, aux;

    cout << endl << "Selecione a Matriz que você deseja transpor:";
    cout << endl << "1º Matriz" << endl << "2º Matriz" << endl;
    cout << endl << "Escolha a Matriz desejada: ";
    cin >> optransposta;
    while(optransposta > 2 || optransposta <= 0){
        cout << endl << "Matriz Invalida!!! Insira novamente: ";
        cin >> optransposta;
    }
    
    switch(optransposta){
        case 1:
            for(i = 0; i < tam1; i++){
                for(j = 0; j < tam2; j++){
                    mat_transp[i][j] = mat1[i][j];
                }
            }
            break;
        case 2:
            for(i = 0; i < tam1; i++){
                for(j = 0; j < tam2; j++){
                    mat_transp[i][j] = mat2[i][j];
                }
            }
            break;
    }

    for(i = 0; i < tam1; i++){
        for(j = 0; j < tam2; j++){
            if(i > j){
                aux = mat_transp[i][j];
                mat_transp[i][j] = mat_transp[j][i];
                mat_transp[j][i] = aux;
            }
        }
    }

    
    cout << endl << "A Matriz Transposta é:" << endl;
    for(i = 0; i < tam1; i++){
        cout << "(";
        for(j = 0; j < tam2; j++){
            if(j != 0){
                cout << " ";
            }
            cout << mat_transp[i][j];
        }
        cout << ")" << endl;
    }
}

// Implementada Função para Multiplicar as Matrizes
void multiplicarmatriz(int tam1, int tam2, int mat1[][100], int mat2[][100], int mat_mul[100][100]){
    int i, j;

    for(i = 0; i < tam1; i++){
        for(j = 0; j < tam2; j++){
            mat_mul[i][j] = mat1[i][j] * mat2[j][i];
        }
    }

    for(i = 0; i < tam1; i++){
        cout << "(";
        for(j = 0; j < tam2; j++){
            if( j != 0){
                cout << " ";
            }
            cout << mat_mul[i][j];
        }
        cout << ")" << endl;
    }

}

int main() {
    int tam1, tam2, opcao;

    // Cabeçalho do projeto + Parâmetros iniciais
    cout << "Manipulação de Matrizes" << endl;
    cout << endl << "Insira o número de linhas das Matrizes: ";
    cin >> tam1;
    cout << endl << "Insira o número de colunas das Matrizes: ";
    cin >> tam2;

    int mat1[100][100], mat2[100][100];

    cout << endl << "Opções Disponíveis:" << endl;
    cout << endl << "1 - Gerar Matrizes Aleatórias";
    cout << endl << "2 - Preencher Matrizes Manualmente" << endl;
    cout << endl << "Escolha a Opção desejada: ";
    cin >> opcao;

    while (opcao <= 0 || opcao >= 3) {
        cout << endl << "Opção Inválida!!! Insira novamente: ";
        cin >> opcao;
    }

    switch (opcao) {
        case 1:
            gerarMatriz(tam1, tam2, mat1, mat2);
            break;
        case 2:
            preencherMatriz(tam1, tam2, mat1, mat2);
            break;
    }

    int mat3[100][100];
    int mat_transp[100][100];
    int mat_mul[100][100];
    int opcao2;
    cout << endl << "Selecione a Operação que você deseja realizar com as Matrizes:" << endl;
    cout << endl << "1 - Transposição de Matrizes" << endl << "2 - Soma de Matrizes" << endl << "3 - Multiplicação de Matrizes" << endl << "4 - Média dos valores da primeira Matriz" << endl;

    cout << endl << "Escolha a opção desejada: ";
    cin >> opcao2;
    while(opcao2 < 1 || opcao2 > 4){
        cout << endl << "Opção Inválida!!! Escolha novamente: ";
        cin >> opcao2;
    }

    while(opcao2 != 5){
        switch(opcao2){
            case 1:
                transpormatrizes(tam1, tam2, mat1, mat2, mat_transp);
                break;
            case 2:
                somamatrizes(tam1, tam2, mat1, mat2, mat3);
                break;
            case 3:
                multiplicarmatriz(tam1, tam2, mat1, mat2, mat_mul);
                break;
            case 4: 
                break;
        }
        cout << endl << "Selecione a Operação que você deseja realizar com as Matrizes:" << endl;
        cout << endl << "1 - Transposição de Matrizes" << endl << "2 - Soma de Matrizes" << endl << "3 - Multiplicação de Matrizes" << endl << "4 - Média dos valores da primeira Matriz" << endl << "5 - Sair" << endl;

        cout << endl << "Escolha a opção desejada: ";
        cin >> opcao2;
        while(opcao2 < 1 || opcao2 > 5){
            cout << endl << "Opção Inválida!!! Escolha novamente: ";
            cin >> opcao2;
        }
    }

    cout << endl << "Obrigado por Utilizar o programa!" << endl;
    cout << endl << "Encerrando...";

    return 0;
}
