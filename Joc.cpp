#include "Joc.h"

MMORPG::MMORPG(const Cerinte& cerArg,const std::string& n):
    cer(cerArg),
    game_name(n){}

Shooter_Singleplayer::Shooter_Singleplayer(const Cerinte &cerArg,const std::string& n):
    cer(cerArg),
    game_name(n){}

void Shooter_Singleplayer::print(std::ostream &os) const {
    os << "derived::Shooter_Singleplayer\n";
}

Shooter_Multiplayer::Shooter_Multiplayer(const Cerinte &cerArg,const std::string& n):
    cer(cerArg),
    game_name(n){}

void Shooter_Multiplayer::print(std::ostream &os) const {
    std::cout << "derived::Shooter_Multiplayer\n";
}

std::ostream &operator<<(std::ostream &os, const MMORPG &j) {
    os << "Numele jocului: " << j.game_name << '\n';
    os << j.cer;

    return os;
}

void MMORPG::print(std::ostream &os) const {
    os << "derived::MMORPG\n";
}


