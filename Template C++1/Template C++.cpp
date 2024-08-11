#include <iostream>
#include "MenuEstruct.h"
#include "Lista.h"
#include "Arreglo.h"
#include "Arbol.h"
#include "Cola.h"
#include "Pila.h"

using namespace std;


int main()
{
    int numb = rand() % 10; // Numero a Buscar
    MenuEstruct est; //Creamos estructura de Menu a mostrar

    est.Menu(); // Muestra Menu
    est.select(est.est1); // Eleccion 1 del menu
    est.select(est.est2); // Eleccion 2 del menu
    est.stich(est.est1,est.est2); // Hace ambos switch de eleccion de estructura 
    

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
