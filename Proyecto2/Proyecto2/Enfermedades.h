#pragma once
#include<iostream>
using namespace std;

class Enfermedades
{
private:
	string nombre;
	string secuencia;
public:
	Enfermedades();
    Enfermedades(string nombre, string secuencia);
    string getNombre() const;
    void setNombre(string nombre);
    string getSecuencia() const;
    void setSecuencia(string secuencia);
    string toString();
    ~Enfermedades();

};