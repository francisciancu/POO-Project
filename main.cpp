#include <iostream>
#include <string>
#include <locale>
#include <algorithm>


using namespace std;

class Calculator{
private:
    int Nr_RAM;
    int Frecventa_Procesor;
    int Nr_VRAM;
    string Nume_PC;
public:
    //constructor de initializare
    Calculator(int Nr_RAM=0,int Frecventa_Procesor=0,int Nr_VRAM=0,string Nume_PC="0"){

        this->Nr_RAM=Nr_RAM;
        this->Frecventa_Procesor=Frecventa_Procesor;
        this->Nr_VRAM=Nr_VRAM;
        this->Nume_PC=Nume_PC;
    }
    void This_PC (int Nr_RAM,int Frecventa_Procesor,int Nr_VRAM,string Nume_PC){

        this->Nr_RAM=Nr_RAM;
        this->Frecventa_Procesor=Frecventa_Procesor;
        this->Nr_VRAM=Nr_VRAM;
        this->Nume_PC=Nume_PC;
    }
    //Destructor
    ~Calculator(){
        cout<<"This PC( "<<Nume_PC<<" ) Burned Down( to much power :O )";
    }

};


class Monitor{
private:
    int Nr_Pixeli_Inaltime;
    int Nr_Pixeli_Latime;
    string Rezolutie;
public:
    //contructor- initializare
    Monitor(int Nr_Pixeli_Inaltime=0,int Nr_Pixeli_Latime=0,string Rezolutie="0"){
        this -> Nr_Pixeli_Inaltime = Nr_Pixeli_Inaltime;
        this -> Nr_Pixeli_Latime = Nr_Pixeli_Latime;
        this -> Rezolutie = Rezolutie;
    }//Operator=

    Monitor &operator= (const Monitor &obj ){
        Nr_Pixeli_Inaltime=obj.Nr_Pixeli_Inaltime;
        Nr_Pixeli_Latime=obj.Nr_Pixeli_Latime;
        Rezolutie=obj.Rezolutie;
        return *this;
}
    void Aspect_rezolutie(int Nr_Pixeli_Inaltime,int Nr_Pixeli_Latime,string Rezolutie){
        this -> Nr_Pixeli_Inaltime = Nr_Pixeli_Inaltime;
        this -> Nr_Pixeli_Latime = Nr_Pixeli_Latime;
        this -> Rezolutie = Rezolutie;
}
    //Destructor
    ~Monitor(){
        cout<<"Monitor Goes Brrr( dieded :o )";
    }
    // Constructor Copiere
    Monitor (const Monitor & obj) : Monitor (obj.Nr_Pixeli_Inaltime,obj.Nr_Pixeli_Latime,obj.Rezolutie){

    }
    //Operator <<
    friend ostream& operator<<(ostream& os, const Monitor& obj)
    {
        os << "Rezolutia este : " <<obj.Rezolutie<< "\n";
        return os;
    }
    void Distrugere_Monitor(string Raspuns,int Validare_Raspuns){

        for_each(Raspuns.begin(), Raspuns.end(), [](char & c){
            c =tolower(c);
        });
        if(Raspuns == "da")
        {
            delete this; // test destructor
            int Validare_Raspuns=1;
        }

        else if (Raspuns == "nu")
        {
            cout<<"OK! But don't forget about it !"<<"\n";
            int Validare_Raspuns=1;
        }
        else
        {cout<<"Raspuns Invalid !"<<"\n"<<"Introduce-ti un raspuns corect. Da/Nu"<<"\n";
        cin>>Raspuns;
        this->Distrugere_Monitor(Raspuns,Validare_Raspuns);}


    }



};

class Joc{
public:
    string Nume;
    int Pret;
    int RAM_Minim;
    int F_Provesor_Minim;
    int VRAM_Minim;
    bool Multiplayer;
    int rezolutieW;
    int rezolutieH;
};
class MMORPG : public Joc{
    public:
    string Tip_Joc="MMORPG";
    MMORPG(){
        this->Multiplayer= true;


    }
    int Max_players;
    int Ore_Gameplay;
    int Nr_Servers;
    int Nr_Harti;
    string Dificultate;

};
//Functie Creeare PC

void Creeare_Pc (Calculator *PC){




}


//Functie creeare montior

void Creeare_Monitor(Monitor *rez){
    int rez_mon;
    cout<<" Care este rezolutia monitorului dumneavoastra?"<<endl;
    cout<<" 1280 x 720  - 1"<<endl;
    cout<<" 1920 x 1080 - 2"<<endl;
    cout<<" 2560 x 1440 - 3"<<endl;
    cout<<" 3840 x 2160 - 4"<<endl;
    cout<<" 7680 x 4320 - 5"<<endl;
    cout<<" Introduce-ti numarul corespunzator rezolutiei dumneavoastra : ";


    do{ cin>>rez_mon;
    switch (rez_mon) {
        case 1:
            rez->Aspect_rezolutie(720,1280,"720p");
            break;
        case 2:
            rez->Aspect_rezolutie(1080,1920,"1080p");
            break;
        case 3:
            rez->Aspect_rezolutie(1440,2560,"1440p");
            break;
        case 4:
            rez->Aspect_rezolutie(2160,3840,"2160p/4K");
            break;
        case 5:
            rez->Aspect_rezolutie(4320,7680,"4320p/8K");
            break;
        default:
        {cout<<"Alegere incorecta ! Introduce-ti un raspuns corect."<<"\n";
            cout<<" Care este rezolutia monitorului dumneavoastra?"<<endl;
            cout<<" 1280 x 720  - 1"<<endl;
            cout<<" 1920 x 1080 - 2"<<endl;
            cout<<" 2560 x 1440 - 3"<<endl;
            cout<<" 3840 x 2160 - 4"<<endl;
            cout<<" 7680 x 4320 - 5"<<endl;
            cout<<" Introduce-ti numarul corespunzator rezolutiei dumneavoastra : ";

        }
    }
    }while( rez_mon<1 || rez_mon>5 );


}

//Functie Creeare Joc
/*void Creeare_Joc(){




}*/




int main() {
    Monitor *rez=new Monitor();
    Creeare_Monitor(rez);
    cout<<*rez;
    cout<<"\n"<<"Doresti sa distrugi acest monitor?  Da/Nu"<<"\n";
    string Raspuns;
    cin>>Raspuns;
    int Validare_Raspuns=0;
    rez->Distrugere_Monitor(Raspuns,Validare_Raspuns);










    return 0;
}
