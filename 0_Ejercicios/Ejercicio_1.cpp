/*
Ejercicio1:
Crear programa que simule la instalacion de suelo de tarima flotante 
en un vivienda y cuanto costaria instalarla:
-¿Cuantos metros quieres instalar con calidad media?
-¿Cuantos metros quieres instalar con calidad alta?
-Precio m calidad media = $ 35.5
-Precio m calidad alta = $ 55.3
-IVA 16%
-Dias validos del presupuesto = 30 dias
*/

#include <iostream>
using namespace std;

int main(){

     cout << "Bienvenido al servicio de intalacion de tarima flotante" << endl;

     const float precio_m_alta = 55.3 ;
     const float precio_m_media = 35.5;
     const float iva = 0.21;
     const int dias_presupuesto = 30;

     float m_calidad_alta {0.0};
     float m_calidad_media {0.0};

     cout << "\n¿Cuantos metros quieres instalar con calidad alta? ";
     cin >> m_calidad_alta;

     cout << "\n¿Cuantos metros quieres instalar con calidad media? ";
     cin >> m_calidad_media;

     float costo_calidad_alta = m_calidad_alta*precio_m_alta;
     float costo_calidad_media = m_calidad_media*precio_m_media;
     float costo_total = costo_calidad_alta+costo_calidad_media;
     float costo_total_iva = costo_total + iva*costo_total;

     cout << "\nPresupuesto por intalacion de tarima flotante:" << endl;
     cout << "Precio de tarima calidad alta: " << precio_m_alta << endl;
     cout << "Metros de calidad alta: " << m_calidad_alta << "m" << endl;
     cout << "Precio de tarima calidad media: " << precio_m_media << endl;
     cout << "Metros de calidad media: " << m_calidad_media << "m" << endl;

     cout << "\nIMPORTE: ";

     cout << "\nCosto calidad alta = $" << costo_calidad_alta << endl;
     cout << "Costo calidad media = $" << costo_calidad_media << endl;
     cout << "Costo total = $" << costo_total << endl;
     cout << "IVA = $" << costo_total*iva << endl;

     cout << "\nIMPORTE TOTAL: ";

     cout << "\nCosto total mas IVA = $" << costo_total_iva << endl;

     cout << "Validez del presupuesto es de " << dias_presupuesto << " dias a partir de hoy" << endl << endl;

}