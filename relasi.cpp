#include "relasi.h"
#include "penjara.h"

void createListRelasi(Listrelasi &R){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    first(R) = NULL;
}

adrrelasi alokasiRelasi(adrkasus C){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    adrrelasi P = new elmrelasi;
    kasus(P) = C;
    next(P) = NULL;
    return P;
}

void dealokasiRelasi(adrrelasi &P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    delete P;
}

void insertRelasi(Listrelasi &R, adrrelasi P){

    next(P) = first(R);
    first(R) = P;
}

void deleteFirstRelasi(Listrelasi &R, adrrelasi &P){
    P = first(R);
    first(R) = next(P);
    next(P) = NULL;
}

void deleteAfterRelasi(Listrelasi &R, adrrelasi Prec, adrrelasi &P){
    if (Prec!=NULL && next(Prec)!=NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }

}
