//
// Created by Tiago Sandoval on 17/05/2022.
//

#include "empleado.h"

Empleado::Empleado(int legajo, string nombre_apellido, float salario, int antiguedad) {
    this->legajo = legajo;
    this->nombre_apellido = nombre_apellido;
    this->salario = salario;
    this->antiguedad = antiguedad;
}

string Empleado::obtener_nombre() const {
    return nombre_apellido;
}

int Empleado::obtener_antiguedad() const {
    return antiguedad;
}

int Empleado::obtener_legajo() const {
    return legajo;
}

float Empleado::obtener_salario() const {
    return salario;
}

void Empleado::mostrar_empleado() const {
    cout << "Nombre: " << obtener_nombre() << endl;
    cout << "Legajo: " << obtener_legajo() << endl;
    cout << "Salario: " << obtener_salario() << endl;
    cout << "Antiguedad: " << obtener_antiguedad() << endl;
}