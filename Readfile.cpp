#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

void escribir();

int main()
{
    escribir();

    return 0;
}
void escribir()
{
    string words;
    ifstream archivo;

    archivo.open("ejemplo.txt",ios::in);
    if(archivo.fail())
    {
        cout<<"Ha habido un error!"<<endl;
        exit(0);
    }
    while(!archivo.eof()) // Mientras no sea el final del archivo.
    {
        getline(archivo, words);
        cout<<words;
    }
    archivo.close();
}