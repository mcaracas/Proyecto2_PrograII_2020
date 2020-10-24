#include"TransformadorCSVEnfermedades.h"

vector<string>* TransformadorCsvEnfermedades::toStringVector(Enfermedades* elemento)
{
	vector<string>* campos = new vector<string>();
	campos->push_back(elemento->getNombre());
	campos->push_back(elemento->getSecuencia());
	return campos;
}

Enfermedades* TransformadorCsvEnfermedades::fromStringVector(vector<string>* vector)
{
	return new Enfermedades(vector->at(0), vector->at(1));
}