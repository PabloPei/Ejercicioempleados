#include "director.h"

/////////////////////////////////////////Constructor//////////////////////////////////////////////////
Director::Director(std::string nombre, std::string apellido, unsigned int legajo, unsigned int antiguedad,
                      float salario):Empleado(nombre, apellido, legajo, antiguedad, salario){};


////////////////////////////////////////Utiles/////////////////////////////////////////////////////////////

void Director::incrementar_salario() {
    this->salario = this->salario * ( (float)COEFICIENTE_INCREMENTO_DIR/100 +1 );
}