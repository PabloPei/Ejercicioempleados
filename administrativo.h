#ifndef __ADMINISTRATIVO_H__
#define __ADMINISTRATIVO_H__

#include "empleados.h"

const int COEFICIENTE_INCREMENTO_ADM = 20;

class Administrativo: public Empleado {

//Atributos


//metodos
public:
    Administrativo(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
                   float salario);

    void incrementar_salario();

};



#endif