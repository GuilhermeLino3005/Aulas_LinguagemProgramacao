#include <iostream>

using namespace std;

int ** criar_matriz(int lin, int col){
     int ** m;
     m = new int *[lin];
     for (int i = 0; i < lin; i++){
          m[i] = new int [col];
     }
     return m;
     
}

void ler_matriz(int**mat, int lin, int col){
     for (int i = 0; i < lin; i++){
          for(int j = 0; j < col; j++){
               cout<<"Digite o valor desejado na linha "<<i<<" e na coluna "<<j<<" :";
               cin >> mat[i][j];
          }
          cout<<endl;
     }
}

void imprimir(int**mat, int lin, int col){
     for (int i = 0; i < lin; i++){
          for(int j = 0; j < col; j++){
               cout<<mat[i][j]<<" ";

          }
          cout<<endl;
     }   
}
int main(){
     int lin, col;

     cout<<"Quantas colunas? ";
     cin>>col;
     cout<<"Quantas linhas? ";
     cin >> lin;
     int**matriz = criar_matriz(lin, col);
     
     ler_matriz(matriz, lin, col);

     imprimir(matriz, lin, col);

}