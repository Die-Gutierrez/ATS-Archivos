#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

void escribir();

int main()
{
    escribir();
    system("pause");

    return 0;
}
void escribir()
{
    string nombre, texto;
    ofstream archivo; // Declaramos una variable.

    cout<<"Ingrese el nombre del archivo: ";
    fflush(stdin); getline(cin, nombre);
    archivo.open(nombre.c_str(),ios::out); // Abrimos el archivo.
    if(archivo.fail()) // Si el programa no funciona bien retorna 'true', y nos arroja un mensaje
    {
        cout<<"Programa no funcionando."<<endl;
        exit(0);
    }
    cout<<"Ingrese un texto: ";
    fflush(stdin); getline(cin, texto);
    archivo<<texto<<endl; /*Comenzamos a escribir dentro de nuestro
    archivo texto.txt*/
    archivo.close(); // Cerramos el archivo.
}