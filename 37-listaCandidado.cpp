#include <iostream>

using namespace std;

struct Nopessoa{
     string nome;
     char sexo;
     Nopessoa* prox;
};

Nopessoa* criar_lista(){
     return NULL;
}

void inserir_inicio(Nopessoa * &l, string nome, char sexo){
     Nopessoa * novo = new Nopessoa;
     novo -> nome = nome;
     novo -> sexo = sexo;
     novo -> prox = NULL;

     if (l == NULL){
          l = novo;
     }
     else{
          novo -> prox = l;
          l = novo;
     }
}

void imprimir(Nopessoa *l){
   Nopessoa *p = l;
   while (p  != NULL){
     cout<< p -> nome<<"-";
     cout<< p -> sexo<<endl;
     p = p -> prox;
   }
     
}

void inserir_fim(Nopessoa *&l, int info){
     Nopessoa *novo = new Nopessoa;
     novo -> nome = info;
     novo -> prox = NULL;
     if (l == NULL){
          l = novo; 
     }
     else{
          Nopessoa * p = l;
          while (p -> prox != NULL){
               p = p -> prox;
          }
          p -> prox = novo;
          
     }
     
}

int tamanho(Nopessoa *l){
     int cont = 0;
     Nopessoa *p = l ;
     while (p != NULL){
          cont++;
          p = p -> prox;
     }
     return cont;
     
}

bool romever_inicio(Nopessoa * &l){
     if(l == NULL){
          return false;
     }
     else{
          Nopessoa *p = l;
          l = l -> prox;
          delete p;
          return true;
     }
}


int main(){
     Nopessoa* homem = criar_lista();
     Nopessoa* mulher = criar_lista();
     
     string nome, aux;
     char sexo;
     
     do{
          cout<<"Digite o nome do candidado: ";
          cin >> nome;

          if(nome != "Fim"){
               cout<<"Digite o sexo do candidado: ";
               cin >> sexo;
              
               if(sexo == 'M' || sexo == 'm'){
                    inserir_inicio(homem, nome, sexo);
               }
               else if (sexo == 'F' || sexo == 'f'){
                    inserir_inicio(mulher, nome, sexo);
               }
          }

          

     }while(nome != "Fim");
     
     cout<<"Lista de homens"<<endl;
     imprimir(homem);
     
     cout<<"Lista de mulheres"<<endl;
     imprimir(mulher);
        
}