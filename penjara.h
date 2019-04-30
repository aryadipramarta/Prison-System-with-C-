#ifndef PENJARA_H_INCLUDED
#define PENJARA_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#define info(C) C->info
#define next(C) C->next
#define prev(C) C->prev
#define first(L) L.first
#define last(L) L.last

using namespace std;

struct infotype_kasus
{
    int id;
    int masatahanan;
    string namakasus;
    string jeniskasus;
};

typedef struct elmkasus *adrkasus;

struct elmkasus
{
    infotype_kasus info;
    adrkasus next;
    adrkasus prev;
};

struct Listkasus
{
    adrkasus first;
    adrkasus last;
};

void createListkasus(Listkasus &L);
adrkasus alokasikasus(int id, int masatahanan,string namakasus, string jeniskasus);
void dealokasikasus(adrkasus &P);
void insertFirstkasus(Listkasus &L, adrkasus P);
void insertLastkasus(Listkasus &L, adrkasus P);
void insertAfterkasus(Listkasus &L, adrkasus Prec, adrkasus P);
void deleteFirstkasus(Listkasus &L, adrkasus &P);
void deleteLastkasus(Listkasus &L, adrkasus &P);
void deleteAfterkasus(Listkasus &L, adrkasus Prec, adrkasus &P);
adrkasus findElmkasus(Listkasus L, int x);
void printInfokasus(Listkasus L);



#endif // PENJARA_H_INCLUDED
