#pragma once

#include "Cerinte.h"
#include <string>
#include <iostream>

class Joc {
public:
    ~Joc() = default;
private:
    virtual void print(std::ostream& os) const{
        os << "base class\n";
    }
};

class Multiplayer{

    bool Multiplayer=true;
};
class Singleplayer{

    bool Multiplayer=false;
};

class MMORPG : public Joc, public Multiplayer{
public:
    MMORPG(const Cerinte&,const std::string&);
    friend std::ostream& operator<<(std::ostream&,const MMORPG&);
    void print(std::ostream &os) const override;
private:
    std::string game_name;
    Cerinte cer;
};

class Shooter_Singleplayer : public Joc, public Singleplayer{
public:
    Shooter_Singleplayer(const Cerinte&,const std::string&);
    friend std::ostream& operator<<(std::ostream&,const Shooter_Singleplayer&);
    void print(std::ostream &os) const override;
private:
    std::string game_name;
    Cerinte cer;
};

class Shooter_Multiplayer : public Joc, public Multiplayer{
public:
    Shooter_Multiplayer(const Cerinte&,const std::string&);
    void print(std::ostream &os) const override;
private:
    std::string game_name;
    Cerinte cer;
};

