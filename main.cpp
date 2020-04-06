#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#include "classes.h"
#include "methods.h"
#include "reports.h"

void pausa() {
    cout << "Pulsa una tecla para continuar..."<<endl;
    getwchar();
    getwchar();
}

int main() {
    //el inicio del 100
    //inicializacion de variables
    iniciar_fichas();
    poner_en_cola();
    int n = 0;//menu
    string nombre = "";
    system("cls");
    cin.clear();
    while (n != 9) {

        cout << "Hola usuario!" << endl;
        cout << "1. insertar usuarios" << endl;
        cout << "2. archivo de carga" << endl;
        cout << "3. empezar partida" << endl;
        cout << "4. reportes" << endl;
        cout << "9. salir" << endl;
        cin >> n;
        system("cls");
        cin.clear();
        switch (n) {
            case 0:

                break;

            case 1:
                cout << "ingrese el nombre" << endl;

                cin >> nombre;
                agregar_usuario(nombre);
                cin.clear();
                system("cls");
                cin.clear();
                break;

            case 4:
                cout << "Hola usuario!" << endl;
                cout << "1. reporte arbol" << endl;
                cout << "2. reporte matriz" << endl;
                cout << "3. x" << endl;
                cout << "4. y" << endl;
                cout << "9. z" << endl;
                cin >> n;
                if (n == 1) {
                    reporte_arbol();
                }
                pausa();
                cin.clear();
                break;

                break;

            default:

                break;
        }
    }


    return 0;
}
