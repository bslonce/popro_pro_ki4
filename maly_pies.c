
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DLNAZ 20 //długość nazwy, ogranicza błędy kodu od inputu

struct Bud    //budowa ciała małego psa
{
    int kon;    //ilość kończyn
    char kol[DLNAZ];  //kolor małego psa
};
struct Ogo  //budowa ogona małego psa
{
    int dog; //długość ogona
    char kog[DLNAZ]; //kształt ogona
};
struct Zac  //zachowanie małego psa
{
    char tem[DLNAZ];    //temperament małego psa
};
struct Pies    //pies
{
    int wie;    //wiek małego psa
    char naz[DLNAZ];    //nazwa małego psa
    struct Bud bp;  //skroty do oddzielnych structow
    struct Ogo op;
    struct Zac zp;
};

int main ()
{
    struct Pies p1;
    FILE *ft;   //operacje na pozycjach miejsc zapisu, poźniejsze przenoszenie ich do pliku
    
    printf("Witaj w malych psach\n\n"); //witaj w malych psach
    printf("Poprosze podaj imie swojego malego psa, musi byc nie dluzsze niz 20 znakow i skladac sie tylko z malych liter angielskiego alfabetu (  :\n");
    scanf("%s", p1.naz);
    printf("Poprosze podaj temperament swojego malego psa, musi byc nie dluzszy niz 20 znakow i skladac sie tylko z malych liter angielskiego alfabetu (  :\n");
    scanf("%s", p1.zp.tem);
    printf("Poprosze podaj kolor swojego malego psa, musi byc nie dluzszy niz 20 znakow i skladac sie tylko z malych liter angielskiego alfabetu (  :\n");
    scanf("%s", p1.bp.kol);
    printf("Poprosze podaj kolor ogona swojego malego psa, musi byc nie dluzszy niz 20 znakow i skladac sie tylko z malych liter angielskiego alfabetu (  :\n");
    scanf("%s", p1.op.kog);
    printf("Poprosze podaj ilosc konczyn swojego malego psa, musi byc nie wieksza niz 80 i skladac sie tylko cyfr (  :\n");
    scanf("%d", &p1.bp.kon);
    printf("Poprosze podaj wiek swojego malego psa (w ukonczonych latach), musi byc nie wiekszy niz 100 lat i skladac sie tylko cyfr (  :\n");
    scanf("%d", &p1.wie);
    printf("Poprosze podaj dlugosc ogona swojego malego psa (w centymetrach), musi byc nie dluzsza niz 300 cm i skladac sie tylko cyfr (  :\n");
    scanf("%d", &p1.op.dog);

    ft=fopen("ewidencja_psow.txt", "a");
    fprintf(ft, "Imie: %s\nTemperament: %s\nKolor malego psa: %s\nKolor ogona: %s\nIlosc konczyn: %d\nWiek [lata] %d\nDlugosc ogona [centymetry]: %d\n\n", p1.naz, p1.zp.tem, p1.bp.kol, p1.op.kog, p1.bp.kon, p1.wie, p1.op.dog);
    fclose(ft);
    
    printf("Imie: %s\n", p1.naz);
    fprintf(ft, "Imie: %s", p1.naz);
    printf("Temperament: %s\n", p1.zp.tem);
    fprintf(ft, "Kolor malego psa: %s", p1.zp.tem);
    printf("Kolor malego psa: %s\n", p1.bp.kol);
    fprintf(ft, "Kolor psa: %s", p1.bp.kol);
    printf("Kolor ogona: %s\n", p1.op.kog);
    fprintf(ft, "Kolor ogona: %s", p1.op.kog);
    printf("Ilosc konczyn: %d\n", p1.bp.kon);
    fprintf(ft, "Ilosc konczyn: %d\n", p1.bp.kon);
    printf("Wiek [lata]: %d\n", p1.wie);
    fprintf(ft, "Wiek [lata]: %d\n", p1.wie);
    printf("Dlugosc ogona [centymetry]: %d\n", p1.op.dog);
    fprintf(ft, "Dlugosc ogona [centymetry]: %d\n", p1.op.dog);
   
    return 0;
}