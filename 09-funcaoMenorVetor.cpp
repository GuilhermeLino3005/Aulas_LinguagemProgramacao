#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     
     for(int i = 0; i < tam; i++){
          
          cout <<"\nDigite um numero no indice " << i << endl;
          cin  >>  v[i];
     
     }
}

void imprimir_vetor(int v[], int tam){
     
     for(int i = 0; i < tam; i++){
          cout << v[i] << " ";
     }

}

int menor_vetor(int v[], int tam){
     int menor = v[0];
     for (int i = 1; i < tam; i++){
          
          if (menor > v[i]){
               menor = v[i];                   
          } 
     }
     return menor;
     
}

int main()
{
     const int tam = 4;
     int vetor1[tam];

     ler_vetor(vetor1, tam);
     int menor_Valor = menor_vetor(vetor1, tam);

     cout << menor_Valor;

   

     


     return 0;
}
