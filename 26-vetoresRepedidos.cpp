#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for (int i = 0; i < tam; i++){
          cout<<"Digite um valor: ";
          cin>>v[i];
     }

}

void repedidos(int v1[], int v2[], int res[], int tam){
     int ax = 0;
     for(int i = 0; i < tam; i++){
          if (v1[i] == v2[i]){     
               res[ax] = v2[i];
               ax++;
          }
     }

}



void imprimir(int v[], int tam){
     cout<<"{ ";
     for (int i = 0; i < tam; i++){
          cout<<v[i] << " ";
     }
     cout<<" }"<<endl;
}


int main(){
     const int tam = 10;
     int v1[tam], v2[tam], res[tam];

     cout<<"Preenchendo o primeiro vetor"<<endl;
     ler_vetor(v1, tam);

     cout<<"Preenchendo o segundo vetor"<<endl;
     ler_vetor(v2, tam);

     repedidos(v1, v2, res, tam);

     imprimir(res, tam);

}