#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for(int i = 0; i < tam; i++){
          cout<<"Digite um valor do vetor: "<<endl;
          cin >> v[i];
     }
}

void imprimir(int v[], int tam){
     for(int i = 0; i < tam; i++){
          cout<<v[i]<<endl;
     }
}

int main(){
     const int tam = 10;
     int vet[tam], maior, indice;
     ler_vetor(vet, tam);

     imprimir(vet, tam);

     maior = vet[0];
     for (int i = 0; i < tam; i++){
          if(vet[i] > maior){
               maior = vet[i];
               indice = i;
               
          }
     }

     cout<<"Esse eh o maior valor do vetor "<< maior <<" e o seu indice eh:  "<< indice <<endl;
}