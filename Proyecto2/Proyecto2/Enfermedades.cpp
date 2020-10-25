#include"Enfermedades.h"

Enfermedad::Enfermedad()
{
    this->nombre = "";
    this->secuencia = "";
}

Enfermedad::Enfermedad(string nombre, string secuencia)
{
    this->nombre = nombre;
    this->secuencia = secuencia;
}

string Enfermedad::getNombre() const
{
    return nombre;
}

void Enfermedad::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Enfermedad::getSecuencia() const
{
    return secuencia;
}

void Enfermedad::setSecuencia(string secuencia)
{
    this->secuencia = secuencia;
}

Enfermedad::~Enfermedad()
{

}
