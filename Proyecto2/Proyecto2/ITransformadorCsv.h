#pragma once
#include<vector>
#include<string>
using namespace std;

template<class T>
class ITransformadorCsv
{
public:
	virtual vector<string>* toStringVector(T elemento) = 0;
	virtual T fromStringVector(vector<string>* vector) = 0;
	virtual ~ITransformadorCsv() = default;
};