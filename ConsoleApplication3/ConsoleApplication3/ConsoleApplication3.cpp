// 22_12_matricez_
// Jose Antonio Ochoa Lopez

#include <iostream>
#include <string>
int main()
{
    int m, fila, columna;
    float matriz[3][3];
    float matriz[5][5];
    float matriz[10][10];

    // Pedimos los datos de las dos matrices
    for (m = 0; m < 2; m++)
        for (fila = 0; fila < 3; fila++)
            for (columna = 0; columna < 3; columna++)
            {
                std::cout << "En la matriz " << m + 1 << ", dime el dato de la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
                std::cin >> matriz[m][fila][columna];
            }

    // Calculamos la suma
    for (fila = 0; fila < 3; fila++)
        for (columna = 0; columna < 3; columna++)
            matriz[3][columna] = matriz[3][fila][columna]
            + matriz[3][fila][columna];

    // Y mostramos el resultado (puede salir un poco descolocado)
    std::cout << "La matriz suma es " << std::endl;
    for (fila = 0; fila < 3; fila++)
    {
        for (columna = 0; columna < 3; columna++)
            std::cout << matriz[fila][columna] << " ";
        std::cout << std::endl;
    }

    // Pedimos los datos de las dos matrices
    for (m = 0; m < 2; m++)
        for (fila = 0; fila < 3; fila++)
            for (columna = 0; columna < 3; columna++)
            {
                std::cout << "En la matriz " << m + 1 << ", dime el dato de la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
                std::cin >> matriz[m][fila][columna];
            }

    // Calculamos la suma
    for (fila = 0; fila < 3; fila++)
        for (columna = 0; columna < 3; columna++)
            matriz[5][columna] = matriz[5][fila][columna]
            + matriz[3][fila][columna];

    // Y mostramos el resultado (puede salir un poco descolocado)
    std::cout << "La matriz suma es " << std::endl;
    for (fila = 0; fila < 3; fila++)
    {
        for (columna = 0; columna < 3; columna++)
            std::cout << matriz[fila][columna] << " ";
        std::cout << std::endl;

    }

    // Pedimos los datos de las dos matrices
    for (m = 0; m < 2; m++)
        for (fila = 0; fila < 3; fila++)
            for (columna = 0; columna < 3; columna++)
            {
                std::cout << "En la matriz " << m + 1 << ", dime el dato de la fila " << fila + 1 << " y la columna " << columna + 1 << ": ";
                std::cin >> matriz[m][fila][columna];
            }

    // Calculamos la suma
    for (fila = 0; fila < 3; fila++)
        for (columna = 0; columna < 3; columna++)
            matriz[10][columna] = matriz[10][fila][columna]
            + matriz[3][fila][columna];

    // Y mostramos el resultado (puede salir un poco descolocado)
    std::cout << "La matriz suma es " << std::endl;
    for (fila = 0; fila < 3; fila++)
    {
        for (columna = 0; columna < 3; columna++)
            std::cout << matriz[fila][columna] << " ";
        std::cout << std::endl;

    }

    return 0;
}