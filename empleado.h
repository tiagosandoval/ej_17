//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_EMPLEADO_H
#define EJ_17_EMPLEADO_H
#include <iostream>
using namespace std;

class Empleado {
protected:
    int legajo;
    string nombre_apellido;
    float salario;
    int antiguedad;

public:
    Empleado(int legajo, string nombre, float salario, int antiguedad);
    ~Empleado(){};

    virtual void incrementar_salario() = 0;         //ACORDATE DE IGUALAR A CERO LOS METODOS ABSTRACTOS!
    virtual void mostrar_empleo() = 0;

    int obtener_legajo() const;
    string obtener_nombre() const;
    float obtener_salario() const;
    int obtener_antiguedad() const;
    void mostrar_empleado() const;
};


#endif //EJ_17_EMPLEADO_H
