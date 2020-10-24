#include"TransformadorCSVPaciente.h"

vector<string>* TransformadorCsvPaciente::toStringVector(Paciente* elemento) 
{
	vector<string>* campos = new vector<string>();
	campos->push_back(elemento->getID());
	campos->push_back(elemento->getNombre());
	campos->push_back(elemento->getCorreo());
	campos->push_back(elemento->getSecuencia());
	return campos;
}

Paciente* TransformadorCsvPaciente::fromStringVector(vector<string>* vector) 
{
	return new Paciente(vector->at(0), vector->at(1), vector->at(2), vector->at(3));
}