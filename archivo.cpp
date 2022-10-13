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
    ofstream archivo; // Declaramos una variable.
    archivo.open("prueba.txt",ios::out); // Abrimos el archivo.
    if(archivo.fail()) // Si el programa no funciona bien retorna 'true', y nos arroja un mensaje
    {
        cout<<"Programa no funcionando."<<endl;
        exit(0);
    }
    archivo<<"Hello my name is Diego and have twenty-one."<<endl; /*Comenzamos a escribir dentro de nuestro
    archivo texto.txt*/
    archivo.close(); // Cerramos el archivo.
}