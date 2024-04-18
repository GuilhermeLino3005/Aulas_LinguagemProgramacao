#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){  
     for(int i = 0; i < tam; i++){
          cout << "Digite um numero na posicao " << i << " ";
          cin >> v[i];
     }
}

int somaPosicao(int v[], int soma){
     soma = v[0] + v[1] + v[5];

     return soma;
}

void imprimir(int v[], int tam) {
     for(int i = 0; i < tam; i++){
          cout << v[i]<< endl;
     }
} 



int main(){
     const int tam = 6;
     int a [tam], soma;

     ler_vetor(a, tam); 
     cout << "Vetor inicial"<<endl;    
     imprimir(a, tam);

     cout<<"A soma dos indice eh: "<<somaPosicao(a, soma)<<endl;
     

     
     
     a[4] = 100;
     cout<<"Vetor modificado"<<endl;
     imprimir(a, tam);


}