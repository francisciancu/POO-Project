#include "Calculator.h"
#include "Joc.h"
#include <iostream>
#include <string>
#include <utility>
#include <memory>


class Exception : public std::exception{
public:
    explicit Exception(const char* message):
            msg_(message){}

    explicit Exception(const std::string& message):
            msg_(std::move(message)){}

    virtual ~Exception() noexcept{}

    virtual const char* what() noexcept{
        return msg_.c_str();
    }
protected:
    std::string msg_;
};

void compare_Game_PC(Cerinte&, Calculator*);

int main() {
    int menu;
    std::cout<<" Ce doriti sa faceti ?"<<std::endl;
    std::cout<<"1 - Rulati programul."<<std::endl;
    std::cout<<"2 - Inchide-ti programul. "<<std::endl<<std::endl;
    std::cout<<" Introduce-ti raspunsul : "<<std::endl;
    std::cin>>menu;
menu=1;
    if(menu==1){
        Calculator *calc = new Calculator();
        calc->Create_Calculator();
        //calc->Afisare_Specificatii();
        int a,b,c,d,e;
        std::cin>>a>>b>>c>>d>>e;
        //delete calc;

        Cerinte cerinte_Joc(a, b, c, d, e);
        MMORPG m1(cerinte_Joc, "Wow");
        Shooter_Singleplayer s1(Cerinte(1,2,3,4,5), "CS");


        std::cout << m1<<std::endl;
        std::cout << s1;

        std::cout << calc -> getUnitate();
        Cerinte cerinteJoc(1, 1, 1, 1, 1);
        Calculator *calcc = new Calculator(1, 1, 1, "string", 1, 1, "string");
        compare_Game_PC(cerinteJoc, calcc);

    }
    else {
        std::cout << " Program inchis! " << std::endl;
        return 0;

    }

    return 0;
}

void compare_Game_PC(Cerinte& cer, Calculator* cal){
    std::cout << "Cerintele jocului:\n" << cer;
    try{
        if(cer.getFrProc() < cal -> getUnitate() -> getFrecventaProcesor())
            throw(Exception("Procesorul nu este suficient de PUTERRRNIC"));
        if(cer.getRAM() < cal -> getUnitate() -> getNrRAM())
            throw(Exception("Memorie insuficienta"));
        if(cer.getVRAM() < cal -> getUnitate() -> getNrVRAM())
            throw(Exception("Memorie virtuala insuficienta"));

        std::cout << "Puteti rula jocul in siguranta\n";
    }
    catch (Exception e){
        std::cout << e.what() << '\n';
    }
}