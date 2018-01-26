#include <stdio.h>


struct trojkat {

    double a, b, c;

};

double obwod(struct trojkat t) {

    return t.a + t.b + t.c; // obwod trojkata

}

int main() {

    struct trojkat przyklad_1 = {  // inicjalizacja struktury, skladniki porozdzielane przecinkami

            2,
            2,
            3

    };

    double wynik = obwod(przyklad_1);  // argumentem jest struktura przyklad_1

    printf("obwód trójkąta wynosi!%.2f\n", wynik);

    return 0;
}