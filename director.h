//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_DIRECTOR_H
#define EJ_17_DIRECTOR_H
#include "empleado.h"

class Director : public Empleado {
public:
    Director(int legajo, string nombre, float salario, int antiguedad);
    ~Director(){};

    void incrementar_salario();
    void mostrar_empleo();
};


#endif //EJ_17_DIRECTOR_H
