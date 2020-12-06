#include "Calculator.h"

/*
class Joc {
protected:
    string Nume;
    int Pret;
    int RAM_Minim;
    int F_Provesor_Minim;
    int VRAM_Minim;
    bool Multiplayer;
    int rezolutieW;
    int rezolutieH;
    string Tip_Joc;
public:
    //contructor- initializare
    Joc(string Nume="0",int Pret=0,int RAM_Minim=0,int F_Provesor_Minim=0,int VRAM_Minim=0,bool Multiplayer= false ,int rezolutieW=0 ,int rezolutieH=0,string Tip_Joc="0"){
        this->



    }

};

class MMORPG : protected Joc {
protected:
    MMORPG() {
        this->Multiplayer = true;
        this->Tip_Joc = "MMORPG";
    }

    int Max_players;
    int Ore_Gameplay;
    int Nr_Servers;
    int Nr_Harti;
    string Dificultate;

};

class Shooter : protected Joc {
protected:
    Shooter() {
        this->Multiplayer = true;
        this->Tip_Joc = "Shooter";
    }

    int Max_players;
    int Nr_Servers;
    int Nr_Harti;
    string Dificultate;

};

class SingleplayerGame : protected Joc {
protected:
    SingleplayerGame() {
        this->Multiplayer = false;
        this->Tip_Joc = "Singleplayer";
    }

    int Ore_Gameplay;
    int Nr_Dificultati;
    vector<string> Dificultati;
    string Tip_Joc;
};
*/

int main() {
    Calculator *calc = new Calculator();

    calc->Create_Calculator();
    calc->Afisare_Specificatii();

    delete calc;

    return 0;
}
