#include <iostream>
#include "utiles.h"
#include "director.h"
#include "empleados.h"
#include "jefedearea.h"
#include "administrativo.h"

using namespace std;

string lista_nombres[5] = { "Pedro",
                            "Juan",
                            "Julian",
                            "Agustina",
                            "Micaela"
};

string lista_apellidos[5] = { "Pei",
                              "Aponte",
                              "Mendoza",
                              "Perez",
                              "Garcia"
};

unsigned int lista_legajo[5] = {103592,99312,104123,98330,101100};

unsigned int lista_antiguedad[5] = {1,2,3,4,5};

float lista_salarios_administrativos[5] = {10000,10400,11000,12000,13500};

float lista_salarios_jefes[5] = {100000,104000,110000,120000,135000};

float lista_salarios_directores[5] = {1000000,1040000,1100000,1200000,1350000};


////////////////////////////Funciones de decision, se deberian implementar con un diccionario///////////////////////////

Empleado * procesar_empleado(int numero_aleatorio){
    string nombre = obtener_nombre(numero_aleatorio);
    string apellido = obtener_apellido(numero_aleatorio);
    unsigned int antiguedad = obtener_antiguedad(numero_aleatorio);
    unsigned int legajo = obtener_legajo(numero_aleatorio);
    float sueldo;

    if(numero_aleatorio >= MIN_ADMIN && numero_aleatorio <= MAX_ADMIN){
        sueldo = obtener_sueldo_administrativo(numero_aleatorio);
        return new Administrativo(nombre,apellido,legajo,antiguedad,sueldo);
    }
    else if(numero_aleatorio >= MIN_JEFE && numero_aleatorio <= MAX_ADMIN){
        sueldo = obtener_sueldo_jefearea(numero_aleatorio);
        return new Jefe_area(nombre,apellido,legajo,antiguedad,sueldo);
    }
    else{
        sueldo = obtener_sueldo_director(numero_aleatorio);
        return new Director(nombre,apellido,legajo,antiguedad,sueldo);
    }
}



string obtener_nombre(int numero_aleatorio){
    string nombre;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        nombre = lista_nombres[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        nombre = lista_nombres[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        nombre = lista_nombres[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        nombre = lista_nombres[3];
    }
    else{
        nombre = lista_nombres[4];
    }
    return nombre;
}
string obtener_apellido(int numero_aleatorio){
    string apellido;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        apellido = lista_apellidos[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        apellido = lista_apellidos[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        apellido = lista_apellidos[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        apellido = lista_apellidos[3];
    }
    else{
        apellido = lista_apellidos[4];
    }
    return apellido;
}

unsigned int obtener_legajo(int numero_aleatorio){
    unsigned int legajo;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        legajo = lista_legajo[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        legajo = lista_legajo[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        legajo = lista_legajo[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        legajo = lista_legajo[3];
    }
    else{
        legajo = lista_legajo[4];
    }
    return legajo;
}

unsigned int obtener_antiguedad(int numero_aleatorio){
    unsigned int antiguedad;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        antiguedad = lista_antiguedad[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        antiguedad = lista_antiguedad[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        antiguedad = lista_antiguedad[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        antiguedad = lista_antiguedad[3];
    }
    else{
        antiguedad = lista_antiguedad[4];
    }
    return antiguedad;
}


float obtener_sueldo_administrativo(int numero_aleatorio){
    float sueldo;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        sueldo = lista_salarios_administrativos[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        sueldo = lista_salarios_administrativos[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        sueldo = lista_salarios_administrativos[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        sueldo = lista_salarios_administrativos[3];
    }
    else{
        sueldo = lista_salarios_administrativos[4];
    }
    return sueldo;
}

float obtener_sueldo_jefearea(int numero_aleatorio){
    float sueldo;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        sueldo = lista_salarios_jefes[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        sueldo = lista_salarios_jefes[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        sueldo = lista_salarios_jefes[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        sueldo = lista_salarios_jefes[3];
    }
    else{
        sueldo = lista_salarios_jefes[4];
    }
    return sueldo;
}

float obtener_sueldo_director(int numero_aleatorio){
    float sueldo;
    if(numero_aleatorio >= 0 && numero_aleatorio <= 19){
        sueldo = lista_salarios_directores[0];
    }
    else if(numero_aleatorio >= 20 && numero_aleatorio <= 39){
        sueldo = lista_salarios_directores[1];
    }
    else if(numero_aleatorio >= 40 && numero_aleatorio <= 59){
        sueldo = lista_salarios_directores[2];
    }
    else if(numero_aleatorio >= 60 && numero_aleatorio <= 80){
        sueldo = lista_salarios_directores[3];
    }
    else{
        sueldo = lista_salarios_directores[4];
    }
    return sueldo;
}

float calcular_sueldo_promedio(Empleado** empleados){

    float sueldo_prom=0;

    for(int i = 0 ; i <= CANT_EMPLEADOS ; i++ )
        sueldo_prom += empleados[i] -> get_salario();

    return sueldo_prom/CANT_EMPLEADOS;
}
