#include <iostream>
using namespace std;

int main() {
   float salario, resultado;
   const float bonus = 15.0/100.0;
   
   cout<<"Informe o valor do salario: "<<endl;
   cin>>salario;
   
   resultado = salario + (salario * bonus );
   
   cout<<"O valor do salario com o bunos sera de "<<resultado<<endl;
    return 0;
}
Algoritmo questão 23:
#pragma once
#include <iostream>
using namespace std;

void mostrarInfo() {
    cout << "Informacoes do programa." << endl;
}

