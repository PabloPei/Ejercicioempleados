#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "empleados.h"

const int COEFICIENTE_INCREMENTO_DIR = 10;

class Director: public Empleado {

//Atributos


//metodos
public:
    Director(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
             float salario);

    void incrementar_salario();

};



#endif