// 22_12_05_potencia_pratica_010.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio Ochoa Lopez

#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	int numero;
	int numero_2;
	int Potencia;
	int resultado;
	int i;

	std::cout << "escribe el numero que quieres elevar\n";
	std::cin >> numero;
	std::cout << std::endl;
	std::cout << "escribe la potencia que quieres\n";
	std::cin >> numero_2;
	std::cout << std::endl;

	for (i = 0; i < numero_2; i++)
	{
		Potencia = Potencia * numero;
	}

	std::cout << "el resultado es:\n" << Potencia << std::endl;
}