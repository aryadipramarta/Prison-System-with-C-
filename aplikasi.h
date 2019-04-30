#ifndef APLIKASI_H_INCLUDED
#define APLIKASI_H_INCLUDED

#include <iostream>
#include <string>
#include <stdlib.h>
#include "tahanan.h"
#include "penjara.h"
#include "relasi.h"

using namespace std;

void insert_datatersangka(Listtersangka &Lp);
void insert_datakasus(Listkasus &Lc);
void view_datatersangka(Listtersangka Lp);
void view_datakasus(Listkasus Lc);
void search_datatersangka(Listtersangka Lp, int X);
void search_datakasus(Listkasus Lc, int X);
void relasikan(Listkasus Lc, Listtersangka &Lp);
bool cekrelasi(Listrelasi Lr, Listkasus Lc, Listtersangka Lp, int idtersangka, int idkasus);
void keteranganrelasi(Listkasus Lc, Listtersangka Lp);
void putusrelasi(Listkasus Lc, Listtersangka &Lp);
void printAll (Listtersangka P, Listkasus C);
void deleteParent (Listtersangka &P);
void deletekasus (Listtersangka &P, Listkasus &C);
int totalsangkaan (Listtersangka Lp, Listkasus Lc);
adrrelasi masaterlama (Listtersangka LP, Listkasus LC, int ID);
void jummasaterlama(Listkasus LC, Listtersangka LP);
void printChildOfParent (Listtersangka LP, Listkasus C);
#endif // APLIKASI_H_INCLUDED
