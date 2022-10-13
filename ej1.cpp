/*Realice un programa que pida al usuario el nombre de un fichero de texto y, a continuacion permita
almacenar al usuario tantas frases como el usuario desee.*/
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
    string texto, nombre;
    char op;
    ofstream archivo;
    int x=0;

    cout<<"Ingrese el nombre del archivo: ";
    fflush(stdin); getline(cin, nombre);
    archivo.open(nombre.c_str(), ios::out);
    if(archivo.fail())
    {
        cout<<"Programa fallando . . ."<<endl;
        exit(0);
    }
    do
    {
        cout<<"Ingrese un texto: ";
        fflush(stdin); getline(cin, texto);
        archivo<<texto<<endl;
        cout<<"¿Desea ingresar mas texto?(S/N): ";
        fflush(stdin); cin>>op;
    } while ((op == 'S')||(op == 's'));
    
    archivo.close();
}