#include <iostream>

using namespace std;

void ler_vetor(int v[], int tam){
     for(int i = 0; i < tam; i++){
          cout<<"Digite o valor para o vetor: "<<endl;
          cin >> v[i];
     }
}

int d(int v1[], int v2[], int dif[], int tam){
     for (int i = 0; i < tam; i++){
          dif[i] = v1[i] - v2[i];
     }

}

int s(int v1[], int v2[], int som[], int tam){
     for (int i = 0; i < tam; i++){
          som[i] = v1[i] + v2[i];
     }
     
}

int m(int v1[], int v2[], int mul[], int tam){
     for (int i = 0; i < tam; i++){
          mul[i] = v1[i] * v2[i];
     }
     
}

void imprimir(int v[], int tam){
     cout<<"[";
     for(int i = 0; i < tam; i++){
          cout<<v[i]<<" ";
     }
     cout<<"]"<<endl;
}


int main(){
     const int tam = 20;
     int v1[tam], v2[tam], diferenca[tam], soma[tam], multi[tam];
     cout<<"Digitando o valores para o vetor 1"<<endl;
     ler_vetor(v1, tam);

     cout<<"Digitando valores para o vetor 2"<<endl;
     ler_vetor(v2, tam);    

     d(v1, v2, diferenca, tam);

     s(v1, v2, soma, tam);

     m(v1, v2, multi, tam);

     cout<<"A diferenca entre dois vetores"<<endl;
     imprimir(diferenca, tam);

     cout<<"A soma entre dois vetores"<<endl;
     imprimir(soma, tam);

     cout<<"A multiplicao entre dois vetores"<<endl;
     imprimir(multi, tam);

}