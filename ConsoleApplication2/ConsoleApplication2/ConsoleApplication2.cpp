/// 2022_11_21_proyecto_final_psicologia.cpp : Este archivo contiene la función "main".La ejecución del programa comienza y termina ahí.
// Jose Antonio Ochoa Lopez
// novela narrativa

#include <iostream>
#include <string>

int main()
{
    std::string personaje;
    bool x;

    std::cout << "siendo presidente por un dia\n";

    std::cout << "cual es tu nombre?\n";
    std::getline(std::cin, personaje);
    std::cout << "tu nombre es -->" << personaje << std::endl;
    std::cout << "imagina que eres un presidente de un pais\n";

    if (true)
    {
        std::cout << "estas listo para el juego";
        std::cout << "1 es si y 0 es no\n";
        std::cin >> x;

        if (true);
        {
            std::cout << "quieres ofrecer dinero a los pobres\n";
            std::cin >> x;

            if (true);
            {
                std::cout << "quieres darles 80 dolares por año o 20 dolares por año\n";
                std::cout << "1 es 80 y 0 es 20\n";
                std::cin >> x;

                if (true);
                {
                    std::cout << "quieres repartilo por meses o por dias\n";
                    std::cin >> x;

                    {
                        std::cout << "la poblacion no te religera como presidente porque eres un mal presidente\n" << std::endl;
                    }
                    if (false)
                    {
                        std::cout << "decidiste pagales por dias\n";
                        std::cout << "estas calificado como un mal presidente\n";
                    }
                }

                if (false);
                {
                    std::cout << "quieres cumplirr tu promesa o no cumplir la promesa\n";
                    std::cin >> x;

                    if (true);
                    {
                        std::cout << "quedas como de los peores presidentes\n" << std::endl;
                    }
                }
            }
            if (false);
            {
                std::cout << "darles trabajo a los pobres\n";
                std::cin >> x;

                if (true);
                {
                    std::cout << "pagarles 1000 dolares por mes o 1600 dolares por mes\n";
                    std::cout << "1 es 100 dolares por mes y 2 es 1600 dolares por mes\n";
                    std::cin >> x;

                    if (true);
                    {
                        std::cout << "dividir el pago por semana (250 por semana) O pagar por mes\n";
                        std::cin >> x;

                        {
                            std::cout << "felicidades eres un buen presidente es probable que te escogan\n" << std::endl;
                        }

                        if (false)
                        {
                            std::cout << "les vas a pagar 1600 dolares por mes\n";
                            std::cout << "has hecho un muy buen trabajo es posible que la gente vote por ti\n";
                        }
                    }
                }

                if (false);
                {
                    std::cout << "dar dolares extras por su ezfuerzo o dar descuento en los impuestos\n";
                    std::cin >> x;

                    if (true);
                    {
                        std::cout << "te religen por ser el mejor presidente\n" << std::endl;
                    }
                }
            }

            if (false);
            {
                std::cout << "decidiste esclavisar a la poblacion\n";
                std::cout << "la onu te busca porque no respetas los derechos humanos\n";
            }
        }
        if (false)
            std::cout << "oke, decidiste no jugar\n";
    }
}


