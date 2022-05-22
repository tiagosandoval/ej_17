//
// Created by Tiago Sandoval on 17/05/2022.
//

#ifndef EJ_17_PARSER_H
#define EJ_17_PARSER_H
#include "empleado.h"


class Parser {

public:
    //constructor
    Parser(char **argv);
    // destructor
    ~Parser(){};
    //POS: procesa la entrada y crea determinado objeto a partir de dicho procesamiento
    Empleado* procesarEntrada();

private:
    char** entrada;

    std::string tipoEmpleado();
    std::string nombre();
    int legajo();
    float salario();
    int antiguedad();
};


#endif //EJ_17_PARSER_H
