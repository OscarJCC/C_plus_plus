#include <iostream> // Importacion de bibliotecas o librerias en este caso iostream
using namespace std; // Especifica que utilizaremos un espacion de nombres std

/* Los espacios de nombres nos permiten poder guardar funciones con los mismos nombres
en diferenctes espacios y que podamos usarlas sin que ocurra algun conflico en el mismo
codigo aun que tengan el mismo nombre. En este caso se esta llamando al espacio de nombres 
std dentro de la biblioteca iostream*/

int main(){ // Funcion principal la cual es siempre el punto de entrada de ejecucion en todo codigo c++

     cout << "Hola mundo" << endl; // Funcion cout de la biblioteca iostream la cual coloca en la consolo lo que esta entre << .. << y 
                                   // endl coloca un salto de linea.

     return 0;

}