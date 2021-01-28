#include "Kalkulator.h"



int main() {
    struct Kalkulator *mojKalkulator = WczytajDane();
    Dzialanie(mojKalkulator);
    WypiszDane(mojKalkulator);
    return 0;
}

