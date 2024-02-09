// AUTOR: Adriel Reyes Suárez
// FECHA: 09-02-2024
// EMAIL: alu0101640136@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"
// guía de estilo de Google: prefiere el uso de /* comentario */ para comentario multilínea

#pragma once

#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
// guía de estilo de Google: constantes con nombres, incluyendo los valores de enumeración, deben estar escritas en mayúsculas con guiones bajos (_) para separar las palabras
# define EPSILON 1e-6

using namespace std;

class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
  // guía de estilo de Google: La pauta general es colocar primero la sección public, seguida de la protected y luego la private
public:
  /**
   * @brief Inicializa el numerador y denominador
   * @param Numerador como parámetro constante
   * @param Denominador como parámetro constante
  */
  rational_t(const int = 0, const int = 1);
  /**
   * @brief Destructor
  */
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  // guía de estilo de Google: recomienda utilizar una indentación de 2 espacios
  /**
   * @brief Declaración de los getters de los atributos num_, den_
  */
  int get_num() const;
  int get_den() const;
  
  /**
   * @brief Declaración de los setters
   * @param Parámetro constante para modificar el valor de num_
   * @param Parámetro constante para modificar el valor de den_
  */
  void set_num(const int);
  void set_den(const int);

  /**
   * @brief Declaración del método value para obtener el valor del número racional
  */
  double value(void) const;

  /**
   * @brief Método para comparar que dos racionales son iguales
   * @param Tipo racional constante y epsilon para la precisión
  */

  bool is_equal(const rational_t&, const double precision = EPSILON) const;

   /**
   * @brief Método para comparar que un racioanl es mayor que otro
   * @param Tipo racional constante y epsilon para la precisión
  */

  bool is_greater(const rational_t&, const double precision = EPSILON) const;

   /**
   * @brief Método para comparar que un racional es menor que otro
   * @param Tipo racional constante y epsilon para la precisión
  */

  bool is_less(const rational_t&, const double precision = EPSILON) const;
  
/**
 * @brief Método para sumar número racionales
 * @param Parámetro complejo constante racional
*/

rational_t add(const rational_t&);

/**
 * @brief Método para restar número racionales
 * @param Parámetro complejo constante racional
*/

rational_t substract(const rational_t&);

/**
 * @brief Método para multiplicar número racionales
 * @param Parámetro complejo constante racional
*/

rational_t multiply(const rational_t&);

/**
 * @brief Método para dividir número racionales
 * @param Parámetro complejo constante racional
*/

rational_t divide(const rational_t&);
  
  /**
   * @brief Declaración del método write
   * @param Parámetro complejo de flujo constante por referencia para representar los valores
  */
  void write(ostream& = cout) const;
  /**
   * @brief Declaración del método read
   * @param Parámetro complejo de flujo constante por referencia para leer los valores
  */
  void read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  // guía de estilo de Google: sugiere el uso de "lowerCamelCase" para los nombres de variables y miembros de clase
  int num_, den_;
};
