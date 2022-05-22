//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_CONSTANTES_H
#define EJ_17_CONSTANTES_H

#include <string>

const float AUMENTO_DIRECTOR = 0.1;
const float AUMENTO_JEFE_DE_AREA = 0.15;
const float AUMENTO_ADMINISTRATIVO = 0.2;

const std::string ADMINISTRATIVO = "administrativo";
const std::string JEFE_DE_AREA = "jefe de area";
const std::string DIRECTOR = "director";

enum posicion {
    TIPO_EMPLEADO = 1,
    LEGAJO = 2,
    NOMBRE = 3,
    SALARIO = 4,
    ANTIGUEDAD = 5
};

#endif //EJ_17_CONSTANTES_H
