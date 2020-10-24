#pragma once
#include<vector>
#include<string>
#include"ITransformadorCsv.h"
#include"Enfermedades.h"


class TransformadorCsvEnfermedades : public ITransformadorCsv<Enfermedades*>
{
public:
	vector<string>* toStringVector(Enfermedades* elemento) override;

	Enfermedades* fromStringVector(vector<string>* vector) override;
};