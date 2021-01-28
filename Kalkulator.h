#include <stdio.h>
#include <stdlib.h>

struct Kalkulator {
    char operacja;
    float skladnik1, skladnik2, wynik;
};

struct Kalkulator *WczytajDane() {
    printf("Jakie dzialanie chcesz wykonac:");
    struct Kalkulator *kalkulator = (struct Kalkulator *) malloc(
            sizeof(struct Kalkulator));
    scanf("%f %c %f", &(kalkulator->skladnik1), &(kalkulator->operacja),
          &(kalkulator->skladnik2));
    return kalkulator;
}

void Dzialanie(struct Kalkulator *kalkulator) {

    switch (kalkulator->operacja) {
        case '+':
            kalkulator->wynik = kalkulator->skladnik1 + kalkulator->skladnik2;
            break;

        case '-':
            kalkulator->wynik = kalkulator->skladnik1 - kalkulator->skladnik2;
            break;

        case '*':
            kalkulator->wynik = kalkulator->skladnik1 * kalkulator->skladnik2;
            break;

        case '/':
            kalkulator->wynik = kalkulator->skladnik1 / kalkulator->skladnik2;
            break;

        default:
            printf("Podales niewlasciwy symbol dzialania (+, -, *, /)\n");
    }
}

void WypiszDane(struct Kalkulator *kalkulator) {
    printf("\n Wynik=%.2f", kalkulator->wynik);
}


