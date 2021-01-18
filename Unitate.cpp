#include "Unitate.h"
#include <thread>

Unitate::Unitate(int Nr_RAM, int Frecventa_Procesor, int Nr_VRAM, std::string Nume_PC)
        : Nr_RAM{Nr_RAM}, Frecventa_Procesor{Frecventa_Procesor}, Nr_VRAM{Nr_VRAM}, Nume_PC{std::move(Nume_PC)} {
    std::cout << "Creare Unitate\n";
}

Unitate::~Unitate() {
    std::cout << "Stergere Unitatea\n";
}

std::ostream &operator<<(std::ostream &os, const Unitate &obj){
    os << "Numele calculatorului este : " << obj.Nume_PC << '\n';
    os << "Numar Gb RAM : " << obj.Nr_RAM << '\n';
    os << "Numar Gb VRAM : " << obj.Nr_VRAM << '\n';
    os << "Numar de Ghz ai procesorului : " << obj.Frecventa_Procesor << '\n';

    return os;
}

void Unitate::Creare_Unitate() {

    std::cout << "Introduce-ti numarul de GB de RAM dorit ( Numar Maxim 64 ) :\n";
    bool validare_ram = false;
    do {
        std::string Nr_RAM_Introdus;
        getline(std::cin, Nr_RAM_Introdus);
        int Nr_Ram ;
        try {
            Nr_Ram = stoi(Nr_RAM_Introdus,nullptr,10);
            if (Nr_Ram < 64 && Nr_Ram > 0)
            {
                validare_ram = true;
                this->Nr_RAM = Nr_Ram;

            }else throw std::invalid_argument("Alegere incorecta ! Introduce-ti un raspuns corect.\n");
            
        }
        catch (std::exception &exception1) {
            std::cout<<"Eroarea a fost cauzata de : un numar prea mare /"<<exception1.what()<<std::endl;
            std::cout<<"Alegere incorecta ! Introduce-ti un raspuns corect.\n";
            
        }
        
    } while (validare_ram == false);


    std::cout << "Introduce-ti numarul de Gb de VRAM dorit ( Numar Maxim 16 ) :\n";
    bool validare_vram = false;
    do {
        std::string Nr_VRAM_Introdus;
        getline(std::cin, Nr_VRAM_Introdus);
        int Nr_Vram;

        try {
            Nr_Vram = stoi(Nr_VRAM_Introdus,nullptr,10);
            if (Nr_Vram < 16 && Nr_Vram > 0)
            {
                validare_vram = true;
                this->Nr_VRAM = Nr_Vram;

            }else throw std::invalid_argument("Alegere incorecta ! Introduce-ti un raspuns corect.\n");

        }
        catch (std::exception &exception1) {
            std::cout<<"Eroarea a fost cauzata de : un numar prea mare /"<<exception1.what()<<std::endl;
            std::cout<<"Alegere incorecta ! Introduce-ti un raspuns corect.\n";

        }

    } while(validare_vram == false);




    std::cout << "Introduce-ti numarul de GHz ai procesorului ( Numar Maxim 6 ) :\n";
    bool validare_procesor = false;
    do {

        std::string Frecventa_Procesor_Introdusa;
        getline(std::cin, Frecventa_Procesor_Introdusa);
        int Frecventa_procesor;
        try {
            Frecventa_procesor = stoi(Frecventa_Procesor_Introdusa,nullptr,10);
            if (Frecventa_procesor < 6 && Frecventa_procesor > 0)
            {
                validare_procesor = true;
                this->Frecventa_Procesor = Frecventa_procesor;

            }else throw std::invalid_argument("Alegere incorecta ! Introduce-ti un raspuns corect.\n");

        }
        catch (std::exception &exception1) {
            std::cout<<"Eroarea a fost cauzata de : un numar prea mare /"<<exception1.what()<<std::endl;
            std::cout<<"Alegere incorecta ! Introduce-ti un raspuns corect.\n";

        }

    } while(validare_procesor == false);

    std::cout << " Introduce-ti numele calculatorului " << '\n';
    getline(std::cin, this->Nume_PC);
}

