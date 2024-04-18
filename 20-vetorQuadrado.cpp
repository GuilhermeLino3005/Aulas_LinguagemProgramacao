#include <iostream>

using namespace std;

void ler_vetor(float v[], int tam){
     for(int i = 0; i < tam; i++){
          cout << "Digite um valor para vetor: ";
          cin >> v[i];
     }
}

float vetor_quadrado(float v[], float res[], int tam){
     
     for(int i = 0; i < tam; i++){
          res[i] = v[i] + v[i];
     }

}

void imprimir(float v[], int tam){
     for(int i = 0; i < tam; i++){
          cout << v[i] << endl;
     }
}


int main(){
     const int tam = 10;
     float vetor[tam], res[tam];

     cout << "Lendo o primeiro vetor" << endl;
     ler_vetor(vetor, tam);


     vetor_quadrado(vetor, res, tam);

     cout << "Esse e o primeiro vetor" <<endl;
     imprimir(vetor, tam);

     cout <<"Esse e o quadrado do primeiro vetor"<<endl;
     imprimir(res, tam);
}