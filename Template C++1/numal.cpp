#include "numal.h"
using namespace std;

void numal::asignum(int* num) // Asigna numero aleatorio a arreglo de 20 numeros
{
    for (int i = 0; i < x; i++) {
        num[i] = rand() % 1000;
    }
}

void numal::mostrar(int* num) // Muestra los numeros asignados al arreglo
{
    for (int i = 0; i < x; i++) {
        cout << num[i] << ", ";
    }
}


//https://www.azulschool.net/todos-los-grupos/grupo-de-c/forum/topic/generar-numeros-aleatorios-en-c/#:~:text=C%2B%2B%20define%20la%20funci%C3%B3n%20rand,tambi%C3%A9n%20en%20la%20librer%C3%ADa%20cstdlib.&text=valor%20%3D%201%20%2B%20rand()%20%25%20100
