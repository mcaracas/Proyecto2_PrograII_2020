#include"Paciente.h"

Paciente::Paciente()
{
    this->ID = "";
    this->nombre = "";
    this->correo = "";
    this->secuencia = "";

}

Paciente::Paciente(string ID, string nombre, string correo, string secuencia, Enfermedades* enfermedad)
{
    this->ID = ID;
    this->nombre = nombre;
    this->correo = correo;
    this->secuencia = secuencia;
    this->enfermedad = enfermedad;
}

string Paciente::getID() const
{
    return ID;
}

void Paciente::setID(string ID)
{
    this->ID = ID;
}

string Paciente::getNombre() const
{
    return nombre;
}

void Paciente::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Paciente::getCorreo() const
{
    return correo;
}

void Paciente::setCorreo(string correo)
{
    this->correo = correo;
}

string Paciente::getSecuencia() const
{
    return secuencia;
}

void Paciente::setSecuencia(string secuencia)
{
    this->secuencia = secuencia;
}

Enfermedades* Paciente::getEnfermedad() const
{
    return enfermedad;
}

void Paciente::setEnfermedad(Enfermedades* enfermedad)
{
    this->enfermedad = enfermedad;
}

Paciente::~Paciente()
{

}
