//
// Created by Tiago Sandoval on 17/05/2022.
//

#include "jefeDeArea.h"
#include "constantes.h"

JefeDeArea::JefeDeArea(int legajo, string nombre, float salario, int antiguedad) :
        Empleado(legajo, nombre, salario, antiguedad) {
    this->legajo = legajo;
    nombre_apellido = nombre;
    this->salario = salario;
    this->antiguedad = antiguedad;
}

void JefeDeArea::incrementar_salario() {
    this->salario = salario + salario * AUMENTO_JEFE_DE_AREA;
}

void JefeDeArea::mostrar_empleo() {
    cout << "Empleo: Jefe de area" << endl;
}
