#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[]){
     //obtendo o tamanho da string
     int tam = strlen(nome);
     cout << tam << endl;

     //Inverdendo a string
     for(int i = tam - 1; i >= 0; i--){
          cout << nome[i];
     }
}

int main(){
     char nome [] = "Guilherme";

     inverte(nome);
}