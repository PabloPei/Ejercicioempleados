#ifndef __EMPLEADOS_H__
#define __EMPLEADOS_H__

#include <iostream>

class Empleado{

//Atributos
protected:
    std::string nombre;
    std::string apellido;
    unsigned int legajo;
    unsigned int antiguedad;
    float salario;

//metodos
public:
    Empleado();
    Empleado(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad, float salario);
    std::string get_nombre();
    std::string get_apellido();
    unsigned int get_legajo();
    unsigned int get_antiguedad();
    float get_salario();
    void visualizar_caract();
    virtual void incrementar_salario() = 0;
};

#endif