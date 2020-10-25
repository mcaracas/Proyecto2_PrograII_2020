#include"TransformadorCSVEnfermedades.h"

vector<string>* TransformadorCsvEnfermedades::toStringVector(Enfermedad* elemento)
{
	vector<string>* campos = new vector<string>();
	campos->push_back(elemento->getNombre());
	campos->push_back(elemento->getSecuencia());
	return campos;
}

Enfermedad* TransformadorCsvEnfermedades::fromStringVector(vector<string>* vector)
{
	return new Enfermedad(vector->at(0), vector->at(1));
}