#include "administrativo.h"

/////////////////////////////////////////Constructor//////////////////////////////////////////////////
Administrativo::Administrativo(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
                               float salario):Empleado(nombre, apellido, legajo, antiguedad, salario){};


////////////////////////////////////////Utiles/////////////////////////////////////////////////////////////

void Administrativo::incrementar_salario() {
    this->salario = this->salario * ( (float)COEFICIENTE_INCREMENTO_ADM/100 +1 );
}