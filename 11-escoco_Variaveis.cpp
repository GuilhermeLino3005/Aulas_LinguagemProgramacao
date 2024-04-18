#include <iostream>

using namespace std;

int num_global = 12;  //variavel global

void var(){
     
     int num = 10;  //variavel local

     static int num_static = 1; //variavel estatica mantém seu valor e pode ser incrementado sem se perder na memoria.

     cout << "Variavel global: " << num_global << endl;

     cout << "Variavel local: " << num << endl;

     num_static ++; 
     cout <<"Variavel estatica: " << num_static << endl;

}

int main(int argc, char const *argv[]){
    
     var();
     var();
     var();

     return 0;
}
