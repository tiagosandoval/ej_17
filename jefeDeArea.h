//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_JEFEDEAREA_H
#define EJ_17_JEFEDEAREA_H
#include <iostream>
#include "empleado.h"

class JefeDeArea : public Empleado{
public:
    JefeDeArea(int legajo, std::string nombre, float salario, int antiguedad);
    ~JefeDeArea(){};

    void incrementar_salario();
    void mostrar_empleo();
};


#endif //EJ_17_JEFEDEAREA_H
