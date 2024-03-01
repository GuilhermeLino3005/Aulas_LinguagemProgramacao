#include <iostream>
using namespace std;

bool primo(int valor){
    for(int i = 2; i < valor; i++){
          if(valor % i == 0){
               return false;
          }
    }

    return true;

}

int main(){
     int valor;
     cout<<"Digite um valor primo";
     cin >> valor;

     if(primo(valor)){
          cout<<"É primo";
     }
     else{
          cout<<"Não é primo ";
     }

}