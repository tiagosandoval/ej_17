//
// Created by Tiago Sandoval on 17/05/2022.
//

#include "director.h"
#include "constantes.h"

Director::Director(int legajo, string nombre, float salario, int antiguedad) :
        Empleado(legajo, nombre, salario, antiguedad) {
    this->legajo = legajo;
    nombre_apellido = nombre;
    this->salario = salario;
    this->antiguedad = antiguedad;
}

void Director::incrementar_salario() {
    this->salario = salario + salario * AUMENTO_DIRECTOR;
}

void Director::mostrar_empleo() {
    cout << "Empleo: Director" << endl;
}
