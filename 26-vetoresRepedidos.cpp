#include <iostream>

using namespace std;

int contar_repetidos(int *vet, int tam){
     int cont = 0;
     for(int i = 0; i < tam - 1; i++){
          int j = i - 1;
          while (j >= 0 && vet[i] != vet[j]){
               j--;
          }
          if(j == -1){
               j = i + 1;
               while (j < tam && vet[i] != vet[j]){
                    j++;
               }
               if(j != tam){
                    cont++;   
               }
               
          }
          
     }

     return cont;
}

int * encontrar_repetidos(int *vet, int tam, int &tr){
     tr = contar_repetidos(vet, tam);
     int *rep = new int[tr];
     int tr = 0;
     for(int i = 0; i < tam - 1; i++){
          int j = i - 1;
          while(j >= 0 && vet[i] != vet[j]){
               j--;
          }
          while (j < tam && vet[i] != vet[j]){
               j++;
          }

          if(j != tam){
               rep[tr] = vet[i];
               tr++;
          }
     }
     return rep;
}

int main(){
     int vetor[8] = {10, 20, 10, 30, 40, 10, 10, 40};
     int tam = 8;
     int c = contar_repetidos(vetor, tam);

     cout<< c <<endl;  

}