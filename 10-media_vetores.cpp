#include <iostream>

using namespace std;

void ler_vetor(float v[], int tam){
     
     for(int i = 0; i < tam; i++){
          
          cout <<"\nDigite um numero no indice " << i << endl;
          cin  >>  v[i];
     
     }
}

float media(float v1[], int tam){
     float soma =  v1[0];
     
     for (int i = 1; i < tam; i++){
          soma = soma + v1[i];
     }

     return soma / tam;
}

void imprimir_vetor(float v[], int tam){
     
     for(int i = 0; i < tam; i++){
          cout << v[i] << " " << endl;
     }

}

int main()
{
     const int tam = 4;
     float v1[tam], v2[tam];

     ler_vetor(v1, tam);
     ler_vetor(v2, tam);
     
     imprimir_vetor(v1, tam);
     imprimir_vetor(v2, tam);

     

     float m1 = media(v1, tam);
     float m2 = media(v2, tam);

     if (m1 > m2){
          cout << "A média maior eh m1 com: " << m1;
     }
     else if (m2 > m1){
          cout << "A média maior eh m2 com: " << m2;
     }
     else{
          cout << "As médias são iguais";
     }
     
     
     return 0;
}
