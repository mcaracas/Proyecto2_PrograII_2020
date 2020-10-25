#pragma once
#include<iostream>
#include<sstream>
#include<vector>
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
    vector<Enfermedad*>* enfermedad;

public:
    Paciente();

    Paciente(string ID, string nombre, string correo, string secuencia); //el vector de enfermedades se usa por parametros?

    string getID() const;
    void setID(string ID);

    string getNombre() const;
    void setNombre(string nombre);

    string getCorreo() const;
    void setCorreo(string correo);

    string getSecuencia() const;
    void setSecuencia(string secuencia);

    Enfermedad* getEnfermedad() const;
    void setEnfermedad(Enfermedad* enfermedad);

    string toString();

    ~Paciente();

};

