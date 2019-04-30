#ifndef TAHANAN_H_INCLUDED
#define TAHANAN_H_INCLUDED

#include "relasi.h"

#include <iostream>
#include <stdlib.h>

#define next(P) P->next
#define prev(P) P->prev
#define Listkasus(P) P->Listkasus
#define first(L) L.first
#define last(L) L.last
#include <string>
using namespace std;

struct infotype_tersangka
{
    int id;
    string namatersangka;
    string asaltersangka;
    int umur;
    int NIK;
    string jeniskelamin;
};

typedef struct elmtersangka *adrtersangka;

struct elmtersangka
{
    infotype_tersangka info;
    Listrelasi Listkasus;
    adrtersangka next;
    adrtersangka prev;
};

struct Listtersangka
{
    adrtersangka first;
    adrtersangka last;
};

void createListparent(Listtersangka &L);
adrtersangka alokasiparent(string name, string asal, int id, int age, int NIK, string jeniskelamin);
void insertFirstparent(Listtersangka &L, adrtersangka P);
void insertAfterparent(Listtersangka &L, adrtersangka Prec, adrtersangka P);
void insertLastparent(Listtersangka &L, adrtersangka P);
void deleteFirstparent(Listtersangka &L, adrtersangka &P);
void deleteLastparent(Listtersangka &L, adrtersangka &P);
void deleteAfterparent(Listtersangka &L, adrtersangka Prec, adrtersangka &P);
void dealokasiparent(adrtersangka &P);
adrtersangka findElmparent(Listtersangka L, int x);
void printInfoparent(Listtersangka L);

#endif // TAHANAN_H_INCLUDED
