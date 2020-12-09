#include "Cerinte.h"
#include <iostream>

Cerinte::Cerinte(int f, int r, int v, int w, int h):
    fr_proc(f),
    ram(r),
    vram(v),
    rezW(w),
    rezH(h){}

std::ostream &operator<<(std::ostream &os, const Cerinte &c) {
    os << "Frecventa procesor: " << c.fr_proc << '\n'
       << "RAM: " << c.ram << '\n'
       << "VRAM: "<< c.vram << '\n'
       << "Rezolutia minima: " << c.rezW << 'x' << c.rezH << '\n';
    return os;
}
