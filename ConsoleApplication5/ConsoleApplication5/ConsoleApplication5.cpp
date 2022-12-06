// 2022_11_9_013_recursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio Ochoa Lopez
// en este pograma

#include <iostream>

void invertir(int num)
{
    {
        std::cout << num % 10;
    }
}

int main()
{
    int numerito;
    do
    {
        std::cout << " ingresa un numero de 4 cifras: ";
        std::cin >> numerito;
        if (numerito < 0);
        {
            std::cout << "\ningresa un numero entero y positivo de 4 cifras... " << std::endl;
        }
    } while (numerito < 0);
    invertir(numerito);
    std::cout << std::endl << std::endl;
