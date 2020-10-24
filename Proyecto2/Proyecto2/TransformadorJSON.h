#pragma once
#include"lib/json.hpp"
#include"Paciente.h"
#include"Enfermedades.h"
#include<vector>
using namespace std;
using nlohmann::json;


/*
Hay que investigar serializar y deserializar objetos de tipo enfermedad en JSON


*/

void to_json(json& j, const Enfermedades& d)
{
	j = json{ {"Nombre", d.getNombre()}, {"Secuencia", d.getSecuencia()} };
}

void from_json(const json& j, Enfermedades& d)
{
	d.setNombre(j.at("Nombre").get<string>());
	d.setSecuencia(j.at("Secuencia").get<string>());
}

void to_json(json& j, const Paciente& paciente)
{ 
	json enfermedadesJson = json::array();

	for (auto& enfer : *paciente.getEnfermedad())
	{
		json enfermedadJson = *Enfermedades;
		enfermedadesJson.push_back(enfermedadJson);
	}

	j = json{ {"ID", paciente.getID()}, {"Nombre", paciente.getNombre()},{"Correo", paciente.getCorreo()},{"Secuencia", paciente.getSecuencia()} ,{"enfermedades", enfermedadesJson} };
}

void from_json(const json& j, Paciente& paciente)
{
	paciente.setID(j.at("ID").get<string>());
	paciente.setNombre(j.at("Nombre").get<string>());
	paciente.setCorreo(j.at("Correo").get<string>());
	paciente.setSecuencia(j.at("Secuencia").get<string>());

	json arregloEnfermedadesJson = j.at("enfermedades");

	vector<Enfermedades*>* enfermedades = new vector<Enfermedades*>();
	for (auto& objetoEnfermedadesJson : arregloEnfermedadesJson)
	{
		Enfermedades* enfermedad = new Enfermedades();
		*enfermedad = objetoEnfermedadesJson;
		enfermedades->push_back(enfermedad);
	}
	paciente.getEnfermedad() = enfermedades; //???

}
