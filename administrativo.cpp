//
// Created by Tiago Sandoval on 17/05/2022.
//

#include "administrativo.h"
#include "constantes.h"

Administrativo::Administrativo(int legajo, string nombre, float salario, int antiguedad) :
        Empleado(legajo, nombre, salario, antiguedad) {
    this->legajo = legajo;
    nombre_apellido = nombre;
    this->salario = salario;
    this->antiguedad = antiguedad;
}

void Administrativo::incrementar_salario() {
    this->salario = salario + salario * AUMENTO_ADMINISTRATIVO;
}

void Administrativo::mostrar_empleo() {
    cout << "Empleo: Administrativo" << endl;
}
