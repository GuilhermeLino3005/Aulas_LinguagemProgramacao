#include <iostream>

using namespace std;


int main(){
     //Variavéis do sistema local
     float n1, n2, n3, media;
     int Media;
     string nome;

     cout << "--- SISTEMA ALUNO ---" << endl;

     cout <<"Digite o nome do aluno: "<< endl;
     cin >> nome;
     
     cout << "Digite a nota 1 do aluno "+nome+" : " << endl;
     cin >> n1;

     cout << "Digite a nota 2 do aluno "+nome+" :" << endl;
     cin >> n2;

     cout << "Digite a nota 3 do aluno "+nome+" :"  << endl;
     cin >> n3;

     Media = (n1+ n2+ n3)/3;

     cout <<"A media de aluno e: "<< Media << endl;



     
     
}