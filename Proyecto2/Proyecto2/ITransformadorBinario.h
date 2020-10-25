#pragma once
#include<iostream>
#include<sstream>
#include<string>
template<class T>
class ITransformadorBinario
{
public:
	virtual void serializar(T elemento, ostream& out) = 0;
	virtual T deserializar(istream& in) = 0;
	virtual ~ITransformadorBinario() = default;
};