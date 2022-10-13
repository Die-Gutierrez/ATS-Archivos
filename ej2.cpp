/*Realice un programa que pida al usuario el nombre o ubicacion deun fichero de texto y,
a continuacion de lectura a todo el fichero*/
#include<iostream>
#include<fstream>

using namespace std;

void lectura();

int main()
{
    lectura();

    return 0;
}
void lectura()
{
    ifstream file;
    string name, text;

    cout<<"Digite el nombre del archivo: ";
    fflush(stdin); getline(cin, name);
    file.open(name.c_str(),ios::in); // Abriendo el archivo.
    if(file.fail())
    {
        cout<<"Ocurrio un problema !"<<endl;
        exit(1);
    }
    while (!file.eof())// Mientras NO sea el final del file.
    {
        getline(file, text); // Se esta copiando todo lo que hay en 'file' hacia la variable text.
        cout<<text; // Imprimiendo en consola todo lo que hay en text.
    }
}