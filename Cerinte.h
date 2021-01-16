#pragma once

#include <string>

class Cerinte {
public:
    Cerinte() = default;
    Cerinte(int, int, int, int, int);
    friend std::ostream& operator<<(std::ostream&,const Cerinte&);

    int getFrProc() const{
        return this -> fr_proc;
    }

    int getRAM() const{
        return ram;
    }

    int getVRAM() const{
        return vram;
    }

    int getrezW() const{
        return rezW;
    }

    int getrezH() const{
        return rezH;
    }

private:
    int fr_proc, ram, vram, rezW, rezH;
};
