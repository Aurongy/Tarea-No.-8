#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string Titulo = "Cien anios de la sociedad";
    string Autor = "Gabriel Garcia Marquez";
    string Editoriales = "Sudamericanos, Harper y Rowy";
    int Anio = 1967;
    string ISBN = "978978-0-06-088328-7";
    string Numeros_de_paginas = "432 paginas";
    
    ofstream Escritura("Biblioteca.txt");
    Escritura <<"Titulo: " << Titulo << "\n" << "Autor: " <<  Autor << "\n" << "Editorial: " << Editoriales << "\n";
    Escritura << "Anio de Ediccion: " << Anio << "\n" << "ISBN: " << ISBN <<"\n" << "Numero de paginas: " << Numeros_de_paginas << "\n";

    return 0;

}