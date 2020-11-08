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
   //void Distrugere_Monitor(string Raspuns,int Validare_Raspuns){
//
  //      for_each(Raspuns.begin(), Raspuns.end(), [](char & c){
   //         c =tolower(c);
   //     });
   //     Raspuns.erase(remove(Raspuns.begin(), Raspuns.end(), ' '), Raspuns.end());
  //      if(Raspuns == "da")
   //     {
   //         delete this; // test destructor
   //         int Validare_Raspuns=1;
   //     }
//
 //       else if (Raspuns == "nu")
 //       {
 //           cout<<"OK! But don't forget about it !"<<"\n";
  //          int Validare_Raspuns=1;
  //      }
  //      else
   //     {cout<<"Raspuns Invalid !"<<"\n"<<"Introduce-ti un raspuns corect. Da/Nu"<<"\n";
  //          cin>>Raspuns;
  //          this->Distrugere_Monitor(Raspuns,Validare_Raspuns);}


 //   }



};

class Joc{
protected:
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
protected:
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
//Functie Creare PC

void Creare_Pc (Calculator *PC){
cout<<" Introduce-ti numarul de GB de RAM dorit ( Numar Maxim 64 ) : "<<'\n';
string Nr_RAM_Introdus;
getline(cin,Nr_RAM_Introdus);
int Nr_RAM=stoi(Nr_RAM_Introdus);
int validare1=1;
while(validare1==1){
if(Nr_RAM>64 || Nr_RAM<0)
{
        cout << "Alegere incorecta ! Introduce-ti un raspuns corect." << "\n";
        getline(cin,Nr_RAM_Introdus);
        Nr_RAM=stoi(Nr_RAM_Introdus);
        validare1=1;}
    else
    {
        validare1=0;
    }
}

string Nr_VRAM_Introdus;
cout <<"Introduce-ti numarul de Gb de VRAM dorit ( Numar Maxim 16 ) : "<< "\n";
getline(cin,Nr_VRAM_Introdus);
int Nr_VRAM=stoi(Nr_VRAM_Introdus);
int validare2=1;
while(validare2==1){
    if(Nr_VRAM>16 || Nr_VRAM<0)
    {
        cout << "Alegere incorecta ! Introduce-ti un raspuns corect." << "\n";
        getline(cin,Nr_VRAM_Introdus);
        Nr_VRAM=stoi(Nr_VRAM_Introdus);
        validare2=1;}
        else
            validare2=0;
    }

string Frecventa_Procesor_Introdusa;
cout<<"Introduce-ti numarul de GHz ai procesorului ( Numar Maxim 6 ) : "<< "\n";
getline(cin,Frecventa_Procesor_Introdusa);
int Frecventa_Procesor=stoi(Frecventa_Procesor_Introdusa);
    int validare3=1;
    while(validare3==1){
        if(Frecventa_Procesor>6 || Frecventa_Procesor<0)
        {
            cout << "Alegere incorecta ! Introduce-ti un raspuns corect." << "\n";
            getline(cin,Frecventa_Procesor_Introdusa);
            Frecventa_Procesor=stoi(Frecventa_Procesor_Introdusa);
            validare3=1;}
            else
            validare3=0;
        }

    string Nume_PC;
    cout<<" Introduce-ti numele calculatorului "<<'\n';
    getline(cin,Nume_PC);
    if(validare1==validare2==validare3==0){
        cout<<"Numele calculatorului este : "<<Nume_PC<<'\n';
        cout<<"Numar Gb RAM : "<<Nr_RAM<<'\n';
        cout<<"Numar Gb VRAM : "<<Nr_VRAM<<'\n';
        cout<<"Numar de Ghz ai procesorului : "<<Frecventa_Procesor<<'\n';

    }


}



///std make uique
//Functie Creare Montior

void Creare_Monitor(Monitor *rez){

    cout<<" Care este rezolutia monitorului dumneavoastra?"<<endl;
    cout<<" 1280 x 720  - 1"<<endl;
    cout<<" 1920 x 1080 - 2"<<endl;
    cout<<" 2560 x 1440 - 3"<<endl;
    cout<<" 3840 x 2160 - 4"<<endl;
    cout<<" 7680 x 4320 - 5"<<endl;
    cout<<" Introduce-ti numarul corespunzator rezolutiei dumneavoastra : ";

    string rez_mon;
    getline(cin, rez_mon);
    rez_mon.erase(remove(rez_mon.begin(), rez_mon.end(), ' '), rez_mon.end());
    while(rez_mon.size() > 1 || (rez_mon[0] < '1' || rez_mon[0] > '5')) {
        cout << "Alegere incorecta ! Introduce-ti un raspuns corect." << "\n";
        getline(cin, rez_mon);
        rez_mon.erase(remove(rez_mon.begin(), rez_mon.end(), ' '), rez_mon.end());
    }
    char a = rez_mon[0];
//stoi
    switch (a) {
        case '1':
            rez->Aspect_rezolutie(720,1280,"720p");
            break;
        case '2':
            rez->Aspect_rezolutie(1080,1920,"1080p");
            break;
        case '3':
            rez->Aspect_rezolutie(1440,2560,"1440p");
            break;
        case '4':
            rez->Aspect_rezolutie(2160,3840,"2160p/4K");
            break;
        case '5':
            rez->Aspect_rezolutie(4320,7680,"4320p/8K");
            break;
        default:
            break;
    }
}

//Functie Creeare Joc
/*void Creeare_Joc(){




}*/




int main() {
    cout<<"Doriti sa creati un nou monitor ? "<<'\n';
    cout<<"0-NU"<<'\n';
    cout<<"1-DA"<<'\n';
    string ras1;
    getline(cin,ras1);
   ras1.erase(remove(ras1.begin(), ras1.end(), ' '), ras1.end());
    int ans1=stoi(ras1);
    if(ans1 = 1)
    {
        Monitor *rez=new Monitor();
        Creare_Monitor(rez);
        cout<<*rez;
    }
    else {
       return 0;
    }

    //cout<<"\n"<<"Doresti sa distrugi acest monitor?  Da/Nu"<<"\n";
    //string Raspuns;
    //getline(cin, Raspuns);
    //int Validare_Raspuns=0;
   //rez->Distrugere_Monitor(Raspuns,Validare_Raspuns);

    cout<<"Doriti sa creati un nou calculator ? "<<'\n';
    cout<<"0-NU"<<'\n';
    cout<<"1-DA"<<'\n';
    string ras2;
    getline(cin,ras2);
    ras2.erase(remove(ras2.begin(), ras2.end(), ' '), ras2.end());
    int ans2=stoi(ras2);
    if(ans2==1)
    {
        Calculator *PC=new Calculator();
        Creare_Pc(PC);
    }
    else {
        return 0;
    }



    return 0;
}
