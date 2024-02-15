// AUTOR: Adriel Reyes Suárez
// FECHA: 09-02-2024
// EMAIL: alu0101640136@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_ts

// pauta de estilo [92]: comentarios multilínea usando solo "//"
// guía de estilo de Google: prefiere el uso de /* comentario */ para comentario multilínea

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
// guía de estilo de google: noaborda directamente el tema pero  ofrece recomendaciones generales sobre cómo organizar los archivos de cabecera y cómo evitar problemas comunes
#include "rational_t.hpp"

using namespace std;

int main()
{
  rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();


rational_t x(1, 3), y(2, 3);
x.write();
y.write();
cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl;
cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl;


cout << "a + b: ";
a.add(b).write();
  
cout << "b - a: ";
 b.substract(a).write();

cout << "a * b: ";
a.multiply(b).write();
  
cout << "a / b: ";
a.divide(b).write();

a.resta_unidad().write(); 
  return 0;
}