#include<iostream>
#include <fstream>

using namespace std;

void add();

int main()
{
    add();

    return 0;
}
void add()
{
    string text;
    ofstream file;

    file.open("ejemplo.txt",ios::app); // Abrimos el archivo.
    if(file.fail())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }
    cout<<"Digite un texto: ";
    fflush(stdin); getline(cin, text);
    file<<text;
}