// 22_12_06_pratica_013_Batle_raoyal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio
//Batle Royal con if y estructura

#include <iostream>
#include <string>
#include <time.h>

struct alumno {
    int ataque;
    int defensa;
    int vida;
    long velocidad;
} jugador;

int main()
{
    srand(time(NULL));
    std::string w1;
    std::string w2;
    std::string w3;
    std::string w4;
    std::string w5;
    std::string w6;
    std::string w7;
    std::string w8;
    std::string w9;
    std::string w10;
    std::string w11;
    std::string w12;
    std::string w13;
    std::string w14;
    std::string w15;
    std::string w16;
    std::string w17;
    std::string w18;
    std::string w19;
    std::string w20;

    alumno Betsa;
    Betsa.ataque = rand() % 50;
    Betsa.vida = rand() % 50;
    Betsa.defensa = rand() % 50;
    Betsa.velocidad = rand() % 50;

    alumno  Daniel_Callejas;
    Daniel_Callejas.ataque = rand() % 50;
    Daniel_Callejas.vida = rand() % 50;
    Daniel_Callejas.defensa = rand() % 50;
    Daniel_Callejas.velocidad = rand() % 50;

    alumno pepe_Banuelos;
    pepe_Banuelos.ataque = rand() % 50;
    pepe_Banuelos.vida = rand() % 50;
    pepe_Banuelos.defensa = rand() % 50;
    pepe_Banuelos.velocidad = rand() % 50;

    alumno JuanFer;
    JuanFer.ataque = rand() % 50;
    JuanFer.vida = rand() % 50;
    JuanFer.defensa = rand() % 50;
    JuanFer.velocidad = rand() % 50;

    alumno Patino;
    Patino.ataque = rand() % 50;
    Patino.vida = rand() % 50;
    Patino.defensa = rand() % 50;
    Patino.velocidad = rand() % 50;

    alumno Iker;
    Iker.ataque = rand() % 50;
    Iker.vida = rand() % 50;
    Iker.defensa = rand() % 50;
    Iker.velocidad = rand() % 50;

    alumno Yess;
    Yess.ataque = rand() % 50;
    Yess.vida = rand() % 50;
    Yess.defensa = rand() % 50;
    Yess.velocidad = rand() % 50;

    alumno Ulises;
    Ulises.ataque = rand() % 50;
    Ulises.vida = rand() % 50;
    Ulises.defensa = rand() % 50;
    Ulises.velocidad = rand() % 50;

    alumno Emma;
    Emma.ataque = rand() % 50;
    Emma.vida = rand() % 50;
    Emma.defensa = rand() % 50;
    Emma.velocidad = rand() % 50;

    alumno Cat;
    Cat.ataque = rand() % 50;
    Cat.vida = rand() % 50;
    Cat.defensa = rand() % 50;
    Cat.velocidad = rand() % 50;

    alumno Rafa;
    Rafa.ataque = rand() % 50;
    Rafa.vida = rand() % 50;
    Rafa.defensa = rand() % 50;
    Rafa.velocidad = rand() % 50;

    alumno Pepe_Ochoa;
    Pepe_Ochoa.ataque = rand() % 50;
    Pepe_Ochoa.vida = rand() % 50;
    Pepe_Ochoa.defensa = rand() % 50;
    Pepe_Ochoa.velocidad = rand() % 50;

    alumno Daniel_Pompa;
    Daniel_Pompa.ataque = rand() % 50;
    Daniel_Pompa.vida = rand() % 50;
    Daniel_Pompa.defensa = rand() % 50;
    Daniel_Pompa.velocidad = rand() % 50;

    alumno Alan;
    Alan.ataque = rand() % 50;
    Alan.vida = rand() % 50;
    Alan.defensa = rand() % 50;
    Alan.velocidad = rand() % 50;

    alumno Kike;
    Kike.ataque = rand() % 50;
    Kike.vida = rand() % 50;
    Kike.defensa = rand() % 50;
    Kike.velocidad = rand() % 50;

    alumno Daniel_Perez;
    Daniel_Perez.ataque = rand() % 50;
    Daniel_Perez.vida = rand() % 50;
    Daniel_Perez.defensa = rand() % 50;
    Daniel_Perez.velocidad = rand() % 50;

    alumno Daniel_Medina;
    Daniel_Medina.ataque = rand() % 50;
    Daniel_Medina.vida = rand() % 50;
    Daniel_Medina.defensa = rand() % 50;
    Daniel_Medina.velocidad = rand() % 50;

    alumno Angel;
    Angel.ataque = rand() % 50;
    Angel.vida = rand() % 50;
    Angel.defensa = rand() % 50;
    Angel.velocidad = rand() % 50;

    alumno Julio;
    Julio.ataque = rand() % 50;
    Julio.vida = rand() % 50;
    Julio.defensa = rand() % 50;
    Julio.velocidad = rand() % 50;

    alumno Paul;
    Paul.ataque = rand() % 50;
    Paul.vida = rand() % 50;
    Paul.defensa = rand() % 50;
    Paul.velocidad = rand() % 50;

    if (Betsa.ataque > Daniel_Callejas.ataque && Betsa.ataque > pepe_Banuelos.ataque && Betsa.ataque > JuanFer.ataque
        && Betsa.ataque > Patino.ataque && Betsa.ataque > Iker.ataque && Betsa.ataque > Yess.ataque
        && Betsa.ataque > Ulises.ataque && Betsa.ataque > Emma.ataque && Betsa.ataque > Cat.ataque && Betsa.ataque > Rafa.ataque
        && Betsa.ataque > Pepe_Ochoa.ataque && Betsa.ataque > Daniel_Pompa.ataque && Betsa.ataque > Alan.ataque && Betsa.ataque > Kike.ataque
        && Betsa.ataque > Daniel_Perez.ataque && Betsa.ataque > Daniel_Medina.ataque && Betsa.ataque > Angel.ataque && Betsa.ataque > Julio.ataque
        && Betsa.ataque > Paul.ataque)

        std::cout << "Betsa tiene mayor ataque que todos\n";
    std::cout << Betsa.ataque << std::endl;

    if (Daniel_Callejas.ataque > pepe_Banuelos.ataque && Daniel_Callejas.ataque > JuanFer.ataque && Daniel_Callejas.ataque > Patino.ataque && Daniel_Callejas.ataque > Iker.ataque && Daniel_Callejas.ataque > Yess.ataque
        && Daniel_Callejas.ataque > Ulises.ataque && Daniel_Callejas.ataque > Emma.ataque && Daniel_Callejas.ataque > Cat.ataque && Daniel_Callejas.ataque > Rafa.ataque && Daniel_Callejas.ataque > Pepe_Ochoa.ataque && Daniel_Callejas.ataque > Daniel_Pompa.ataque
        && Daniel_Callejas.ataque > Alan.ataque && Daniel_Callejas.ataque > Kike.ataque && Daniel_Callejas.ataque > Daniel_Perez.ataque && Daniel_Callejas.ataque > Daniel_Medina.ataque && Daniel_Callejas.ataque > Angel.ataque && Daniel_Callejas.ataque > Julio.ataque && Daniel_Callejas.ataque > Paul.ataque)

        std::cout << "Daniel Callejas tiene mayor ataque que todos\n";
    std::cout << Daniel_Callejas.ataque << std::endl;

    if (pepe_Banuelos.ataque > JuanFer.ataque && pepe_Banuelos.ataque > Patino.ataque && pepe_Banuelos.ataque > Iker.ataque && pepe_Banuelos.ataque > Yess.ataque
        && pepe_Banuelos.ataque > Ulises.ataque & pepe_Banuelos.ataque > Emma.ataque && pepe_Banuelos.ataque > Cat.ataque && pepe_Banuelos.ataque > Rafa.ataque && pepe_Banuelos.ataque > Pepe_Ochoa.ataque
        && pepe_Banuelos.ataque > Daniel_Pompa.ataque && pepe_Banuelos.ataque > Alan.ataque && pepe_Banuelos.ataque > Kike.ataque && pepe_Banuelos.ataque > Daniel_Perez.ataque && pepe_Banuelos.ataque > Daniel_Medina.ataque
        && pepe_Banuelos.ataque > Angel.ataque && pepe_Banuelos.ataque > Julio.ataque && pepe_Banuelos.ataque > Paul.ataque)

        std::cout << "Pepe Banuelos tiene mayor ataque que todos\n";
    std::cout << Daniel_Callejas.ataque << std::endl;

    if (JuanFer.ataque > Patino.ataque && JuanFer.ataque > Iker.ataque && JuanFer.ataque > Yess.ataque && JuanFer.ataque > Ulises.ataque
        && JuanFer.ataque > Emma.ataque && JuanFer.ataque > Cat.ataque && JuanFer.ataque > Rafa.ataque && JuanFer.ataque > Pepe_Ochoa.ataque
        && JuanFer.ataque > Daniel_Pompa.ataque && JuanFer.ataque > Alan.ataque && JuanFer.ataque > Kike.ataque && JuanFer.ataque > Daniel_Perez.ataque
        && JuanFer.ataque > Daniel_Medina.ataque && JuanFer.ataque > Angel.ataque && JuanFer.ataque > Julio.ataque && JuanFer.ataque > Paul.ataque)

        std::cout << "JuanFer tine mayor ataque que todos\n";
    std::cout << JuanFer.ataque << std::endl;

    if (Patino.ataque > Iker.ataque && Patino.ataque > Yess.ataque && Patino.ataque > Ulises.ataque
        && Patino.ataque > Emma.ataque && Patino.ataque > Cat.ataque && Patino.ataque > Rafa.ataque && Patino.ataque > Pepe_Ochoa.ataque
        && Patino.ataque > Daniel_Pompa.ataque && Patino.ataque > Alan.ataque && Patino.ataque > Kike.ataque && Patino.ataque > Daniel_Perez.ataque
        && Patino.ataque > Daniel_Medina.ataque && Patino.ataque > Angel.ataque && Patino.ataque > Julio.ataque && Patino.ataque > Paul.ataque)

        std::cout << "Patino tiene un mayor ataque que todos\n";
    std::cout << Patino.ataque << std::endl;

    if (Iker.ataque > Yess.ataque && Iker.ataque > Ulises.ataque && Iker.ataque > Emma.ataque && Iker.ataque > Cat.ataque
        && Iker.ataque > Rafa.ataque && Iker.ataque > Pepe_Ochoa.ataque && Iker.ataque > Daniel_Pompa.ataque && Iker.ataque > Alan.ataque
        && Iker.ataque > Kike.ataque && Iker.ataque > Daniel_Perez.ataque && Iker.ataque > Daniel_Medina.ataque && Iker.ataque > Angel.ataque && Iker.ataque > Julio.ataque
        && Iker.ataque > Paul.ataque)

        std::cout << "Iker tiene un mayor ataque que todos\n";
    std::cout << Iker.ataque << std::endl;

    if (Yess.ataque > Ulises.ataque && Yess.ataque > Emma.ataque && Yess.ataque > Cat.ataque && Yess.ataque > Rafa.ataque
        && Yess.ataque > Pepe_Ochoa.ataque && Yess.ataque > Daniel_Pompa.ataque && Yess.ataque > Alan.ataque && Yess.ataque > Kike.ataque
        && Yess.ataque > Daniel_Perez.ataque && Yess.ataque > Daniel_Medina.ataque && Yess.ataque > Angel.ataque && Yess.ataque > Julio.ataque
        && Yess.ataque > Paul.ataque)

        std::cout << "Yess tiene un mayor ataque que todos\n";
    std::cout << Yess.ataque << std::endl;

    if (Ulises.ataque > Emma.ataque && Ulises.ataque > Cat.ataque && Ulises.ataque > Rafa.ataque & Ulises.ataque > Pepe_Ochoa.ataque
        && Ulises.ataque > Daniel_Pompa.ataque && Ulises.ataque > Alan.ataque && Ulises.ataque > Kike.ataque && Ulises.ataque > Daniel_Perez.ataque
        && Ulises.ataque > Daniel_Medina.ataque && Ulises.ataque > Angel.ataque && Ulises.ataque > Julio.ataque && Ulises.ataque > Paul.ataque)

        std::cout << "Ulises tiene un mayor ataque que todos\n";
    std::cout << Ulises.ataque << std::endl;

    if (Emma.ataque > Cat.ataque && Emma.ataque > Rafa.ataque && Emma.ataque > Pepe_Ochoa.ataque && Emma.ataque > Daniel_Pompa.ataque
        && Emma.ataque > Alan.ataque && Emma.ataque > Kike.ataque && Emma.ataque > Daniel_Perez.ataque && Emma.ataque > Daniel_Medina.ataque
        && Emma.ataque > Angel.ataque && Emma.ataque > Julio.ataque && Emma.ataque > Paul.ataque)

        std::cout << "Emma tiene un mayor ataque que todos\n";
    std::cout << Emma.ataque << std::endl;

    if (Cat.ataque > Rafa.ataque && Cat.ataque > Pepe_Ochoa.ataque && Cat.ataque > Daniel_Pompa.ataque && Cat.ataque > Alan.ataque
        && Cat.ataque > Kike.ataque && Cat.ataque > Daniel_Perez.ataque && Cat.ataque > Daniel_Medina.ataque && Cat.ataque > Angel.ataque
        && Cat.ataque > Julio.ataque && Cat.ataque > Paul.ataque)

        std::cout << "Cat tiene un mayor ataque que todos\n";
    std::cout << Cat.ataque << std::endl;

    if (Rafa.ataque > Pepe_Ochoa.ataque && Rafa.ataque > Daniel_Pompa.ataque && Rafa.ataque > Alan.ataque && Rafa.ataque > Kike.ataque
        && Rafa.ataque > Daniel_Perez.ataque && Rafa.ataque > Daniel_Medina.ataque && Rafa.ataque > Angel.ataque && Rafa.ataque > Julio.ataque
        && Rafa.ataque > Paul.ataque)

        std::cout << "Rafa tiene un mayor ataque que todos\n";
    std::cout << Rafa.ataque << std::endl;

    if (Pepe_Ochoa.ataque > Daniel_Pompa.ataque && Pepe_Ochoa.ataque > Alan.ataque && Pepe_Ochoa.ataque > Kike.ataque && Pepe_Ochoa.ataque > Daniel_Perez.ataque
        && Pepe_Ochoa.ataque > Daniel_Medina.ataque && Pepe_Ochoa.ataque > Angel.ataque && Pepe_Ochoa.ataque > Julio.ataque && Pepe_Ochoa.ataque > Paul.ataque)

        std::cout << "Pepe Ochoa tiene un mayor ataque que todos \n";
    std::cout << Pepe_Ochoa.ataque << std::endl;

    if (Daniel_Pompa.ataque > Alan.ataque && Daniel_Pompa.ataque > Kike.ataque && Daniel_Pompa.ataque > Daniel_Perez.ataque && Daniel_Pompa.ataque > Daniel_Medina.ataque
        && Daniel_Pompa.ataque > Angel.ataque && Daniel_Pompa.ataque > Julio.ataque && Daniel_Pompa.ataque > Paul.ataque)

        std::cout << "Daniel Pompa tiene un mayor ataque que todos\n";
    std::cout << Daniel_Pompa.ataque << std::endl;

    if (Alan.ataque > Kike.ataque && Alan.ataque > Daniel_Perez.ataque && Alan.ataque > Daniel_Medina.ataque && Alan.ataque > Angel.ataque
        && Alan.ataque > Julio.ataque && Alan.ataque > Paul.ataque)

        std::cout << "Alan tiene un mayor ataque que todos\n";
    std::cout << Alan.ataque << std::endl;

    if (Kike.ataque > Daniel_Perez.ataque && Kike.ataque > Daniel_Medina.ataque && Kike.ataque > Angel.ataque && Kike.ataque > Julio.ataque
        && Kike.ataque > Paul.ataque)

        std::cout << "Kike tiene un mayor ataque que todos\n";
    std::cout << Kike.ataque << std::endl;

    if (Daniel_Perez.ataque > Daniel_Medina.ataque && Daniel_Perez.ataque > Angel.ataque && Daniel_Perez.ataque > Julio.ataque && Daniel_Perez.ataque > Paul.ataque)

        std::cout << "Daniel Perez tiene un mayor ataque que todos\n";
    std::cout << Daniel_Perez.ataque << std::endl;

    if (Daniel_Medina.ataque > Angel.ataque && Daniel_Medina.ataque > Julio.ataque && Daniel_Medina.ataque > Paul.ataque)

        std::cout << "Daniel Medina tiene un mayor ataque que todos\n";
    std::cout << Daniel_Medina.ataque << std::endl;

    if (Angel.ataque > Julio.ataque && Angel.ataque > Paul.ataque)

        std::cout << "Angel tiene un mayor ataque que todos\n";
    std::cout << Angel.ataque << std::endl;

    if (Julio.ataque > Paul.ataque)
    {
        std::cout << "Julio tiene un mayor ataque que todos\n";
        std::cout << Julio.ataque << std::endl;
    }

    else {
        std::cout << "Paul tiene un mayor ataque que todos\n";
        std::cout << Paul.ataque << std::endl;
    }

    if (Betsa.defensa > Daniel_Callejas.defensa && Betsa.defensa > pepe_Banuelos.defensa && Betsa.defensa > JuanFer.defensa
        && Betsa.defensa > Patino.defensa && Betsa.defensa > Iker.defensa && Betsa.defensa > Yess.defensa
        && Betsa.defensa > Ulises.defensa && Betsa.defensa > Emma.defensa && Betsa.defensa > Cat.defensa && Betsa.defensa > Rafa.defensa
        && Betsa.defensa > Pepe_Ochoa.defensa && Betsa.defensa > Daniel_Pompa.defensa && Betsa.defensa > Alan.defensa && Betsa.defensa > Kike.defensa
        && Betsa.defensa > Daniel_Perez.defensa && Betsa.defensa > Daniel_Medina.ataque && Betsa.defensa > Angel.defensa && Betsa.defensa > Julio.defensa
        && Betsa.ataque > Paul.defensa)

        std::cout << "Betsa tiene mayor defensa que todos\n";
    std::cout << Betsa.defensa << std::endl;

    if (Daniel_Callejas.defensa > pepe_Banuelos.defensa && Daniel_Callejas.defensa > JuanFer.defensa && Daniel_Callejas.defensa > Patino.defensa && Daniel_Callejas.defensa > Iker.defensa && Daniel_Callejas.defensa > Yess.defensa
        && Daniel_Callejas.defensa > Ulises.defensa && Daniel_Callejas.defensa > Emma.defensa && Daniel_Callejas.defensa > Cat.defensa && Daniel_Callejas.defensa > Rafa.defensa && Daniel_Callejas.defensa > Pepe_Ochoa.defensa && Daniel_Callejas.defensa > Daniel_Pompa.defensa
        && Daniel_Callejas.defensa > Alan.defensa && Daniel_Callejas.defensa > Kike.defensa && Daniel_Callejas.defensa > Daniel_Perez.defensa && Daniel_Callejas.defensa > Daniel_Medina.defensa && Daniel_Callejas.defensa > Angel.defensa && Daniel_Callejas.defensa > Julio.defensa && Daniel_Callejas.defensa > Paul.defensa)

        std::cout << "Daniel Callejas tiene mayor defensa que todos\n";
    std::cout << Daniel_Callejas.ataque << std::endl;

    if (pepe_Banuelos.defensa > JuanFer.defensa && pepe_Banuelos.defensa > Patino.defensa && pepe_Banuelos.defensa > Iker.defensa && pepe_Banuelos.defensa > Yess.defensa
        && pepe_Banuelos.defensa > Ulises.defensa & pepe_Banuelos.defensa > Emma.defensa && pepe_Banuelos.defensa > Cat.defensa && pepe_Banuelos.defensa > Rafa.defensa && pepe_Banuelos.defensa > Pepe_Ochoa.defensa
        && pepe_Banuelos.defensa > Daniel_Pompa.defensa && pepe_Banuelos.defensa > Alan.defensa && pepe_Banuelos.defensa > Kike.defensa && pepe_Banuelos.defensa > Daniel_Perez.defensa && pepe_Banuelos.defensa > Daniel_Medina.defensa
        && pepe_Banuelos.defensa > Angel.defensa && pepe_Banuelos.defensa > Julio.defensa && pepe_Banuelos.defensa > Paul.defensa)

        std::cout << "Pepe Banuelos tiene mayor defensa que todos\n";
    std::cout << Daniel_Callejas.defensa << std::endl;

    if (JuanFer.defensa > Patino.defensa && JuanFer.defensa > Iker.defensa && JuanFer.defensa > Yess.defensa && JuanFer.defensa > Ulises.defensa
        && JuanFer.defensa > Emma.defensa && JuanFer.defensa > Cat.defensa && JuanFer.defensa > Rafa.defensa && JuanFer.defensa > Pepe_Ochoa.defensa
        && JuanFer.defensa > Daniel_Pompa.defensa && JuanFer.defensa > Alan.defensa && JuanFer.defensa > Kike.defensa && JuanFer.defensa > Daniel_Perez.defensa
        && JuanFer.defensa > Daniel_Medina.defensa && JuanFer.defensa > Angel.defensa && JuanFer.defensa > Julio.defensa && JuanFer.defensa > Paul.defensa)

        std::cout << "JuanFer tine mayor defensa que todos\n";
    std::cout << JuanFer.defensa << std::endl;

    if (Patino.defensa > Iker.defensa && Patino.defensa > Yess.defensa && Patino.defensa > Ulises.defensa
        && Patino.defensa > Emma.defensa && Patino.defensa > Cat.defensa && Patino.defensa > Rafa.defensa && Patino.defensa > Pepe_Ochoa.defensa
        && Patino.defensa > Daniel_Pompa.defensa && Patino.defensa > Alan.defensa && Patino.defensa > Kike.defensa && Patino.defensa > Daniel_Perez.defensa
        && Patino.defensa > Daniel_Medina.defensa && Patino.defensa > Angel.defensa && Patino.defensa > Julio.defensa && Patino.defensa > Paul.defensa)

        std::cout << "Patino tiene un mayor defensa que todos\n";
    std::cout << Patino.defensa << std::endl;

    if (Iker.defensa > Yess.defensa && Iker.defensa > Ulises.defensa && Iker.defensa > Emma.defensa && Iker.defensa > Cat.defensa
        && Iker.defensa > Rafa.defensa && Iker.defensa > Pepe_Ochoa.defensa && Iker.defensa > Daniel_Pompa.defensa && Iker.defensa > Alan.defensa
        && Iker.defensa > Kike.defensa && Iker.defensa > Daniel_Perez.defensa && Iker.defensa > Daniel_Medina.defensa && Iker.defensa > Angel.defensa && Iker.de > Julio.defensa
        && Iker.defensa > Paul.defensa)

        std::cout << "Iker tiene un mayor defensa que todos\n";
    std::cout << Iker.defensa << std::endl;

    if (Yess.defensa > Ulises.defensa && Yess.defensa > Emma.defensa && Yess.defensa > Cat.defensa && Yess.dedensa > Rafa.defensa
        && Yess.defensa > Pepe_Ochoa.defensa && Yess.defensa > Daniel_Pompa.defensa && Yess.defensa > Alan.defensa && Yess.defensa > Kike.defensa
        && Yess.defensa > Daniel_Perez.defensa && Yess.defensa > Daniel_Medina.defensa && Yess.defensa > Angel.defensa && Yess.defensa > Julio.defensa
        && Yess.defensa > Paul.defensa)

        std::cout << "Yess tiene un mayor defensa que todos\n";
    std::cout << Yess.defensa << std::endl;

    if (Ulises.defensa > Emma.defensa && Ulises.defensa > Cat.defensa && Ulises.defensa > Rafa.defensa & Ulises.defensa > Pepe_Ochoa.defensa
        && Ulises.defensa > Daniel_Pompa.defensa && Ulises.defensa > Alan.defensa && Ulises.defensa > Kike.defensa && Ulises.defensa > Daniel_Perez.velocidad
        && Ulises.defensa > Daniel_Medina.defensa && Ulises.defensa > Angel.defensa && Ulises.defensa > Julio.defensa && Ulises.defensa > Paul.defensa)

        std::cout << "Ulises tiene un mayor defensa que todos\n";
    std::cout << Ulises.defensa << std::endl;

    if (Emma.defensa > Cat.defensa && Emma.defensa > Rafa.defensa && Emma.defensa > Pepe_Ochoa.defensa && Emma.defensa > Daniel_Pompa.defensa
        && Emma.defensa > Alan.defensa && Emma.defensa > Kike.defensa && Emma.defensa > Daniel_Perez.defensa && Emma.defensa > Daniel_Medina.defensa
        && Emma.defensa > Angel.defensa && Emma.defensa > Julio.defensa && Emma.defensa > Paul.defensa)

        std::cout << "Emma tiene un mayor defensa que todos\n";
    std::cout << Emma.defensa << std::endl;

    if (Cat.defensa > Rafa.defensa && Cat.defensa > Pepe_Ochoa.defensa && Cat.defensa > Daniel_Pompa.defensa && Cat.defensa > Alan.defensa
        && Cat.defensa > Kike.defensa && Cat.defensa > Daniel_Perez.defensa && Cat.defensa > Daniel_Medina.defensa && Cat.defensa > Angel.defensa
        && Cat.defensa > Julio.defensa && Cat.defensa > Paul.defensa)

        std::cout << "Cat tiene un mayor defensa que todos\n";
    std::cout << Cat.defensa << std::endl;

    if (Rafa.defensa > Pepe_Ochoa.defensa && Rafa.defensa > Daniel_Pompa.defensa && Rafa.defensa > Alan.defensa && Rafa.defensa > Kike.defensa
        && Rafa.defensa > Daniel_Perez.defensa && Rafa.defensa > Daniel_Medina.defensa && Rafa.defensa > Angel.defensa && Rafa.defensa > Julio.defensa
        && Rafa.defensa > Paul.defensa)

        std::cout << "Rafa tiene un mayor defensa que todos\n";
    std::cout << Rafa.defensa << std::endl;

    if (Pepe_Ochoa.defensa > Daniel_Pompa.defensa && Pepe_Ochoa.defensa > Alan.defensa && Pepe_Ochoa.defensa > Kike.defensa && Pepe_Ochoa.defensa > Daniel_Perez.defensa
        && Pepe_Ochoa.defensa > Daniel_Medina.defensa && Pepe_Ochoa.defensa > Angel.defensa && Pepe_Ochoa.defensa > Julio.defensa && Pepe_Ochoa.defensa > Paul.defensa)

        std::cout << "Pepe Ochoa tiene un mayor defensa que todos \n";
    std::cout << Pepe_Ochoa.defensa << std::endl;

    if (Daniel_Pompa.defensa > Alan.defensa && Daniel_Pompa.defensa > Kike.defensa && Daniel_Pompa.defensa > Daniel_Perez.defensa && Daniel_Pompa.defensa > Daniel_Medina.defensa
        && Daniel_Pompa.defensa > Angel.defensa && Daniel_Pompa.defensa > Julio.defensa && Daniel_Pompa.defensa > Paul.defensa)

        std::cout << "Daniel Pompa tiene un mayor defensa que todos\n";
    std::cout << Daniel_Pompa.defensa << std::endl;

    if (Alan.defensa > Kike.defensa && Alan.defensa > Daniel_Perez.defensa && Alan.defensa > Daniel_Medina.defensa && Alan.defensa > Angel.defensa
        && Alan.defensa > Julio.defensa && Alan.defensa > Paul.defensa)

        std::cout << "Alan tiene un mayor defensa que todos\n";
    std::cout << Alan.defensa << std::endl;

    if (Kike.defensa > Daniel_Perez.defensa && Kike.defensa > Daniel_Medina.defensa && Kike.defensa > Angel.defensa && Kike.defensa > Julio.defensa
        && Kike.defensa > Paul.defensa)

        std::cout << "Kike tiene un mayor defensa que todos\n";
    std::cout << Kike.defensa << std::endl;

    if (Daniel_Perez.defensa > Daniel_Medina.defensa && Daniel_Perez.defensa > Angel.defensa && Daniel_Perez.defensa > Julio.defensa && Daniel_Perez.defensa > Paul.defensa)

        std::cout << "Daniel Perez tiene un mayor defensa que todos\n";
    std::cout << Daniel_Perez.defensa << std::endl;

    if (Daniel_Medina.defensa > Angel.defensa && Daniel_Medina.defensa > Julio.defensa && Daniel_Medina.defensa > Paul.defensa)

        std::cout << "Daniel Medina tiene un mayor defensa que todos\n";
    std::cout << Daniel_Medina.ataque << std::endl;

    if (Angel.defensa > Julio.defensa && Angel.defensa > Paul.defensa)

        std::cout << "Angel tiene un mayor defensa que todos\n";
    std::cout << Angel.defensa << std::endl;

    if (Julio.defensa > Paul.defensa)
    {
        std::cout << "Julio tiene un mayor defensa que todos\n";
        std::cout << Julio.defensa << std::endl;
    }

    else {
        if (Betsa.vida > Daniel_Callejas.vida && Betsa.vida > pepe_Banuelos.vida && Betsa.vida > JuanFer.vida
            && Betsa.vida > Patino.vida && Betsa.vida > Iker.vida && Betsa.vida > Yess.vida
            && Betsa.vida > Ulises.vida && Betsa.vida > Emma.vida && Betsa.vida > Cat.vida && Betsa.vida > Rafa.vida
            && Betsa.vida > Pepe_Ochoa.vida && Betsa.vida > Daniel_Pompa.vida && Betsa.vida > Alan.vida && Betsa.vida > Kike.vida
            && Betsa.vida > Daniel_Perez.vida && Betsa.vida > Daniel_Medina.vida && Betsa.vida > Angel.vida && Betsa.vida > Julio.vida
            && Betsa.vida > Paul.vida)

            std::cout << "Betsa tiene mayor vida que todos\n";
        std::cout << Betsa.vida << std::endl;

        if (Daniel_Callejas.vida > pepe_Banuelos.vida && Daniel_Callejas.vida > JuanFer.vida && Daniel_Callejas.vida > Patino.vida && Daniel_Callejas.vida > Iker.vida && Daniel_Callejas.vida > Yess.vida
            && Daniel_Callejas.vida > Alan.vida && Daniel_Callejas.vida > Kike.vida && Daniel_Callejas.vida > Daniel_Perez.vida && Daniel_Callejas.vida > Daniel_Medina.vida && Daniel_Callejas.vida > Angel.vida
            && Daniel_Callejas.vida > Julio.vida && Daniel_Callejas.vida > Paul.vida)

            std::cout << "Daniel Callejas tiene mayor vida que todos\n";
        std::cout << Daniel_Callejas.vida << std::endl;

        if (pepe_Banuelos.vida > JuanFer.vida && pepe_Banuelos.vida > Patino.vida && pepe_Banuelos.vida > Iker.vida && pepe_Banuelos.vida > Yess.vida
            && pepe_Banuelos.vida > Ulises.vida & pepe_Banuelos.vida > Emma.vida && pepe_Banuelos.vida > Cat.vida && pepe_Banuelos.vida > Rafa.vida && pepe_Banuelos.vida > Pepe_Ochoa.vida
            && pepe_Banuelos.vida > Daniel_Pompa.vida && pepe_Banuelos.vida > Alan.vida && pepe_Banuelos.vida > Kike.vida && pepe_Banuelos.vida > Daniel_Perez.vida && pepe_Banuelos.vida > Daniel_Medina.vida
            && pepe_Banuelos.vida > Angel.vida && pepe_Banuelos.vida > Julio.vida && pepe_Banuelos.vida > Paul.vida)

            std::cout << "Pepe Banuelos tiene mayor vida que todos\n";
        std::cout << Daniel_Callejas.vida << std::endl;

        if (JuanFer.vida > Patino.vida && JuanFer.vida > Iker.vida && JuanFer.vida > Yess.vida && JuanFer.vida > Ulises.vida
            && JuanFer.vida > Emma.vida && JuanFer.vida > Cat.vida && JuanFer.vida > Rafa.vida && JuanFer.vida > Pepe_Ochoa.vida
            && JuanFer.vida > Daniel_Pompa.vida && JuanFer.vida > Alan.vida && JuanFer.vida > Kike.vida && JuanFer.vida > Daniel_Perez.vida
            && JuanFer.vida > Daniel_Medina.vida && JuanFer.vida > Angel.vida && JuanFer.vida > Julio.vida && JuanFer.vida > Paul.vida)

            std::cout << "JuanFer tine mayor vida que todos\n";
        std::cout << JuanFer.vida << std::endl;

        if (Patino.vida > Iker.vida && Patino.vida > Yess.vida && Patino.vida > Ulises.vida
            && Patino.vida > Emma.vida && Patino.vida > Cat.vida && Patino.vida > Rafa.vida && Patino.vida > Pepe_Ochoa.vida
            && Patino.vida > Daniel_Pompa.vida && Patino.vida > Alan.vida && Patino.vida > Kike.vida && Patino.vida > Daniel_Perez.vida
            && Patino.vida > Daniel_Medina.vida && Patino.vida > Angel.vida && Patino.vida > Julio.vida && Patino.vida > Paul.vida)

            std::cout << "Patino tiene un mayor vida que todos\n";
        std::cout << Patino.vida << std::endl;

        if (Iker.vida > Yess.vida && Iker.vida > Ulises.vida && Iker.vida > Emma.vida && Iker.vida > Cat.vida
            && Iker.vida > Rafa.vida && Iker.vida > Pepe_Ochoa.vida && Iker.vida > Daniel_Pompa.vida && Iker.vida > Alan.vida
            && Iker.vida > Kike.vida && Iker.vida > Daniel_Perez.vida && Iker.vida > Daniel_Medina.vida && Iker.vida > Angel.vida && Iker.vida > Julio.vida
            && Iker.vida > Paul.vida)

            std::cout << "Iker tiene un mayor vida que todos\n";
        std::cout << Iker.vida << std::endl;

        if (Yess.vida > Ulises.vida && Yess.vida > Emma.vida && Yess.vida > Cat.vida && Yess.vida > Rafa.vida
            && Yess.vida > Pepe_Ochoa.vida && Yess.vida > Daniel_Pompa.vida && Yess.vida > Alan.vida && Yess.vida > Kike.vida
            && Yess.vida > Daniel_Perez.vida && Yess.vida > Daniel_Medina.vida && Yess.vida > Angel.vida && Yess.vida > Julio.vida
            && Yess.vida > Paul.vida)

            std::cout << "Yess tiene un mayor vida que todos\n";
        std::cout << Yess.vida << std::endl;

        if (Ulises.vida > Emma.vida && Ulises.vida > Cat.vida && Ulises.vida > Rafa.vida & Ulises.vida > Pepe_Ochoa.vida
            && Ulises.vida > Daniel_Pompa.vida && Ulises.vida > Alan.vida && Ulises.vida > Kike.vida && Ulises.vida > Daniel_Perez.vida
            && Ulises.vida > Daniel_Medina.vida && Ulises.vida > Angel.vida && Ulises.vida > Julio.vida && Ulises.vida > Paul.vida)

            std::cout << "Ulises tiene un mayor vida que todos\n";
        std::cout << Ulises.vida << std::endl;

        if (Emma.vida > Cat.vida && Emma.vida > Rafa.vida && Emma.vida > Pepe_Ochoa.vida && Emma.vida > Daniel_Pompa.vida
            && Emma.vida > Alan.vida && Emma.vida > Kike.vida && Emma.vida > Daniel_Perez.vida && Emma.vida > Daniel_Medina.vida
            && Emma.vida > Angel.vida && Emma.vida > Julio.vida && Emma.vida > Paul.vida)

            std::cout << "Emma tiene un mayor vida que todos\n";
        std::cout << Emma.vida << std::endl;

        if (Cat.vida > Rafa.vida && Cat.vida > Pepe_Ochoa.vida && Cat.vida > Daniel_Pompa.vida && Cat.vida > Alan.vida
            && Cat.vida > Kike.vida && Cat.vida > Daniel_Perez.vida && Cat.vida > Daniel_Medina.vida && Cat.vida > Angel.vida
            && Cat.ataque > Julio.ataque && Cat.ataque > Paul.ataque)

            std::cout << "Cat tiene un mayor ataque que todos\n";
        std::cout << Cat.vida << std::endl;

        if (Rafa.vida > Pepe_Ochoa.vida && Rafa.vida > Daniel_Pompa.vida && Rafa.vida > Alan.vida && Rafa.vida > Kike.vida
            && Rafa.vida > Daniel_Perez.vida && Rafa.vida > Daniel_Medina.vida && Rafa.vida > Angel.vida && Rafa.vida > Julio.vida
            && Rafa.vida > Paul.vida)

            std::cout << "Rafa tiene un mayor vida que todos\n";
        std::cout << Rafa.vida << std::endl;

        if (Pepe_Ochoa.vida > Daniel_Pompa.vida && Pepe_Ochoa.vida > Alan.vida && Pepe_Ochoa.vida > Kike.vida && Pepe_Ochoa.vida > Daniel_Perez.vida
            && Pepe_Ochoa.vida > Daniel_Medina.vida && Pepe_Ochoa.vida > Angel.vida && Pepe_Ochoa.vida > Julio.vida && Pepe_Ochoa.vida > Paul.vida)

            std::cout << "Pepe Ochoa tiene un mayor vida que todos \n";
        std::cout << Pepe_Ochoa.vida << std::endl;

        if (Daniel_Pompa.vida > Alan.vida && Daniel_Pompa.vida > Kike.vida && Daniel_Pompa.vida > Daniel_Perez.vida && Daniel_Pompa.vida > Daniel_Medina.vida
            && Daniel_Pompa.vida > Angel.vida && Daniel_Pompa.vida > Julio.vida && Daniel_Pompa.vida > Paul.vida)

            std::cout << "Daniel Pompa tiene un mayor vida que todos\n";
        std::cout << Daniel_Pompa.vida << std::endl;

        if (Alan.vida > Kike.vida && Alan.vida > Daniel_Perez.vida && Alan.vida > Daniel_Medina.vida && Alan.vida > Angel.vida
            && Alan.vida > Julio.vida && Alan.vida > Paul.vida)

            std::cout << "Alan tiene un mayor vida que todos\n";
        std::cout << Alan.vida << std::endl;

        if (Kike.vida > Daniel_Perez.vida && Kike.vida > Daniel_Medina.vida && Kike.vida > Angel.vida && Kike.vida > Julio.vida
            && Kike.vida > Paul.vida)

            std::cout << "Kike tiene un mayor vida que todos\n";
        std::cout << Kike.vida << std::endl;

        if (Daniel_Perez.ataque > Daniel_Medina.ataque && Daniel_Perez.ataque > Angel.ataque && Daniel_Perez.ataque > Julio.ataque && Daniel_Perez.ataque > Paul.ataque)

            std::cout << "Daniel perez tiene un mayor ataque que todos\n";
        std::cout << Daniel_Perez.vida << std::endl;

        if (Daniel_Medina.vida > Angel.vida && Daniel_Medina.vida > Julio.vida && Daniel_Medina.vida > Paul.vida)

            std::cout << "Daniel Medina tiene un mayor vida que todos\n";
        std::cout << Daniel_Medina.vida << std::endl;

        if (Angel.vida > Julio.vida && Angel.vida > Paul.vida)

            std::cout << "Angel tiene un mayor ataque que todos\n";
        std::cout << Angel.vida << std::endl;

        if (Julio.vida > Paul.vida)
        {
            std::cout << "Julio tiene un mayor vida que todos\n";
            std::cout << Julio.vida << std::endl;
        }

        else {
            std::cout << "Paul tiene un mayor vida que todos\n";
            std::cout << Paul.vida << std::endl;
        }

        if (Betsa.velocidad > Daniel_Callejas.velocidad && Betsa.velocidad > pepe_Banuelos.velocidad && Betsa.velocidad > JuanFer.velocidad
            && Betsa.velocidad > Patino.velocidad && Betsa.velocidad > Iker.velocidad && Betsa.velocidad > Yess.velocidad
            && Betsa.velocidad > Ulises.velocidad && Betsa.velocidad > Emma.velocidad && Betsa.velocidad > Cat.velocidad && Betsa.velocidad > Rafa.velocidad
            && Betsa.velocidad > Pepe_Ochoa.velocidad && Betsa.velocidad > Daniel_Pompa.velocidad && Betsa.velocidad > Angel.velocidad && Betsa.velocidad > Julio.velocidad
            && Betsa.velocidad > Paul.velocidad)

            std::cout << "Betsa tiene mayor velocidad que todos\n";
        std::cout << Betsa.velocidad << std::endl;

        if (Daniel_Callejas.velocidad > pepe_Banuelos.velocidad && Daniel_Callejas.velocidad > JuanFer.velocidad && Daniel_Callejas.velocidad > Patino.velocidad && Daniel_Callejas.velocidad > Iker.velocidad && Daniel_Callejas.velocidad > Yess.velocidad
            && Daniel_Callejas.velocidad > Ulises.velocidad && Daniel_Callejas.velocidad > Emma.velocidad && Daniel_Callejas.velocidad > Cat.velocidad && Daniel_Callejas.velocidad > Rafa.velocidad && Daniel_Callejas.velocidad > Pepe_Ochoa.velocidad && Daniel_Callejas.velocida > Daniel_Pompa.velocidad
            && Daniel_Callejas.velocidad > Alan.velocidad && Daniel_Callejas.velocidad > Kike.velocidad && Daniel_Callejas.velocidad > Daniel_Perez.velocidad && Daniel_Callejas.velocidad > Daniel_Medina.velocidad && Daniel_Callejas.velocidad > Angel.velocidad && Daniel_Callejas.velocidad > Julio.velocidad
            && Daniel_Callejas.velocidad > Paul.velocidad)

            std::cout << "Daniel Callejas tiene mayor velocidadd que todos\n";
        std::cout << Daniel_Callejas.velocidad << std::endl;

        if (pepe_Banuelos.velocidad > JuanFer.velocidad && pepe_Banuelos.velocidad > Patino.velocidad && pepe_Banuelos.velocidad > Iker.velocidad && pepe_Banuelos.velocidad > Yess.velocidad
            && pepe_Banuelos.velocidad > Ulises.velocidad & pepe_Banuelos.velocidad > Emma.velocidad && pepe_Banuelos.velocidad > Cat.velocidad && pepe_Banuelos.velocidad > Rafa.velocidad && pepe_Banuelos.velocidad > Pepe_Ochoa.velocidad
            && pepe_Banuelos.velocidad > Daniel_Pompa.velocidad && pepe_Banuelos.velocidad > Alan.velocidad && pepe_Banuelos.velocidad > Kike.velocidad && pepe_Banuelos.velocidad > Daniel_Perez.velocidad && pepe_Banuelos.velocidad > Daniel_Medina.velocidad
            && pepe_Banuelos.velocidad > Angel.ataque && pepe_Banuelos.velocidad > Julio.velocidad && pepe_Banuelos.velocidad > Paul.velocidad)

            std::cout << "Pepe Banuelos tiene mayor velocidad que todos\n";
        std::cout << pepe_Banuelos.velocidad << std::endl;

        if (JuanFer.velocidad > Patino.velocidad && JuanFer.velocidad > Iker.velocidad && JuanFer.velocidad > Yess.velocidad && JuanFer.velocidad > Ulises.velocidad
            && JuanFer.velocidad > Emma.velocidad && JuanFer.velocidad > Cat.velocidad && JuanFer.velocidad > Rafa.velocidad && JuanFer.velocidad > Pepe_Ochoa.velocidad
            && JuanFer.velocidad > Daniel_Pompa.velocidad && JuanFer.velocidad > Alan.velocidad && JuanFer.velocidad > Kike.velocidad && JuanFer.velocidad > Daniel_Perez.velocidad
            && JuanFer.velocidad > Daniel_Medina.velocidad && JuanFer.velocidad > Angel.velocidad && JuanFer.velocidad > Julio.velocidad && JuanFer.velocidad > Paul.velocidad)

            std::cout << "JuanFer tine mayor velocidad que todos\n";
        std::cout << JuanFer.velocidad << std::endl;

        if (Patino.velocidad > Iker.velocidad && Patino.velocidad > Yess.velocidad && Patino.velocidad > Ulises.velocidad
            && Patino.velocidad > Emma.velocidad && Patino.velocidad > Cat.velocidad && Patino.velocidad > Rafa.velocidad && Patino.velocidad > Pepe_Ochoa.velocidad
            && Patino.velocidad > Daniel_Pompa.velocidad && Patino.velocidad > Alan.velocidad && Patino.velocidad > Kike.velocidad && Patino.velocidad > Daniel_Perez.velocidad
            && Patino.velocidad > Daniel_Medina.velocidad && Patino.velocidad > Angel.velocidad && Patino.velocidad > Julio.velocidad && Patino.velocidad > Paul.velocidad)

            std::cout << "Patino tiene un mayor velocidad que todos\n";
        std::cout << Patino.velocidad << std::endl;

        if (Iker.velocidad > Yess.velocidad && Iker.velocidad > Ulises.velocidad && Iker.velocidad > Emma.velocidad && Iker.velocidad > Cat.velocidad
            && Iker.velocidad > Rafa.velocidad && Iker.velocidad > Pepe_Ochoa.velocidad && Iker.velocidad > Daniel_Pompa.velocidad && Iker.velocidad > Alan.velocidad
            && Iker.velocidad > Kike.velocidad && Iker.velocidad > Daniel_Perez.velocidad && Iker.velocidad > Daniel_Medina.velocidad && Iker.velocidad > Angel.velocidad && Iker.velocidad > Julio.velocidad
            && Iker.velocidad > Paul.velocidad)

            std::cout << "Iker tiene un mayor velocidad que todos\n";
        std::cout << Iker.velocidad << std::endl;

        if (Yess.velocidad > Ulises.velocidad && Yess.velocidad > Emma.velocidad && Yess.velocidad > Cat.velocidad && Yess.velocidad > Rafa.velocidad
            && Yess.velocidad > Pepe_Ochoa.velocidad && Yess.velocidad > Daniel_Pompa.velocidad > Angel.velocidad && Yess.velocidad > Julio.velocidad
            && Yess.velocidad > Paul.velocidad)

            std::cout << "Yess tiene un mayor velocidad que todos\n";
        std::cout << Yess.velocidad << std::endl;

        if (Ulises.velocidad > Emma.velocidad && Ulises.velocidad > Cat.velocidad && Ulises.velocidad > Rafa.velocidad & Ulises.velocidad > Pepe_Ochoa.velocidad
            && Ulises.velocidad > Daniel_Pompa.velocidad && Ulises.velocidad > Alan.velocidad && Ulises.velocidad > Kike.velocidad && Ulises.velocidad > Daniel_Perez.velocidad
            && Ulises.velocidad > Daniel_Medina.velocidad && Ulises.velocidad > Angel.velocidad && Ulises.velocidad > Julio.velocidad && Ulises.velocidad > Paul.velocidad)

            std::cout << "Ulises tiene un mayor velocidad que todos\n";
        std::cout << Ulises.velocidad << std::endl;

        if (Emma.velocidad > Cat.velocidad && Emma.velocidad > Rafa.velocidad && Emma.velocidad > Pepe_Ochoa.velocidad && Emma.velocidad > Daniel_Pompa.velocidad
            && Emma.velocidad > Alan.velocidad && Emma.velocidad > Kike.velocidad && Emma.velocidad > Daniel_Perez.velocidad && Emma.velocidad > Daniel_Medina.velocidad
            && Emma.velocidad > Angel.velocidad && Emma.velocidad > Julio.velocidad && Emma.velocidad > Paul.velocidad)

            std::cout << "Emma tiene un mayor velocidad que todos\n";
        std::cout << Emma.velocidad << std::endl;

        if (Cat.velocidad > Rafa.velocidad && Cat.velocidad > Pepe_Ochoa.velocidad && Cat.velocidad > Daniel_Pompa.velocidad && Cat.velocidad > Alan.velocidad
            && Cat.velocidad > Kike.velocidad && Cat.velocidad > Daniel_Perez.velocidad && Cat.velocidad > Daniel_Medina.velocidad && Cat.velocidad > Angel.velocidad
            && Cat.velocidad > Julio.velocidad && Cat.velocidad > Paul.velocidad)

            std::cout << "Cat tiene un mayor velocidad que todos\n";
        std::cout << Cat.velocidad << std::endl;

        if (Rafa.velocidad > Pepe_Ochoa.velocidad && Rafa.velocidad > Daniel_Pompa.velocidad && Rafa.velocidad > Alan.velocidad && Rafa.velocidad > Kike.velocidad
            && Rafa.velocidad > Daniel_Perez.velocidad && Rafa.velocidad > Daniel_Medina.velocidad && Rafa.velocidad > Angel.velocidad && Rafa.velocidad > Julio.velocidad
            && Rafa.velocidad > Paul.velocidad)

            std::cout << "Rafa tiene un mayor ataque que todos\n";
        std::cout << Rafa.velocidad << std::endl;

        if (Pepe_Ochoa.velocidad > Daniel_Pompa.velocidad && Pepe_Ochoa.velocidad > Alan.velocidad && Pepe_Ochoa.velocidad > Kike.velocidad && Pepe_Ochoa.velocidad > Daniel_Perez.velocidad
            && Pepe_Ochoa.velocidad > Daniel_Medina.velocidad && Pepe_Ochoa.velocidad > Angel.velocidad && Pepe_Ochoa.velocidad > Julio.velocidad && Pepe_Ochoa.velocidad > Paul.velocidad)

            std::cout << "Pepe Ochoa tiene un mayor velocidad que todos \n";
        std::cout << Pepe_Ochoa.velocidad << std::endl;

        if (Daniel_Pompa.velocidad > Alan.velocidad && Daniel_Pompa.velocidad > Kike.velocidad && Daniel_Pompa.velocidad > Daniel_Perez.velocidad && Daniel_Pompa.velocidad > Daniel_Medina.velocidad
            && Daniel_Pompa.velocidad > Angel.velocidad && Daniel_Pompa.velocidad > Julio.velocidad && Daniel_Pompa.velocidad > Paul.velocidad)

            std::cout << "Daniel Pompa tiene un mayor velocidad que todos\n";
        std::cout << Daniel_Pompa.velocidad << std::endl;

        if (Alan.velocidad > Kike.velocidad && Alan.velocidad > Daniel_Perez.velocidad && Alan.velocidad > Daniel_Medina.velocidad && Alan.velocidad > Angel.velocidad
            && Alan.velocidad > Julio.velocidad && Alan.velocidad > Paul.velocidad)

            std::cout << "Alan tiene un mayor velocidad que todos\n";
        std::cout << Alan.velocidad << std::endl;

        if (Kike.velocidad > Daniel_Perez.velocidad && Kike.velocidad > Daniel_Medina.velocidad && Kike.velocidad > Angel.velocidad && Kike.velocidad > Julio.velocidad
            && Kike.velocidad > Paul.velocidad)

            std::cout << "Kike tiene un mayor velocidad que todos\n";
        std::cout << Kike.velocidad << std::endl;

        if (Daniel_Perez.velocidad > Daniel_Medina.velocidad && Daniel_Perez.velocidad > Angel.velocidad && Daniel_Perez.velocidad > Julio.velocidad && Daniel_Perez.velocidad > Paul.velocidad)

            std::cout << "Daniel Perez tiene un mayor velocidad que todos\n";
        std::cout << Daniel_Perez.velocidad << std::endl;

        if (Daniel_Medina.velocidad > Angel.velocidad && Daniel_Medina.velocidad > Julio.velocidad && Daniel_Medina.velocidad > Paul.velocidad)

            std::cout << "Daniel Medina tiene un mayor velocidad que todos\n";
        std::cout << Daniel_Medina.velocidad << std::endl;

        if (Angel.velocidad > Julio.velocidad && Angel.velocidad > Paul.velocidad)

            std::cout << "Angel tiene un mayor velocidad que todos\n";
        std::cout << Angel.velocidad << std::endl;

        if (Julio.velocidad > Paul.velocidad)
        {
            std::cout << "Julio tiene mayor velocidad que todos\n";
            std::cout << Julio.velocidad << std::endl;
        }

        else {
            std::cout << "Paul tiene mayor velocidad que todos\n";
            std::cout << Paul.velocidad << std::endl:
        }
    }

