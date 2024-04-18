#include <iostream>

#define MAX 10

using namespace std;

void ler_matriz(int m[MAX][MAX], int tam){
     for (int lin = 0; lin < tam; lin++){
          for(int col = 0; col < tam; col++){
               cout<<"Digite o valor desejado na linha "<<lin<<" e na coluna "<<col<<" :";
               cin >> m[lin][col];
          }
          cout<<endl;
     }
     
}

int soma(int m[MAX][MAX], int tam, int res){
     res = 0;
     for (int i = 0; i < tam; i++){
          for (int j = 0; j < tam; j++){
               if (j < i){
                    cout<<"entrei "<<endl;
                    res = res + m[i][j];
               }
               
          }
          
     }
     return res;     
}

void imprimir(int m[MAX][MAX], int tam){
     for (int lin = 0; lin < tam; lin++){
          for(int col = 0; col < tam; col++){
               cout<<m[lin][col]<<" ";

          }
          cout<<endl;
     }   
}

int main(){
     int matriz[MAX][MAX], tam, res;

     cout<<"Digite o tamanho da matriz: ";
     cin>>tam;

     ler_matriz(matriz, tam);

     cout<<"A soma eh: "<<soma(matriz, tam, res)<<endl;



}