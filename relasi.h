#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "penjara.h"

#include <iostream>
#include <stdlib.h>

#define kasus(R) R->kasus
#define next(R) R->next
#define first(L) L.first

using namespace std;

typedef struct elmrelasi *adrrelasi;

struct elmrelasi
{
    adrkasus kasus;
    adrrelasi next;
};

struct Listrelasi
{
    adrrelasi first;
};

void createListRelasi(Listrelasi &R);
void insertRelasi(Listrelasi &R, adrrelasi P);
void deleteFirstRelasi(Listrelasi &R, adrrelasi &P);
void deleteAfterRelasi(Listrelasi &R, adrrelasi Prec, adrrelasi &P);
adrrelasi alokasiRelasi(adrkasus C);
void dealokasiRelasi(adrrelasi &P);

#endif // RELASI_H_INCLUDED
