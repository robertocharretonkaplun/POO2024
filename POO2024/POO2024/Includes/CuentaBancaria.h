#pragma once
#include "Prerequisites.h"

class CuentaBancaria
{
public:
	CuentaBancaria() = default;
	CuentaBancaria(string _propietario, float _nuevoSaldo) 
	: m_propietario(_propietario), m_numeroDeCuenta(123456789), m_saldo(_nuevoSaldo) {}
	~CuentaBancaria() = default;

	void operaciones() {
		int operacion = 9;
		while (operacion != 0)
		{
			cout << "Bienvenido/a, " << m_propietario << " a tu banco de confianza." << endl;
			cout << "Que deseas realizar en esta ocasion" << endl;
			cout << "1. Consultar saldo." << endl;
			cout << "2. Retirar saldo." << endl;
			cout << "3. Ingresar saldo." << endl;
			cout << "4. Calcular interes." << endl;
			cout << "Ingresa la operacion que quieras realizar: "; 
			cin >> operacion;
			switch (operacion)
			{
			case 0:
				cout << "\n Gracias por confiar en nosotros, excelente dia!" << endl;
				exit(1);
				break;
			case 1:
				consultarSaldo();
				break;
			case 2:
				float saldoRetiro;
				cout << "\n Ingresa la cantidad a retirar: ";
				cin >> saldoRetiro;
				retirarSaldo(saldoRetiro);
				break;
			case 3:
				float saldoIngreso;
				cout << "\n Ingresa la cantidad a guardar: ";
				cin >> saldoIngreso;
				ingresarSaldo(saldoIngreso);
				break;
			case 4:
				float monto;
				float tasa;
				int tiempo;
				cout << "\n Ingresa el monto: ";
				cin >> monto;
				cout << "\n Ingresa la tasa: ";
				cin >> tasa;
				cout << "\n Ingresa el tiempo: ";
				cin >> tiempo;

				cout << "\n El  interes es: " << interesSimple(monto, tasa, tiempo) << "% " << endl;
				break;
			default:
				cout << "xd" << endl;
				break;
			}
		}
	}

	void consultarSaldo() {
		cout << "Su saldo actual es de: $" << m_saldo << endl;
	}

protected:
	void ingresarSaldo(float _nuevoSaldo) {
		m_saldo += _nuevoSaldo;
		consultarSaldo();
	}

	float retirarSaldo(float _cantidad) {
		m_saldo -= _cantidad;

		consultarSaldo();
		return _cantidad;
	}

private:
	/*
	*  Brief: Esta funcion esta encargada de calcular el interes a partir de la
	* tasa de cambio y el tiempo en el que se efectura.
	* Ejemplo: interes = _monto x _tasa x _tiempo;
	*/
	float interesSimple(float _monto, float _tasa, int _tiempo) {
		// 1) Calculamos el interes por medio de la operacion mencionada en la descripcion
		float interes = _monto * _tasa * _tiempo;
		// 2) Regresamos el resultado para ser usado en otra seccion del codigo
		return interes;
	}

public: 
	string m_propietario;
protected:
	int m_numeroDeCuenta;
private:
	float m_saldo;
};

class CuentaDeAhorro : CuentaBancaria
{
public:
	CuentaDeAhorro() = default;
	~CuentaDeAhorro() = default;

private:

};
