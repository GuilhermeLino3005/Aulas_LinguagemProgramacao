#include <iostream>

#define MAX 4

using namespace std;

void ler_matriz(int matriz[MAX][MAX]){
     for (int lin = 0; lin < MAX; lin++){
          for (int col = 0; col < MAX; col++){
               cout<<"Digite um valor para a matriz na linha "<<lin<<" e na coluna "<<col<<" :";
               cin >> matriz[lin][col];
          }
          
     }
     
}

int maior(int matriz[MAX][MAX], int contador){
     contador = 0;
     for (int i = 0; i < MAX; i++){
          for(int j = 0; j < MAX; j++){
               if (matriz[i][j] > 10){
                    contador++;
               }
               
          }
     }
     return contador;
     
}

void imprimir(int matriz[MAX][MAX]){
     for (int lin = 0; lin < MAX; lin++){
          for(int col = 0; col < MAX; col++){
               cout<<matriz[lin][col]<<" ";

          }
          cout<<endl;
     }
     
}

int main(){
     int matriz [MAX][MAX], contador;

     ler_matriz(matriz);

     contador = maior(matriz, contador);

     cout<<"Os valores maiores que 10 na matriz são: "<<contador<<endl;
     imprimir(matriz);

     
     

     


}