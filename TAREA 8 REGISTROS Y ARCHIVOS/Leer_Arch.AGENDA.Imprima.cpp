#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void lectura();

int main(){
    lectura();

    system("pause");
    return 0;
}
void lectura(){
    ifstream archivo;
    string texto;

    archivo.open("Agenda.txt",ios::in);

    if(archivo.fail()) {
        cout << "Este archivo no existe";
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto;
    }

    archivo.close();
}

