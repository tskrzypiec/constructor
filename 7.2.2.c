#include <stdio.h>


struct trojkat {

    double a, b, c;

};

double obwod(struct trojkat t) {

    return t.a + t.b + t.c; // obwod trojkata

}


void przypisz(struct trojkat troj1,struct trojkat * troj2)
{

    *troj2=troj1; // przepisanie wszytskich pól troj1 do troj2

}

int main() {

    struct trojkat troj1 = {  // inicjalizacja struktury, skladniki porozdzielane przecinkami

            2,
            2,
            3

    };

    struct trojkat troj2;

    przypisz(troj1,&troj2);  // adres struktury troj2


    double wynik = obwod(troj1);  // argumentem jest struktura przyklad_1
    double wynik2 = obwod(troj2);

    printf("obwód trójkąta 1 wynosi!%.2f\n", wynik);

    printf("obwód trójkąta 2 wynosi!%.2f\n", wynik2);

    return 0;
}