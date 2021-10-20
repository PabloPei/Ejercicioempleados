#ifndef A
#define A

#include <iostream>
#include "empleados.h"

using namespace std;

const int MIN_ADMIN = 0;
const int MAX_ADMIN =69;
const int MIN_JEFE = 70;
const int MAX_JEFE =89;
const int CANT_EMPLEADOS=10;

Empleado * procesar_empleado(int numero_aleatorio);

string obtener_nombre(int numero_aleatorio);

string obtener_apellido(int numero_aleatorio);

unsigned int obtener_legajo(int numero_aleatorio);

unsigned int obtener_antiguedad(int numero_aleatorio);

float obtener_sueldo_administrativo(int numero_aleatorio);

float obtener_sueldo_jefearea(int numero_aleatorio);

float obtener_sueldo_director(int numero_aleatorio);

float calcular_sueldo_promedio(Empleado** empleados);

#endif
