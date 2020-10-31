#include <iostream>


using namespace std;

class Calculator{
private:
    int Nr_RAM;
    int Frecventa_Procesor;
    int Nr_VRAM;
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
    string Tip_Joc="MMORPG";
};

void Creeare_Monitor(Monitor *rez){
    int rez_mon;
    cout<<" Care este rezolutia monitorului dumneavoastra?"<<endl;
    cout<<" 1280 x 720  - 1"<<endl;
    cout<<" 1920 x 1080 - 2"<<endl;
    cout<<" 2560 x 1440 - 3"<<endl;
    cout<<" 3840 x 2160 - 4"<<endl;
    cout<<" 7680 x 4320 - 5"<<endl;
    cout<<" Introduce-ti numarul corespunzator rezolutiei dumneavoastra : ";
    cin>>rez_mon;

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

    }
}


//Functie creeare montir

int main() {
    Monitor *rez=new Monitor();
    Creeare_Monitor(rez);
    cout<<*rez;
    delete rez; // test destructor

    return 0;
}
