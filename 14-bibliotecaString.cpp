#include <iostream>
#include <string.h>

using namespace std;

int main(){
     char nome [] = "Guilherme";
     char nome2[] = "Lino";
     char letra = 'M';

     letra = tolower(letra); // comando que deixa o caractere minusculo
     cout << letra <<endl; 

     char letra2 = 'g';
     
     letra2 = toupper(letra2); // comando que deixa o caractere maiúscula
     cout << letra2 <<endl;

     strcat(nome, nome2); // comando que concatena duas variaveis
     cout << nome << endl;


     if(isalpha(nome[0])){ // condicional que verifica se o primeiro indice é alfabetica ou numerico
          cout << "Caractere alfabetico "<< endl;
     }
     else{
          cout <<"Caractere numerico " <<endl;
     }

     if (isdigit(nome[0])){ // condicional que verifica se o primeiro indice letra é ou numero
          cout << "Numero" <<endl;
     }
     else{
          cout << "Letra"<<endl;
     }

     if(isupper(nome[0])){ // condicional que verifica se o primeiro indice é maiúscula ou minúsculo
          cout<<"Maiuscula"<<endl;
     }
    
     else{
          cout<<"minuscula"<<endl;     
     }

     
     if(islower(nome[0])){ // condicional que verifica se o primeiro indice é minúsculo ou maiúscula 
          cout<<"minuscula"<<endl;
     }
    
     else{
          cout<<"maiuscula"<<endl;     
     }

     if(strcmp(nome, nome2) == 0){ // condicional que verfica se as variaveis são iguais ou diferentes
          cout << "Strings iguais"<<endl;
     }
     else{
          cout <<"Strings diferentes"<<endl;
     }

     

     






     

}