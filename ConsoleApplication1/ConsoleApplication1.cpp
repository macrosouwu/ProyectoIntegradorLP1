// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int opcion;
    string nombre;
    string nombreEstudiante;
    string paternoEstudiante;
    string maternoEstudiante;
    string carreraEstudiante;
    string correoEstudiante;
    string telefonoEstudiante;
    int matriculaEstudiante;
    string nombreCompletoEstudiante;


    cout << "\nBienvenido a la Etapa 1 del Proyecto Integrador " << endl;

    cout << "\nSelecciona una de las siguientes opciones\n\n";
    cout << "1. Alta de estudiantes\n";
    cout << "2. Baja de estudiantes\n";
    cout << "3. Modificaciones de estudiantes\n";
    cout << "4. Busqueda de estudiantes\n";
    cout << "5. Salir\n\n";

    cout << "Ingresa una opcion del 1 al 5: ";
    cin >> opcion;

   

    switch (opcion) {
    case 1:
        system("cls");
        cout << "ALTA DE ESTUDIANTES\n";
        cout << "Introduce la matricula del estudiante(debe ser un valor entero): ";
        cin >> matriculaEstudiante;
        
        cout << "\nIntroduce el nombre del estudiante: ";
        cin >> nombreEstudiante;
        
        cout << "\nIntroduce su apellido paterno: ";
        cin >> paternoEstudiante;
        cout << "\nIntroduce su apellido materno: ";
        cin >> maternoEstudiante;

        nombreCompletoEstudiante = nombreEstudiante + " " + paternoEstudiante + " " + maternoEstudiante;
        cout << "\n\nRegistro del estudiante actualizado\n" << matriculaEstudiante << "\n" << nombreCompletoEstudiante;

        cout << "\n\nIntroduce el correo electronico del estudiante: ";
        cin >> correoEstudiante;
        cout << "\nIntroduce el numero celular del estudiante (10 digitos): ";
        cin >> telefonoEstudiante;
        system("cls");
        cout << "ALTA DE ESTUDIANTES\n\n";
        cout << "EXPEDIENTE COMPLETADO\n Los datos ingresados fueron los siguientes:\n\n" << matriculaEstudiante << "\n" << nombreCompletoEstudiante << "\n" << correoEstudiante << "\n" << telefonoEstudiante << "\n\n" ;

        break;
    case 2:
        system("cls");
        cout << "BAJA DE ESTUDIANTE\n";
        
        break;
    case 3:
        system("cls");
        cout << "MODIFICACION DE ESTUDIANTE\n";

        break;
    case 4:
        system("cls");
        cout << "BUSQUEDA DE ESTUDIANTES\n";

        break;
    case 5:
        cout << "Saliendo del programa...";

        break;

    default:
        cout << "ERROR: No has introducido una opcion del 1 al 5";
    }

    return 0;
}
