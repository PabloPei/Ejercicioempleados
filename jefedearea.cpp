#include "jefedearea.h"

/////////////////////////////////////////Constructor//////////////////////////////////////////////////
Jefe_area::Jefe_area(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
 float salario):Empleado(nombre, apellido, legajo, antiguedad, salario){};


////////////////////////////////////////Utiles/////////////////////////////////////////////////////////////

void Jefe_area::incrementar_salario() {
    this->salario = this->salario * ( (float)COEFICIENTE_INCREMENTO_JA/100 +1 );
}