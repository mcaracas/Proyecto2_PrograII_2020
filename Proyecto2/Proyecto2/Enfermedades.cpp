#include"Enfermedades.h"

Enfermedades::Enfermedades()
{
    this->nombre = "";
    this->secuencia = "";
}

string Enfermedades::getNombre() const
{
    return nombre;
}

void Enfermedades::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Enfermedades::getSecuencia() const
{
    return secuencia;
}

void Enfermedades::setSecuencia(string secuencia)
{
    this->secuencia = secuencia;
}

