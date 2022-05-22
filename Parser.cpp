//
// Created by Tiago Sandoval on 17/05/2022.
//

#include "Parser.h"
#include "constantes.h"
#include "administrativo.h"
#include "jefeDeArea.h"
#include "director.h"

using namespace std;

Parser::Parser(char** argv) {
    this->entrada = argv;
}

Empleado* Parser::procesarEntrada() {

    Empleado* empleado = nullptr;

    if(this->tipoEmpleado() == ADMINISTRATIVO) {
        empleado = new Administrativo(this->legajo(), this->nombre(), this->salario(), this->antiguedad());
    }
    else if (this->tipoEmpleado() == JEFE_DE_AREA) {
        empleado = new JefeDeArea(this->legajo(), this->nombre(), this->salario(), this->antiguedad());
    }
    else if (this->tipoEmpleado() == DIRECTOR) {
        empleado = new Director(this->legajo(), this->nombre(), this->salario(), this->antiguedad());
    }
    return empleado;
}

std::string Parser::tipoEmpleado() {
    return (this->entrada[posicion::TIPO_EMPLEADO]);
}

//stof es un "descasteo" de string y (float) e (int) es un casteo

float Parser::salario() {
    return (float) stof(this->entrada[posicion::SALARIO]);
}

int Parser::legajo() {
    return (int) stof(this->entrada[posicion::LEGAJO]);
}

std::string Parser::nombre() {
    return (this->entrada[posicion::NOMBRE]);
}

int Parser::antiguedad() {
    return (int) stof(this->entrada[posicion::ANTIGUEDAD]);
}

