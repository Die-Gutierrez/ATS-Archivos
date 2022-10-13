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
    cout<<"Cuantas cadenas de texto desea ingresar?: ";
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<"Digite: ";
        fflush(stdin); getline(cin, texto);
        archivo<<texto<<"\n\n";
    }
    archivo.close();
}