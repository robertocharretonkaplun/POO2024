#pragma once
#include "Prerequisites.h"

class Estudiante
{
public:
	Estudiante() = default;

	Estudiante(string _nombre, int _edad) : m_nombre(_nombre), m_edad(_edad) {}
	
	~Estudiante() = default;

	void informacion() {
		cout << "Estudiante: " << m_nombre << " edad: " << m_edad << endl;
	}

	void setEstudiante(string _nombre, int _edad) {
		m_nombre = _nombre;
		m_edad = _edad;
	}

private:
	string m_nombre;
	int m_edad;
};