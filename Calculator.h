#pragma once

#include "Unitate.h"
#include "Monitor.h"

class Calculator {
private:
    Unitate unitate;
    Monitor monitor;

public:
    // Constructor
    Calculator(int Nr_RAM = 0, int Frecventa_Procesor = 0, int Nr_VRAM = 0, std::string Nume_PC = " ",int Nr_Pixeli_Inaltime = 0, int Nr_Pixeli_Latime = 0, std::string Rezolutie = " ");

    // Destructor
    ~Calculator();
private:
    // Functii
    void Create_Calculator();

    void Afisare_Specificatii();
};