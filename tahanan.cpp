#include "tahanan.h"
#include "relasi.h"

void createListparent(Listtersangka &L){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    first(L) = NULL;
    last(L) = NULL;
}
void insertFirstparent(Listtersangka &L, adrtersangka P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if (first(L) != NULL)
    {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
    else
    {
        first(L) = P;
        last(L) = P;
    }
}

void insertLastparent(Listtersangka &L, adrtersangka P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if (first(L) != NULL)
    {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
    else
    {
        first(L) = P;
        last(L) = P;
    }
}

void insertAfterparent(Listtersangka &L, adrtersangka Prec, adrtersangka P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if ((Prec!=NULL)&&(P!=NULL))
    {
        if (next(Prec)!=NULL)
        {
            next(P) = next(Prec);
            prev(P) = Prec;
            prev(next(Prec)) = P;
            next(Prec) = P;
        }
        else
        {
            insertLastparent(L, P);
        }
    }
}

void deleteFirstparent(Listtersangka &L, adrtersangka &P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if (first(L)!=NULL)
    {
        P = first(L);
        if (first(L) == last(L))
        {
            first(L) = NULL;
            last(L) = NULL;
        }
        else
        {
            first(L) = next(P);
            prev(first(L)) = NULL;
            next(P) = NULL;
        }
    }
}
void deleteLastparent(Listtersangka &L, adrtersangka &P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if (first(L)!=NULL)
    {
        P = last(L);
        if (first(L) == last(L))
        {
            first(L) = NULL;
            last(L) = NULL;
        }
        else
        {
            last(L) = prev(P);
            next(last(L)) = NULL;
            prev(P) = NULL;
        }
    }
}
void deleteAfterparent(Listtersangka &L, adrtersangka Prec, adrtersangka &P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    if (Prec!=NULL)
    {
        P = next(Prec);
        if (next(P) != NULL)
        {
            next(Prec) = next(P);
            prev(next(P)) = Prec;
            prev(P) = NULL;
            next(P) = NULL;
        }
        else
        {
            deleteLastparent(L, P);
        }
    }
}
adrtersangka alokasiparent(string name, string asal, int id, int age, int NIK, string jeniskelamin){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    adrtersangka P = new elmtersangka;
    info(P).id = id;
    info(P).namatersangka = name;
    info(P).asaltersangka =asal;
    info(P).umur = age;
    info(P).NIK = NIK;
    info(P).jeniskelamin = jeniskelamin;
    createListRelasi(Listkasus(P));
    next(P) = NULL;
    prev(P) == NULL;
    return P;
}
void dealokasiparent(adrtersangka &P){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    delete P;
}
adrtersangka findElmparent(Listtersangka L, int x){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    adrtersangka P = first(L);
    while (P != NULL && x != info(P).id)
    {
        P = next(P);
    }
    return P;
}
void printInfoparent(Listtersangka L){
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    adrtersangka P = first(L);
    if (P!=NULL){
        while (P!=NULL){
            cout<<"ID               : "<<info(P).id<<endl;
            cout<<"Nama             : "<<info(P).namatersangka<<endl;
            cout<<"Asal Tersangka   : "<<info(P).asaltersangka<<endl;
            cout<<"Umur             : "<<info(P).umur<<endl;
            cout<<"NIK              : "<<info(P).NIK<<endl;
            cout<<"Jenis Kelamin    : "<<info(P).jeniskelamin<<endl;
            P = next(P);
        }
    }
    else{
        cout<<"LIST KOSONG"<<endl;
    }
}
