#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string Nombre = "Angel Aurelio Tzi Cucul";
    string Direccion = "4ra. Avenida 8-15, Zona 2, Boca del Monte";
    string Ciudad = "Guatemala";
    float Codigo_Postal = 12.450;
    string Telefono = "+502 3056 8564";
    string Edad = "22 anios";
    
    ofstream Escritura("Agenda.txt");
    Escritura <<"Nombre: " << Nombre << "\n" << "Direccion: " <<  Direccion << "\n" << "Ciudad: " << Ciudad << "\n";
    Escritura << "Codigo Postal: " << Codigo_Postal << "\n" << "Telefono: " << Telefono <<"\n" << "Edad: " << Edad << "\n";

    return 0;

}