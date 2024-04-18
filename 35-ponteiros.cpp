#include <iostream>

using namespace std;




int main(){
     string veiculo = "Carro";
     
     string *pv; // Declarando um ponteiro 

     pv = & veiculo; // o ponteiro PV está recebendo o endereço da variavel veiculo
     
     cout<<veiculo<<endl; // Imprimendo o valor inicial 
     
     cout << pv<<"\n"<<&veiculo<<endl;

     *pv = "Moto"; // No endereço apontado por pv adiciona o valor moto

     cout<<veiculo<<endl;
 
}    