#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for (int i = 0; i < tam; i++){
          cout <<"Digite valor: "<<endl;
          cin >> v[i];
     }
     
}

void vetor_inverso(int v[], int in[], int tam){
     int indice;
     for (int i = 0; i < tam; i++){
          indice = 0;
          in[tam - 1 - i] = v[i];
     }
   
     
     
}

void imprimir(int v[], int tam){
     for (int i = 0; i < tam; i++){
          cout <<v[i]<<endl;
     }
     
}
int main(){
     const int tam = 10;
     int vetor[tam], inverso[tam];

     cout<<"Lendo o primeiro vetor"<<endl;
     ler_vetor(vetor, tam);


     cout<<"Vetor inverso"<<endl;
     vetor_inverso(vetor, inverso, tam);
     
     cout<<"Imprimindo o vetor original"<<endl;
     imprimir(vetor, tam);

     cout<<"Vetor inverso"<<endl;
     imprimir(inverso, tam);




}