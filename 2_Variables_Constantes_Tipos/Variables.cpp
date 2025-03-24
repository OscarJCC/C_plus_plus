#include <iostream>
using namespace std;

int main(){

     string nombre = "Oscar"; // Inicializada

     int edad {22}; // Inicializada

     double salario; // Declarada

     cout << "Introduce salario del empleado: ";
     cin >> salario; // cin permite recibir informacion por consola y inicializa alguna variable ya declarada

     cout << "Introduce la edad del empleado: ";
     cin >> edad;

     cout << endl << "Datos del empleado: " << endl;
     cout << "Nombre: " << nombre << ". Edad: " << edad << ". Salario: " << salario;

}