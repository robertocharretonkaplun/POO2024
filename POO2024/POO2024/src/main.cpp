#include "Prerequisites.h"
#include "Persona.h"
#include "Coche.h"
#include "Circulo.h"
#include "Estudiante.h"
#include "CuentaBancaria.h"

// PILARES DEL USO DE PUNTEROS.
// 1. GESTION DINAMICA DE LA MEMORIA
// 2. ARGUMENTOS EN METODOS
// 3. TRABAJAR CON ESTRUCTURAS DE DATOS COMPLEJOS 
// 4. EFICIENCIA Y MANIPULACION DIRECTA DE MEMORIA 
// 5. ARREGLOS DINAMICOS
	vector<Persona> personas;

int 
multiplicacion(int a, int b) {
	return a * b;
}

int 
main() {
	Persona* persona = new Persona("Roberto", 26);
	persona->print();

	Persona* persona2 = new Persona(&persona[0]);
	persona2->print();
	
	Persona persona4 = new Persona("Jose", 27);
	persona4.print();
	
	
	Persona persona3 = new Persona(&persona4);
	persona3.print();

	personas.push_back(persona3);
	personas.push_back(persona4);


	for (Persona person : personas) {
		person.print();
	}

	//persona = nullptr;

	bool hr = true;
	hr = persona3.CreateResource(persona);
	if (hr == false) {
		return 0;
	}

	delete persona;
	delete persona2;
	//delete persona3;

	CuentaBancaria cuenta1("Roberto Charreton", 2500);
	cuenta1.operaciones();



	Coche ford("Ford", "Focus", 2022);
	ford.obtenerInformacion();
	cout << ford.getMarca() << endl;

	Circulo miCirculo(5);
	cout << "AREA: " << miCirculo.area() << endl;
	cout << "PERIMETRO: " << miCirculo.perimetro() << endl;

	Estudiante estudiantes[5];
	
	estudiantes[0].setEstudiante("Edudardo", 23);
	estudiantes[1].setEstudiante("Kevin", 20);
	estudiantes[2].setEstudiante("Jose", 21);
	estudiantes[3].setEstudiante("Misael", 22);
	estudiantes[4].setEstudiante("Miguel", 19);
	

	for (int i = 0; i < 5; i++)
	{
		estudiantes[i].informacion();
	}

	POO2024::Vector3 position;
	POO2024::Vector4 Scale(1,1,1,1);
	
	Persona Roberto("Roberto", 25);
	cout << "Nombre: " << Roberto.getNombre() << ", Edad: " << Roberto.getEdad() << endl;


	int x, y;

	cout << "Ingresa el primer valor: ";
	cin >> x;
	cout << "Ingresa el segundo valor: ";
	cin >> y;
	int result = multiplicacion(x, y);

	cout << "El resultado es: " << result << endl;

	return 0;
}