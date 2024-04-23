#include <iostream>
#include <string.h>

using namespace std;

int main(){
     char nome [100];
     cout<<"Digite o seu nome: ";
     cin >> nome;

     int tam = strlen(nome);
     char *pini = &nome[0];
     

     for (char *p = &nome[tam]; p >= pini; p--){
         cout << *p;
     }
}