#include <iostream>
#define MAX 4
using namespace std;

void ler_matriz(int m[MAX][MAX]){
     for (int lin = 0; lin < MAX; lin++){
          for(int col = 0; col < MAX; col++){
               cout<<"Digite o valor desejado na linha "<<lin<<" e na coluna "<<col<<" :";
               cin >> m[lin][col];
          }
          cout<<endl;
     }
     
}

int maior(int m_principal[MAX][MAX], int m_maior[MAX][1]){
     for (int i = 0; i < MAX; i++){
          int paramentro = m_principal[i][0];
          for (int j = 0; j < MAX; j++){
               if (m_principal[i][j] > paramentro){
                    paramentro = m_principal[i][j];
               } 
               
          }
          m_maior[i][1] = paramentro;  
     }

     
     
}

void imprimir(int m[MAX][MAX]){
     for (int lin = 0; lin < MAX; lin++){
          for(int col = 0; col < MAX; col++){
               cout<<m[lin][col]<<" ";

          }
          cout<<endl;
     }   
}
int main(){
     int matriz_principal[MAX][MAX], matriz_maior[MAX][1];

     ler_matriz(matriz_principal);

     matriz_maior[MAX][1] = maior(matriz_principal, matriz_maior);

     for (int i = 0; i < MAX; i++){
          cout<<matriz_maior[i][1]<< " ";
     }    

     




}