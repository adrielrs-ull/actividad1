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
#include "rational_t.hpp"

/**
 * @brief Definición del constructor donde comprueba si d es distinto de cero y luego asigna los valores
 * @param Parámetro constante n (numerador)
 * @param Parámetro constante d (denominador)
*/
rational_t::rational_t(const int n, const int d)
{
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos
// guía de estilo de Google: no enfatiza entre el número de líneas entre métodos pero sí suigiera un formato claro y consistente
// pauta de estilo [83]: tipo retornado en línea anterior al método
// guía de estilo de google: recomienda colocar el tipo de retornado antes del nombre de la función en la misma línea

/**
 * @brief Definición de los getters de los atributos, los que retornan el valor de estos
*/

int
rational_t::get_num() const
{
  return num_;
}



int
rational_t::get_den() const
{
  return den_;
}

/**
 * @brief Definición del setter num_
 * @param Parámetros constantes para la modificación del atributo
*/
  
void
rational_t::set_num(const int n)
{
  num_ = n;
}

/**
 * @brief Definición del setter del den_
 * @param Parámetro constante para la modificación del atributo
*/
  
  
void
rational_t::set_den(const int d)
{
  assert(d != 0);
  den_ = d;
}

/**
 * @brief Método value que retorna el valor double del número racional
*/

double
rational_t::value() const
{ 
  return double(get_num()) / get_den();
}



bool
rational_t::is_equal(const rational_t& r, const double precision) const {
  if (fabs((static_cast<double>(num_) / static_cast<double>(den_)) - (static_cast<double>(r.get_num()) / static_cast<double>(r.get_den()))) < precision) {
    return true;
  }
  return false;
}



bool
rational_t::is_greater(const rational_t& r, const double precision) const {
  if ((static_cast<double>(num_) / static_cast<double>(den_)) - (static_cast<double>(r.get_num()) / static_cast<double>(r.get_den())) > precision) {
    return true;
  }
  return false;
}



bool
rational_t::is_less(const rational_t& r, const double precision) const {
  if ((static_cast<double>(r.get_num()) / static_cast<double>(r.get_den())) - (static_cast<double>(num_) / static_cast<double>(den_)) > precision) {
    return true;
  }
  return false;
}



rational_t
rational_t::add(const rational_t& r) {
  return rational_t(num_ + r.get_num(), den_ + r.get_den());
}


rational_t
rational_t::substract(const rational_t& r) {
  return rational_t(num_ - r.get_num(), den_ - r.get_den());
}



rational_t
rational_t::multiply(const rational_t& r) {
  return rational_t(num_ * r.get_num(), den_ * r.get_den());
}



rational_t
rational_t::divide(const rational_t& r) {
  return rational_t(num_ * r.get_den(), den_ * r.get_num());
}



// E/S
/**
 * @brief Método write que se encarga de imprimir por pantalla el número racional de forma adecuada
 * @param Parámetro complejo de flujo por referencia os para representar por pantalla
*/
void
rational_t::write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}


/**
 * @brief Método read que se encarga de leer el valor de num y den
 * @param Parámetro complejo de flujo constante por referencia para leer los valores
*/
void 
rational_t::read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
