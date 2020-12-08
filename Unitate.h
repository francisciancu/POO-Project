#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

class Unitate {
private:
    int Nr_RAM;
    int Frecventa_Procesor;
    int Nr_VRAM;
    std::string Nume_PC;

public:
    // Constructor
    Unitate(int Nr_RAM = 0, int Frecventa_Procesor = 0, int Nr_VRAM = 0, std::string Nume_PC = " ");

    // Destructor
    ~Unitate();

    // Op overload
    // Operator <<
    friend std::ostream &operator<<(std::ostream &os, const Unitate &obj);

    // Functii
    void Creare_Unitate();
};