#pragma once
#include<iostream>
#include<sstream>
#include<string>
#include"Enfermedades.h"
using namespace std;


class Paciente
{
private:
    string ID;
    string nombre;
    string correo;
    string secuencia;
    Enfermedades* enfermedad;

public:
    Paciente();

    Paciente(string ID, string nombre, string correo, string secuencia, Enfermedades* enfermedad);

    string getID() const;
    void setID(string ID);

    string getNombre() const;
    void setNombre(string nombre);

    string getCorreo() const;
    void setCorreo(string correo);

    string getSecuencia() const;
    void setSecuencia(string secuencia);

    Enfermedades* getEnfermedad() const;
    void setEnfermedad(Enfermedades* enfermedad);

    string toString();

    ~Paciente();

};

