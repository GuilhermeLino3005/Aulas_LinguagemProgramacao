#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for(int i = 0; i < tam; i++){
          cout <<"Digite o valor do vetor: "<<endl;
          cin >> v[i];

     }
}

int vetor_par(int v[], int pares, int tam){
     pares = 0;
     for(int i = 0; i < tam; i++){
          if(v[i] % 2 == 0){

               pares++;
          }
     }

     return pares;
}


int main(){
     const int tam = 10;
     int vetor[tam], num_pares;



     ler_vetor(vetor, tam);

     cout<<"Esses vao o numero de valores pares: "<<vetor_par(vetor, num_pares, tam)<<endl;


}