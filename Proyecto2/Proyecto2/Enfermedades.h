#pragma once
#include<iostream>
using namespace std;

class Enfermedad
{
private:
	string nombre;
	string secuencia;
public:
	Enfermedad();
    Enfermedad(string nombre, string secuencia);
    string getNombre() const;
    void setNombre(string nombre);
    string getSecuencia() const;
    void setSecuencia(string secuencia);
    string toString();
    ~Enfermedad();

};