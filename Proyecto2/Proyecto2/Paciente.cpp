#include"Paciente.h"

Paciente::Paciente()
{
    this->ID = "";
    this->nombre = "";
    this->correo = "";
    this->secuencia = "";

}

Paciente::Paciente(string ID, string nombre, string correo, string secuencia)
{
    this->ID = ID;
    this->nombre = nombre;
    this->correo = correo;
    this->secuencia = secuencia;
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
/*
Enfermedades* Paciente::getEnfermedad() const
{
    return enfermedad;
}

void Paciente::setEnfermedad(Enfermedades* enfermedad)
{
    this->enfermedad = enfermedad;
}

*/




string Paciente::toString()
{
    stringstream s;
    s << "ID:  " << this->ID << endl;
    s << "Nombre: " << this->nombre << endl;
    s << "Correo: " << this->correo << endl;
    s << "Secuencia" << this->secuencia << endl;
    //hay que imprimir lista de enfermedades tambien
}

Paciente::~Paciente()
{

}
