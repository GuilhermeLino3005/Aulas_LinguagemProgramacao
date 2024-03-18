#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for(int i = 0 ; i < tam; i++){
          cout << "Digite o numero: ";
          cin >> v[i];
     }
}

bool comparar_vetor(int v1[], int v2[], int tam){
     for(int i = 0; i < tam; i++){
          if(v1[i] != v2[i]){
               return false;
          }
     }
     return true;
}



int main(){
     const int tam = 5;
     int vetor1[tam];
     int vetor2[tam];

     ler_vetor(vetor1, tam);
     ler_vetor(vetor2, tam);

     if (comparar_vetor(vetor1, vetor2, tam)){
          cout << "sao iguais";
     }
     else{
          cout <<"sao diferente";
     }

     
}