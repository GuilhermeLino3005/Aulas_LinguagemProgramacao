#include <iostream>

using namespace std;

void ler_vetores(int v[], int tam){
     for(int i = 0; i < tam; i++){
          cout <<"Digite o valor para o vetor: "<<endl;
          cin >> v[i];
     }
}

bool iguais(int v1[], int v2[], int tam){
     for (int i = 0; i < tam; i++){
          if (v1[i] != v2[i]){
               return false;
          }
          
     }
     return true;
}

void imprimir(int v[], int tam){
     for (int i = 0; i < tam; i++){
          cout<<v[i]<<endl;
     }
     
}

int main(){
     int tam;
     
     cout<<"Digite um valor: "<<endl;
     cin>>tam;

     int v1[tam], v2[tam];

     ler_vetores(v1, tam);
     ler_vetores(v2, tam);

     cout<<"Sao valores de vetores 1 e 2 sao: "<<iguais(v1, v2, tam)<<endl;

     imprimir(v1, tam);
     imprimir(v2, tam);



}