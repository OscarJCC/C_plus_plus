#include <iostream>
using namespace std;

int main(){

     const string nombre = "Oscar"; // Inicializamos una constante esta no puede cambiar     
     
     //#define string apellidos = "Castro Contreras"; //! Tambien se puede crear una constante de esta forma pero ya es obsoleto
     const string apellidos = "Castro Contreras";
     
     //las contstantes se deben de inicializar siempre en la misma linea

     int edad {22}; // Inicializada

     double salario; // Declarada

     cout << "Introduce salario del empleado: ";
     cin >> salario; // cin permite recibir informacion por consola y inicializa alguna variable ya declarada

     cout << "Introduce la edad del empleado: ";
     cin >> edad;

     cout << endl << "Datos del empleado: " << endl;
     cout << "Nombre: " << nombre << ". Apellidos: " << apellidos << "." << endl << "Edad: " << edad << ". Salario: " << salario;

}