#include <iostream>
#include "empleado.h"
#include "Parser.h"

// HACERLE UNA INTERFAZ AL PROGRAMA
// HACER QUE EL PROGRAMA LEA UN ARCHIVO Y ORDENE LOS EMPLEADOS EN UNA LISTA ENLAZADA
// PERMITIR AL PROGRAMA QUE SE INGRESE UN NUEVO EMPLEADO Y LO META EN LA LISTA

int main(int argc, char** argv) {

    // HACER UN PARSER Y UN MENU
    if(argc == 6) {
        Parser parser = Parser(argv);
        Empleado* empleado = parser.procesarEntrada();

        if (empleado != nullptr) {                                          // en este caso no se usa empleado.metodo(),
            cout << endl;                                                   // se usa empleado->metodo()
            empleado->mostrar_empleado();
            empleado->mostrar_empleo();

            empleado->incrementar_salario();
            cout << endl << "Salario incrementado: " << empleado->obtener_salario() << endl;
            delete empleado;
        }
        /*
            Empleado yamil(1, "Yamil", 1000, 2);
            cout << endl;
            yamil.mostrar_nombre();
            cout << "Legajo: " << yamil.mostrar_legajo() << endl;
            cout << "Antiguedad: " << yamil.mostrar_antiguedad() << endl;
            cout << "Salario: " << yamil.mostrar_salario() << endl;

            yamil.incrementar_salario();
            cout << endl << "Salario incrementado: " << yamil.mostrar_salario() << endl;
        */
    }
    else
        cout << "Ingrese 6 argumentos del estilo ./programa administrativo 1 Juan 15000 3";

    return 0;
}
