#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     
     for(int i = 0; i <= tam; i++){
          
          cout <<"\nDigite um numero no indice " << i << endl;
          cin  >>  v[i];
     
     }
}


void imprimir_vetor(int v[], int tam){
     
     for(int i = 0; i < tam; i++){
          cout << v[i] <<" ";
     }

}

int main()
{
     int vetor1[5], vetor2[6];

     ler_vetor(vetor1, 5);
     imprimir_vetor(vetor1, 5);

     ler_vetor(vetor2, 6);
     imprimir_vetor(vetor2, 6);


     return 0;
}
