#include "empleados.h"

using namespace std; 

/////////////////////////////////////////////////// Constructores ///////////////////////////////////////////
Empleado::Empleado(){
    this -> nombre = "";
    this -> apellido = "";
    this -> legajo = 0;
    this -> antiguedad = 0;
    this -> salario = 0;
}

Empleado::Empleado(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,float salario){

    this -> nombre = nombre;
    this -> apellido = apellido;
    this -> legajo = legajo;
    this -> antiguedad = antiguedad;
    this -> salario = salario;

}

/////////////////////////////////////////////////////Getters////////////////////////////////////////////////////
std::string Empleado::get_nombre(){
    return this -> nombre;
}

std::string Empleado::get_apellido(){
    return this -> apellido;
}

unsigned int Empleado::get_legajo(){
    return this -> legajo;
};

unsigned int Empleado::get_antiguedad(){
    return this -> antiguedad;
}

float Empleado::get_salario(){
    return this -> salario;
}

void Empleado::visualizar_caract(){
    cout << "-------------" << endl << "EMPLEADO" << endl << "------------" << endl;
    cout << endl;
    cout << "Nombre y Apellido: " << this->nombre <<"  " << this -> apellido << endl;
    cout << "Antiguedad: " << this -> antiguedad << endl;
    cout << "Legajo: " << this -> legajo << endl;
    cout << "Salario: " << this -> salario << endl;
    cout << endl;
}