#pragma once
#include"lib/json.hpp"
#include"Enfermedades.h"
#include"Paciente.h"
#include<vector>
using namespace std;
using nlohmann::json;


/*void to_json(json& j, const DireccionResidencia& d)
{
	j = json{ {"numeroCalle", d.numeroCalle}, {"numeroAvenida", d.numeroAvenida} };
}

void from_json(const json& j, DireccionResidencia& d)
{
	d.numeroAvenida = j.at("numeroCalle").get<int>();
	d.numeroCalle = j.at("numeroAvenida").get<int>();
}*/


// Equivalente a lo anterior. Se puede usar cuando no tenemos punteros a otros miembros
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Nombre, Secuencia);

void to_json(json& j, const Paciente& paciente)
{
	json direccionesJson = json::array();

	for (auto& direccion : *paciente.getEnfermedad())
	{
		json enfermedadesJson = *Enfermedades;
		enfermedadesJson.push_back(enfermedadesJson);
	}

	j = json{ {"ID", paciente.getNombre()}, {"Nombre", paciente.getNombre()}, {"direcciones", direccionesJson} };
}

void from_json(const json& j, Cliente& cliente)
{
	cliente.id = j.at("id").get<int>();
	cliente.nombre = j.at("nombre").get<string>();
	json arregloDireccionesJson = j.at("direcciones");

	vector<DireccionResidencia*>* direccionesResidencia = new vector<DireccionResidencia*>();
	for (auto& objetoDireccionJson : arregloDireccionesJson)
	{
		DireccionResidencia* direccion = new DireccionResidencia();
		*direccion = objetoDireccionJson;
		direccionesResidencia->push_back(direccion);
	}
	cliente.direcciones = direccionesResidencia;

}
