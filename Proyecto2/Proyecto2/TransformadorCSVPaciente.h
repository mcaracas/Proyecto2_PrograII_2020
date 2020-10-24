#pragma once
#include<vector>
#include<string>
#include"ITransformadorCsv.h"
#include"Paciente.h"


class TransformadorCsvPaciente : public ITransformadorCsv<Paciente*>
{
public:
	vector<string>* toStringVector(Paciente* elemento) override;

	Paciente* fromStringVector(vector<string>* vector) override;
};