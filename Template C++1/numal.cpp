#include "numal.h"
#include <iostream>
using namespace std;

void numal::asignum(int* num) // Asigna numero aleatorio a arreglo de 20 numeros
{
    for (int i = 0; i < x; i++) {
        num[i] = rand() % 100;
    }
}

void numal::mostrar(int* num) // Muestra los numeros asignados al arreglo
{
    for (int i = 0; i < x; i++) {
        cout << num[i] << ", ";
    }
}

void numal::valpunt(int* num) // Pasa los numeros del arreglo creado a otro sistema de apuntadores
{
    for (int i = 0; i < x; i++) {
        val[i] = &num[i];
    }
}

void numal::valreal(int* val) //copia los valores del sistema de apuntadores a un arreglo de enteros
{
    for (int i = 0; i < rep; i++) {
        valor[i] = val[i]; //#increible
    }
}



//https://www.azulschool.net/todos-los-grupos/grupo-de-c/forum/topic/generar-numeros-aleatorios-en-c/#:~:text=C%2B%2B%20define%20la%20funci%C3%B3n%20rand,tambi%C3%A9n%20en%20la%20librer%C3%ADa%20cstdlib.&text=valor%20%3D%201%20%2B%20rand()%20%25%20100
