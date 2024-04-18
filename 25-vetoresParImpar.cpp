#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for (int i = 0; i < tam; i++){
          cout<<"Digite um valor: ";
          cin>>v[i];
     }

}

int parImpar(int v1[], int par[], int impar[], int p, int q,  int tam){
     p = 0;
     q = 0;
     for (int i = 0; i < tam; i++){ 
          if (v1[i] % 2 == 0){
               par[p] = v1[i];
               p++;

          }
          else{
               impar[q] = v1[i];
               q++;
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
     int tam = 0, p, q;
     cout<<"Digite o tamanho do vetor: "<<endl;
     cin >> tam;
     
     int valor[tam], par[tam], impar[tam];

     ler_vetor(valor, tam);

     parImpar(valor, par, impar, p, q,  tam);

     cout <<"Valores pares do vetor: "<<endl;
     imprimir(par, tam);

     cout<<"Valores impares do vetor: " <<endl;
     imprimir(impar, tam);
}