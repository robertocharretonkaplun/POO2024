#pragma once
#include "Prerequisites.h"

class Coche
{
public:
	Coche() = default;
	Coche(string _marca, string _modelo, int _year) 
	: m_marca(_marca), m_modelo(_modelo), m_year(_year) {}
	~Coche() {}

	virtual void obtenerInformacion() {
		cout << "Marca: " << m_marca << " Modelo: " 
			<< m_modelo << " Year: " << m_year << endl;
	}

	void setMarca(string _marca) {
		m_marca = _marca;
	}
	
	void setModelo(string _modelo) {
		m_modelo = _modelo;
	}
	
	void setYear(int _year) {
		m_year = _year;
	}

	string getMarca() {
		return m_marca;
	}
	
	string getModelo() {
		return m_modelo;
	}

	int getYear() {
		return m_year;
	}

private:
	string m_marca;
	string m_modelo;
	int m_year;
};


class automovil : public Coche {

	automovil() {
	}

	void obtenerInformacion() override {
		Coche::obtenerInformacion();

	}


};