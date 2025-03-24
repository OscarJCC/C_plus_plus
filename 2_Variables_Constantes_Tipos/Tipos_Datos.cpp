#include <iostream>
using namespace std;

int main(){

     cout << "Caracter:" << endl;
     cout << "» Representa caracteres individuales como 'F','f','B','@'" << endl;
     cout << "» Tambien enteros pequeños" << endl << endl;
     cout << "╔══════════╦═════════════════════════════╦═════════╦══════════════════════════════════╗" << endl;
     cout << "║ char     ║ Caracter o entero pequeño   ║ 1byte   ║ -128 a 127 / unsigned 0 - 255    ║" << endl;
     cout << "║ char8_t  ║ Caracter Unicode 8 bits     ║ 1byte   ║                                  ║" << endl;
     cout << "║ char16_t ║ Caracter Unicode 16 bits    ║ 1byte   ║                                  ║" << endl;
     cout << "║ char32_t ║ Caracter Unicode 32 bits    ║ 1byte   ║                                  ║" << endl;
     cout << "║ wchar_t  ║ Caracter Unicode            ║ 1byte   ║                                  ║" << endl;
     cout << "╚══════════╩═════════════════════════════╩═════════╩══════════════════════════════════╝" << endl << endl;

     cout << "Enteros:" << endl;
     cout << "» Utilizados para representar numero enteros" << endl << endl;
     cout << "╔═══════════════╦════════════════════════╦═════════╦══════════════════════════════════════════════════════╗" << endl;
     cout << "║ short         ║ N° entero pequeño      ║ 2byte   ║ -32,768 a 32,767 / unsigned                          ║" << endl;
     cout << "║ int           ║ N° entero              ║ 4byte   ║ -2,147,486,648 a 2,147,486,648 / unsigned            ║" << endl;
     cout << "║ long          ║ N° entero largo        ║ 4byte   ║ -2,147,486,648 a 2,147,486,648 / unsigned            ║" << endl;
     cout << "║ long long     ║ N° entero muy largo    ║ 8byte   ║ -9,223,372,775,808 a 9,223,375,775,807 / unsigned    ║" << endl;
     cout << "╚═══════════════╩════════════════════════╩═════════╩══════════════════════════════════════════════════════╝" << endl;
     cout << "Si colocamos unsigned antes de cadass este solo puede contener valores positivos y no negativos" << endl;
     cout << "pero su capacidad no de almacenar algun numero no disminulle." << endl << endl;

     cout << "Decimales o flotantes:" << endl;
     cout << "» Utilizados para representar numero decimales" << endl;
     cout << "» Tamaño y rango de valores depende del compilador y plataforma" << endl << endl;
     cout << "╔═══════════════╦═════════════════════════════╦═════════╦════════════════════════╗" << endl;
     cout << "║ float         ║ Parte decimal 7 digitos     ║ 4byte   ║ 1.2e-38 a 3.4e38       ║" << endl;
     cout << "║ double        ║ Parte decimal 15 digitos    ║ 8byte   ║ 2.2e-308 a 1.8e308     ║" << endl;
     cout << "║ long double   ║ Parte decimal 19 digitos    ║ 8byte   ║ 3.3e-4932 a 1.2e4932   ║" << endl;
     cout << "╚═══════════════╩═════════════════════════════╩═════════╩════════════════════════╝" << endl << endl;

     cout << "Booleanos:" << endl;
     cout << "» Utilizados para representar verdadero o falso (true o false)" << endl;
     cout << "» 0 es falso" << endl;
     cout << "» Cualquier otro numero es verdadero" << endl << endl;
     cout << "╔══════════╦══════════════════════════════════╦═════════╦══════════════╗" << endl;
     cout << "║ bool     ║ Valores logicos verdadero/falso  ║ 1byte   ║ true/false   ║" << endl;
     cout << "╚══════════╩══════════════════════════════════╩═════════╩══════════════╝" << endl << endl;

}

/*
! Caracter:
Representa caracteres individuales como "F","f","B","@"
Tambien enteros pequeños

*char      ║ Caracter o entero pequeño  ║ 1byte ║ -128 a 127 / unsigned 0 - 255
*char8_t   ║ Caracter Unicode 8 bits    ║ 1byte 
*char16_t  ║ Caracter Unicode 16 bits   ║ 1byte 
*char32_t  ║ Caracter Unicode 32 bits   ║ 1byte 
*wchar_t   ║ Caracter Unicode           ║ 1byte 
*/

/*
! Enteros:
Utilizados para representar numero enteros

*short         ║ N° entero pequeño      ║ 2byte   ║ -32,768 a 32,767 / unsigned
*int           ║ N° entero              ║ 4byte   ║ -2,147,486,648 a 2,147,486,648 / unsigned
*long          ║ N° entero largo        ║ 4byte   ║ -2,147,486,648 a 2,147,486,648 / unsigned
*long long     ║ N° entero muy largo    ║ 8byte   ║ -9,223,372,775,808 a 9,223,375,775,807 / unsigned
!Si colocamos unsigned antes de cada tipo de datos este solo puede contener valores positivos y no negativos
!pero su capacidad no de almacenar algun numero no disminulle.
*/

/*
! Decimales o flotantes:
Utilizados para representar numero decimales
Tamaño y rango de valores depende del compilador y plataforma

*float         ║ Parte decimal 7 digitos     ║ 4byte   ║ 1.2e-38 a 3.4e38
*double        ║ Parte decimal 15 digitos    ║ 8byte   ║ 2.2e-308 a 1.8e308
*long double   ║ Parte decimal 19 digitos    ║ 8byte   ║ 3.3e-4932 a 1.2e4932
*/

/*
! Booleanos:
Utilizados para representar verdadero o falso (true o false)
0 es falso
Cualquier otro numero es verdadero

*bool     ║ Valores logicos verdadero falso  ║ 1byte   ║ true/false
*/