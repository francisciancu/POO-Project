#pragma once

#include <string>

class Cerinte {
public:
    Cerinte() = default;
    Cerinte(int, int, int, int, int);
    friend std::ostream& operator<<(std::ostream&,
                                    const Cerinte&);
private:
    int fr_proc, ram, vram, rezW, rezH;
};
