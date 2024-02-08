#pragma once
#include "Prerequisites.h"

class 
Persona {
public:

	Persona() = default;

	//Persona(string _nombre, int _edad) : : m_nombre(_nombre), m_edad(_edad)  {}
	Persona(string _nombre, int _edad) {
		m_nombre = _nombre;
		m_edad = _edad;
	}

	Persona(Persona * _persona) {
		m_nombre = _persona->m_nombre;
		m_edad = _persona->m_edad;
	}
	
	Persona(const Persona & _persona) {
		m_nombre = _persona.m_nombre;
		m_edad = _persona.m_edad;
	}

	~Persona() {};

	void print() {
		cout << "Nombre: " << m_nombre << " Edad: " << m_edad << endl;
	}

	// Metodo encargado de obtener el nombre
	string getNombre() {
		return m_nombre;
	}

	// Metodo encargado de obtener la edad
	int getEdad() {
		return m_edad;
	}

	bool CreateResource(Persona* _persona) {
		bool result = true;

		if (_persona == nullptr) {
			WARNING("Tienes un error de ejecucion, valida tu funcion CreateResource \n");
			//cout << "Tienes un error de ejecucion, valida tu funcion CreateResource" << endl;
			//exit(1);
			result = false;
		}
		else {
			m_nombre = _persona->m_nombre;
			m_edad = _persona->m_edad;
		}

		return result;
	}

private:
	string m_nombre;
	int m_edad;
};



