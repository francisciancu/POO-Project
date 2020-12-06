#pragma once

#include "Unitate.h"
#include "Monitor.h"

class Calculator {
private:
    Unitate unitate;
    Monitor monitor;

public:
    // Constructor
    Calculator(int Nr_RAM = 0, int Frecventa_Procesor = 0, int Nr_VRAM = 0,std::string  Nume_PC = " ",
               int Nr_Pixeli_Inaltime = 0, int Nr_Pixeli_Latime = 0, std::string  Rezolutie = " ")
               : unitate(Nr_RAM, Frecventa_Procesor, Nr_VRAM, std::move(Nume_PC)),
                 monitor(Nr_Pixeli_Inaltime, Nr_Pixeli_Latime, std::move(Rezolutie)){
        std::cout << "Creare Calculator\n";
    }

    // Destructor
    ~Calculator(){
        std::cout << "Stergere Calculator\n";
    }

    // Functii
    void Create_Calculator (){
        monitor.Creare_Monitor();
        unitate.Creare_Unitate();
    }

    void Afisare_Specificatii(){
        std::cout << monitor << "\n";
        std::cout << unitate << "\n";
    }
};
