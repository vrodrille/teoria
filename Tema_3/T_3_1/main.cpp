/**
 * @file main.cpp
 * Archivo con la función main
 * @author algarcia
 * @date 2015-09-25
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Armero.h"
#include "Guerrero.h"

using namespace std;

/**
 * Función principal. Crea objetos, utiliza métodos y libera recursos
 */
int main ( int argc, char** argv )
{
   Armero *a;
   Arma *b;
   Guerrero *g1, *g2;

   // Inicializa el generador de números pseudoaleatorios
   srand ( time (0) );

   // Crea un nuevo armero
   a = new Armero ( "Merlín", 500 );
   cout << a->info () << endl;

   // Pide al armero que fabrique un arma
   b = a->creaArma ( "Excalibur" );
   cout << b->info () << endl;

   // Crea un guerrero, y le entrega el arma
   g1 = new Guerrero ( "Lancelot", 2500 );
   g1->setArmamento (b);
   b = 0;
   cout << g1->info () << endl;

   // El guerrero hace varios ataques de prueba
   cout << "Ataques de demostración:" << endl;
   cout << g1->ataque () << endl;
   cout << g1->ataque () << endl;
   cout << g1->ataque () << endl;

   // En primer lugar, hay que desarmar al guerrero antes de destruirlo
   b = g1->desarmar ();
   delete g1;
   g1 = 0;

   // Reutiliza el arma, dándosela a otro guerrero
   g2 = new Guerrero ( "Caballero negro", 3000 );
   g2->setArmamento (b);
   b = 0;
   cout << g2->info () << endl;
   cout << "Ataque de demostración:" << endl;
   cout << g2->ataque () << endl;

   // Desarma y destruye al segundo guerrero
   b = g2->desarmar ();
   delete g2;
   g2 = 0;

   // Destruye el arma
   delete b;
   b = 0;

   // Destruye el armero
   delete a;
   a = 0;

   return 0;
}

