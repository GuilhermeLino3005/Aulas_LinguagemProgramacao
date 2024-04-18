#include <iostream>

using namespace std;

void gerar_tp(int mat[10][10], int n){
     for (int i = 0; i < n; i++){
          for (int j = 0; j <= i; j++){
               if (j == 0 || j == i){
                    mat[i][j] = 1;
               }
               else{
                    mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
               }
               
          }
          
     }
     
}

void imprimir(int mat[10][10], int n){
     for (int i = 0; i < n; i++){
          for (int j = 0; j <= i; j++)
          {
               cout << mat[i][j];
          }
          cout<<endl;

          
          
     }
     
}

int main(){
     int mat[10][10], n = 4;

     gerar_tp(mat, n); 
     imprimir(mat, n);
}