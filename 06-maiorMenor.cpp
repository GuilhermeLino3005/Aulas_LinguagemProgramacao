#include <iostream>

using namespace std;

int main(){
     float num, menor, maior;

     for(int i = 1; i <= 5; i++){
          cout << "Digite um numero: ";
          cin >> num;

          if(num > maior){
               maior = num;
          }
          else if (num < menor){
               menor = num;
          }
          else{
               menor = num;
               maior = num;
          }

     }
     
     

     cout << maior << endl;
     cout << menor << endl;


     
}