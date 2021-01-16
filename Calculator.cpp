#include "Calculator.h"

Calculator::Calculator(int Nr_RAM, int Frecventa_Procesor, int Nr_VRAM, std::string Nume_PC, int Nr_Pixeli_Inaltime,int Nr_Pixeli_Latime, std::string Rezolutie)
        : unitate(Nr_RAM, Frecventa_Procesor, Nr_VRAM, std::move(Nume_PC)),
          monitor(Nr_Pixeli_Inaltime, Nr_Pixeli_Latime, std::move(Rezolutie)){
    std::cout << "Creare Calculator\n";
}

Calculator::~Calculator(){
    std::cout << "Stergere Calculator\n";
}

void Calculator::Create_Calculator(){
    monitor.Creare_Monitor();
    unitate.Creare_Unitate();
}

void Calculator::Afisare_Specificatii(){
    std::cout << monitor << "\n";
    std::cout << unitate << "\n";
}