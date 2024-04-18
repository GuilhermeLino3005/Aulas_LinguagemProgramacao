#include <iostream>

#define MAX 10

using namespace std;

void ler_matriz(int m[MAX][MAX], int lin, int col){
     for(int i = 0; i < MAX; i++){
          for(int j = 0; j < MAX; j++){
               cout<<"Digite um valor: ";
               cin >> m[i][j];
          }

     }
}

void imprimir(int m[MAX][MAX], int lin, int col){
     for(int i = 0; i < MAX; i++){
          for(int j = 0; j < MAX; j++){
               cout >> m[i][j];
          }

     }
}

bool identidade(int m[MAX][MAX], int lin, int col){
     for(int i = 0; i < MAX; i++){
          for(int = 0; i < MAX; i++){
               if(lin == col){
                    m[i][j] = 1
               }
          }
     }
}


int main(){
     int matriz[MAX][MAX], lin, col;

     cout << "Digite o número de linhas: ";
     cin >> lin;

     cout << "Digite o número de colunas: ";
     cin >> col;


}