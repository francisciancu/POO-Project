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

    int getNrRAM() const{
        return this->Nr_RAM;
    }

    int getFrecventaProcesor() const{
        return this->Frecventa_Procesor;
    }

    int getNrVRAM() const{
        return this->Nr_VRAM;
    }

    // Destructor
    ~Unitate();

    // Op overload
    // Operator <<
    friend std::ostream &operator<<(std::ostream &os, const Unitate &obj);

    // Functii
    void Creare_Unitate();
};