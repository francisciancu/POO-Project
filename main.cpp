#include "Calculator.h"
#include "Joc.h"

int main() {
    Calculator *calc = new Calculator();

    calc->Create_Calculator();
    calc->Afisare_Specificatii();

    delete calc;

    Cerinte c(1, 1, 1, 1, 1);
    MMORPG m1(c, "Wow");
    std::cout << m1;
    return 0;
}
