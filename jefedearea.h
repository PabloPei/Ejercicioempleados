#ifndef __JEFEAREA_H__
#define __JEFEAREA_H__

#include "empleados.h"

const int COEFICIENTE_INCREMENTO_JA = 15;

class Jefe_area: public Empleado {

//Atributos


//metodos
private:
    Jefe_area(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
              float salario);

    void incrementar_salario();

};



#endif