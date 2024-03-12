#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     
     for(int i = 0; i < tam; i++){
          
          cout <<"\nDigite um numero no indice " << i << endl;
          cin  >>  v[i];
     
     }
}

void somar_vetores(int result[], int v1[], int v2[], int tam){
     for (int i = 0; i < tam; i++)
     {
          result[i] = v1[i] + v2[i];

     }
     
}


void imprimir_vetor(int v[], int tam){
     
     for(int i = 0; i < tam; i++){
          cout << v[i] << " " << endl;
     }

}

int main()
{
     int vetor1[5], vetor2[5], vr[5];

     ler_vetor(vetor1, 5);
     imprimir_vetor(vetor1, 5);

     ler_vetor(vetor2, 6);
     imprimir_vetor(vetor2, 6);

     somar_vetores(vr, vetor1, vetor2, 5);

     imprimir_vetor(vr, 5);
     


     return 0;
}
