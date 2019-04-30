#include "penjara.h"

void createListkasus(Listkasus &L)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    first(L) = NULL;
    last(L) = NULL;
}

adrkasus alokasikasus(int id, int masatahanan, string namakasus, string jeniskasus)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    adrkasus P = new elmkasus;
    info(P).id = id;
    info(P).jeniskasus = jeniskasus;
    info(P).masatahanan = masatahanan;
    info(P).namakasus = namakasus;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void dealokasikasus(adrkasus &P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    delete P;
}

void insertFirstkasus(Listkasus &L, adrkasus P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    if((first(L) != NULL) &&(last(L) != NULL))
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
void insertLastkasus(Listkasus &L, adrkasus P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
    NIM   : 1301184092
    */
    if((first(L) != NULL) &&(last(L) != NULL))
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
void insertAfterkasus(Listkasus &L, adrkasus Prec, adrkasus P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    if(Prec != NULL)
    {
        next(P) = next(Prec);
        next(Prec) = P;
        prev(next(P)) = P;
    }
}
void deleteFirstkasus(Listkasus &L, adrkasus &P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    if(first(L) != last(L))
    {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
    else
    {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteLastkasus(Listkasus &L, adrkasus &P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
    NIM   : 1301184092
    */
    if(first(L) != last(L))
    {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    }
    else
    {
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfterkasus(Listkasus &L, adrkasus Prec, adrkasus &P)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
    NIM   : 1301184092
    */
    if(Prec != NULL)
    {
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        prev(P) = NULL;
        next(P) = NULL;

    }
}

adrkasus findElmkasus(Listkasus L, int x)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    adrkasus P = first(L);
    while(P != NULL)
    {
        if(info(P).id == x)
        {
            return P;
        }
        else
        {
            P = next(P);
        }
    }
    return P;
}
void printInfopenjara(Listkasus L)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    adrkasus P = first(L);
    if(P == NULL)
    {
        cout<<"[Empty]"<<endl;
    }
    else
    {
        while(P != NULL)
        {
            cout<<"ID           = "<<info(P).id<<endl;
            cout<<"Nama Kasus   = "<<info(P).namakasus<<endl;
            cout<<"Jenis Kasus  = "<<info(P).jeniskasus<<endl;
            cout<<"Masa Tahanan = "<<info(P).masatahanan<<endl;
            P = next(P);
        }
    }
}
