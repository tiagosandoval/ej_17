//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_ADMINISTRATIVO_H
#define EJ_17_ADMINISTRATIVO_H
#include "empleado.h"
#include <iostream>

class Administrativo : public Empleado{
public:
    Administrativo(int legajo, std::string nombre, float salario, int antiguedad);
    ~Administrativo();

    void incrementar_salario();
    void mostrar_empleo();
};


#endif //EJ_17_ADMINISTRATIVO_H
