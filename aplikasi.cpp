#include "aplikasi.h"

void insert_datatersangka(Listtersangka &Lp)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    int ID, umur, NIK;
    string asal, nama, jeniskelamin;
    cout<<"____________MASUKKAN DATA TERSANGKA ___________"<<endl;
    cout<<"ID               : ";
    cin>>ID;
    cin.ignore();
    cout<<"Nama             : ";
    getline(cin,nama);
    cout<<"Asal Tersangka   : ";
    getline(cin,asal);
    cout<<"Umur             : ";
    cin>>umur;
    cout<<"NIK              : ";
    cin>>NIK;
    cin.ignore();
    cout<<"Jenis Kelamin    : ";
    getline(cin,jeniskelamin);
    adrtersangka P = alokasiparent(nama,asal,ID,umur,NIK,jeniskelamin);
    if (findElmparent(Lp, ID) == NULL)
    {
        if ((first(Lp) == NULL)||(info(P).id < info(first(Lp)).id))
        {
            insertFirstparent(Lp, P);
        }
        else if (info(P).id > info(last(Lp)).id)
        {
            insertLastparent(Lp, P);
        }
        else
        {
            adrtersangka Q = first(Lp);
            while (info(next(Q)).id < info(P).id)
            {
                Q = next(Q);
            }
            insertAfterparent(Lp, Q, P);
        }
        cout<<endl;
        cout << "Data Berhasil Dimasukkan! " << endl;
    }
    else
    {
        dealokasiparent(P);
        cout << "Maaf ID Yang Anda Masukkan Sudah Ada !!! " << endl;
    }
}

void insert_datakasus(Listkasus &Lc)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    system("cls");
    int ID, nomorsel, masatahanan;
    string namakasus, jeniskasus;
    cout<<"____________MASUKKAN DATA KASUS ___________"<<endl;
    cout<<"ID               : ";
    cin>>ID;
    cin.ignore();
    cout<<"Nama Kasus       : ";
    getline(cin,namakasus);
    cout<<"Jenis Kasus      : ";
    getline(cin,jeniskasus);
    cout<<"Masa Tahanan     : ";
    cin>>masatahanan;
    adrkasus P = alokasikasus(ID,masatahanan,namakasus,jeniskasus);
    if (findElmkasus(Lc, ID)==NULL)
    {
        if ((first(Lc)==NULL)||(info(P).id < info(first(Lc)).id))
        {
            insertFirstkasus(Lc, P);
        }
        else if (info(P).id > info(last(Lc)).id)
        {
            insertLastkasus(Lc, P);
        }
        else
        {
            adrkasus Q = first(Lc);
            while (info(next(Q)).id < info(P).id)
            {
                Q = next(Q);
            }
            insertAfterkasus(Lc, Q, P);
        }
        cout << "Data Berhasil Dimasukkan!" << endl;
    }
    else
    {
        dealokasikasus(P);
        cout << "Maaf, ID Yang Anda Masukkan Sudah Ada !!!" << endl;
    }
}

void view_datatersangka(Listtersangka Lp)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    adrtersangka P;
    P = first(Lp);
    if (P!=NULL)
    {
        cout<<"_______________________________"<<endl;
        cout<<"------- DATA TERSANGKA --------"<<endl;
        cout<<"_______________________________"<<endl;
        cout<<endl;
        while (P!=NULL)
        {
            cout<<"ID            : "<<info(P).id<<endl;
            cout<<"Nama          : "<<info(P).namatersangka<<endl;
            cout<<"Asal Tahanan  : "<<info(P).asaltersangka<<endl;
            cout<<"Umur          : "<<info(P).umur<<endl;
            cout<<"NIK           : "<<info(P).NIK<<endl;
            cout<<"Jenis Kelamin : "<<info(P).jeniskelamin<<endl;
            cout<<"-------------------------------"<<endl;
            P = next(P);
        }
    }
    else
    {
        cout<<"LIST KOSONG"<<endl;
    }
}

void view_datakasus(Listkasus Lc)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    system("cls");
    adrkasus P;
    P = first(Lc);
    if (P!=NULL)
    {
        cout<<"_______________________________"<<endl;
        cout<<"--------  DATA KASUS  ---------"<<endl;
        cout<<"_______________________________"<<endl;
        cout<<endl;
        while (P!=NULL)
        {
            cout<<"ID            : "<<info(P).id<<endl;
            cout<<"Nama Kasus    : "<<info(P).namakasus<<endl;
            cout<<"Jenis Kasus   : "<<info(P).jeniskasus<<endl;
            cout<<"Masa Tahanan  : "<<info(P).masatahanan<<endl;
            cout<<"-------------------------------------"<<endl;
            P = next(P);
        }
    }
    else
    {
        cout<<"LIST KOSONG"<<endl;
    }
}

void search_datatersangka(Listtersangka Lp, int X)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    do
    {
        cout<<"____________________________________"<<endl;
        cout<<"------- SEARCH DATA TAHANAN --------"<<endl;
        cout<<"____________________________________"<<endl;
        cout<<endl;
        cout<<"Masukkan ID Tersangka :";
        cin>>X;
    }
    while(X == NULL);
    adrtersangka P = findElmparent(Lp,X);
    if (P != NULL)
    {
        cout<<"DATA BERHASIL DITEMUKAN"<<endl;
        cout<<"ID            : "<<info(P).id<<endl;
        cout<<"Nama          : "<<info(P).namatersangka<<endl;
        cout<<"Asal Tahanan  : "<<info(P).asaltersangka<<endl;
        cout<<"Umur          : "<<info(P).umur<<endl;
        cout<<"NIK           : "<<info(P).NIK<<endl;
        cout<<"Jenis Kelamin : "<<info(P).jeniskelamin<<endl;
        cout<<"----------------------------------"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"DATA TIDAK DITEMUKAN !!!";
    }
}

void search_datakasus(Listkasus Lc, int X)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    do
    {
        cout<<"__________________________________"<<endl;
        cout<<"------- SEARCH DATA KASUS --------"<<endl;
        cout<<"__________________________________"<<endl;
        cout<<endl;
        cout<<"Masukkan ID Kasus :";
        cin>>X;
    }
    while(X == NULL);
    adrkasus P = findElmkasus(Lc, X);
    if (P != NULL)
    {
        cout<<"DATA BERHASIL DITEMUKAN"<<endl;
        cout<<"ID            : "<<info(P).id<<endl;
        cout<<"Nama Kasus    : "<<info(P).namakasus<<endl;
        cout<<"Jenis Kasus   : "<<info(P).jeniskasus<<endl;
        cout<<"Masa Tahanan  : "<<info(P).masatahanan<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"DATA TIDAK DITEMUKAN !!";
    }
}
bool cekrelasi(Listkasus Lc, Listtersangka Lp,int idtersangka, int idkasus)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    adrkasus C = findElmkasus(Lc,idkasus);
    adrtersangka P = findElmparent(Lp,idtersangka);
    if (P!=NULL && C!=NULL)
    {
        adrrelasi temu = first(Listkasus(P));
        while (temu !=NULL)
        {
            if (C == kasus(temu))
            {
                return true;
            }
            temu = next(temu);
        }
    }
    return false;
}
void relasikan(Listkasus Lc, Listtersangka &Lp)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    int idtersangka, idkasus;
    cout<<"_______________________________"<<endl;
    cout<<"-------   RELASIKAN    --------"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<endl;
    cout<<"Masukkan ID Tersangka    : ";
    cin>>idtersangka;
    cout<<endl;
    cout<<"Masukkan ID Kasus        : ";
    cin>>idkasus;
    cout<<endl;
    adrkasus P = findElmkasus(Lc, idkasus);
    adrtersangka Q = findElmparent(Lp, idtersangka);
    bool J = cekrelasi(Lc,Lp,idtersangka,idkasus);
    if(P != NULL && Q != NULL && J == false)
    {
        adrrelasi R = alokasiRelasi(P);
        insertRelasi(Listkasus(Q),R);
        cout << "Relasi Berhasil Dilakukan" << endl;
    }
    if(P == NULL)
    {
        cout<<"Gagal! ID Kasus tidak ditemukan!"<<endl;
    }
    if(Q == NULL)
    {
        cout<<"Gagal! ID Tersangka tidak ditemukan!"<<endl;
    }
    if (J != NULL)
    {
        cout<<"TERSANGKA TELAH TERVONIS KASUS YANG SAMA !!!"<<endl;
    }
}

void keteranganrelasi(Listkasus Lc, Listtersangka Lp)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    system("cls");
    int idtersangka,idkasus;
    do
    {
        cout<<"__________________________________"<<endl;
        cout<<"------- KETERANGAN RELASI --------"<<endl;
        cout<<"__________________________________"<<endl;
        cout<<endl;
        cout<<"Masukkan ID Tersangka : ";
        cin>>idtersangka;
        cout<<"Masukkan ID Kasus     : ";
        cin>>idkasus;
    }
    while(idtersangka == NULL && idkasus == NULL);
    bool hasil = cekrelasi(Lc,Lp,idtersangka,idkasus);
    if(hasil == true)
    {
        cout<<endl;
        cout<<"Relasi Ditemukan!"<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Relasi Tidak Ditemukan!"<<endl;
    }
}
void putusrelasi(Listkasus Lc, Listtersangka &Lp)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    system("cls");
    adrrelasi temu;
    int idtersangka, idkasus;
    cout<<"_____________________________"<<endl;
    cout<<"------- PUTUS RELASI --------"<<endl;
    cout<<"_____________________________"<<endl;
    cout<<endl;
    cout<<"Masukkan ID Tersangka    : ";
    cin>>idtersangka;
    cout<<"Masukkan ID Kasus        : ";
    cin>>idkasus;
    adrtersangka P = findElmparent(Lp,idtersangka);
    adrkasus C = findElmkasus(Lc,idkasus);
    bool Q = cekrelasi(Lc,Lp,idtersangka,idkasus);
    if(P != NULL && C != NULL && Q!= false)
    {
        adrrelasi R = first(Listkasus(P));;
        if (kasus(R) == C)
        {
            deleteFirstRelasi(Listkasus(P), R);
            dealokasiRelasi(R);
        }
        else
        {
            adrrelasi S = R;
            while (S!=NULL && kasus(next(S))!=C)
            {
                S = next(S);
            }
            deleteAfterRelasi(Listkasus(P), S, R);
            dealokasiRelasi(R);
        }
        cout << "Berhasil Diputuskan" << endl;
    }
    if (P == NULL)
    {
        cout << "Gagal! ID Tersangka Tidak Ditemukan!" << endl;
    }
    if (C == NULL)
    {
        cout << "Gagal! ID Kasus Tidak Ditemukan!" << endl;
    }
    if (Q == false)
    {
        cout <<"Tersangka Tidak Divonis Dengan Kasus Tersebut !!!" << endl;
    }

}

void printAll (Listtersangka P, Listkasus C)
{
    system("cls");
    adrtersangka Q = first(P);
    adrrelasi R;
    cout<<"_______________________________"<<endl;
    cout<<"-------- DATA LENGKAP ---------"<<endl;
    cout<<"_______________________________"<<endl;
    while (Q!=NULL)
    {
        cout <<"NAMA TERSANGKA  : "<<info(Q).namatersangka<<endl;
        cout <<"ID              : "<<info(Q).id<<endl;
        cout <<"ASAL            : "<<info(Q).asaltersangka<<endl;
        cout <<"UMUR            : "<< info(Q).umur<<endl;
        cout <<"NIK             : "<< info(Q).NIK<<endl;
        cout <<"JENIS KELAMIN   : "<< info(Q).jeniskelamin<<endl;
        cout <<"--------------------------"<<endl;
        R = first(Listkasus(Q));
        if (R==NULL)
        {
            cout << "[Tersangka Belum Divonis!]" << endl<<endl;
        }
        else
        {
            cout<<"Kasus Yang Dilakukan : "<<endl;
            while (R!=NULL)
            {
                cout <<"--------------------------"<<endl;
                cout<<"ID            : "<<info(kasus(R)).id<<endl;
                cout<<"NAMA KASUS    : "<<info(kasus(R)).namakasus<<endl;
                cout<<"JENIS KASUS   : "<<info(kasus(R)).jeniskasus<<endl;
                cout<<"MASA TAHANAN  : "<<info(kasus(R)).masatahanan<<endl;
                R = next(R);
            }
        }
        Q = next(Q);
    }
    cout << endl;
}

void deletekasus (Listtersangka &P, Listkasus &C)
{
    /*Nama  : KOMANG JNANA SHINDU PUTRA
      NIM   : 1301184092
    */
    int idkasus;
    cout << "Masukkan ID Kasus   : ";
    cin >> idkasus;
    adrkasus Prevpenj, penj = findElmkasus(C, idkasus);
    if (penj!=NULL)
    {
        adrtersangka tahn = first(P);
        while (tahn!=NULL)
        {
            adrrelasi temp, rel = first(Listkasus(tahn));
            while (rel!=NULL)
            {
                if (kasus(rel) == penj)
                {
                    rel = next(rel);
                    deleteFirstRelasi(Listkasus(tahn), temp);
                    dealokasiRelasi(temp);
                }
                else if (next(rel)!=NULL && kasus(next(rel)) == penj)
                {
                    deleteAfterRelasi(Listkasus(tahn),rel, temp);
                    dealokasiRelasi(temp);
                }
                else
                {
                    rel = next(rel);
                }
            }
            tahn = next(tahn);
        }
        if (penj==first(C))
        {
            deleteFirstkasus(C, penj);
        }
        else if (penj == last(C))
        {
            deleteLastkasus(C, penj);
        }
        else
        {
            Prevpenj = prev(penj);
            deleteAfterkasus(C, Prevpenj, penj);
        }
        dealokasikasus(penj);
        cout << "Data Kasus Telah Berhasil Dihapus!" << endl;
    }
    else
    {
        cout << "Gagal! ID Penjara Tidak Ditemukan" << endl;
    }
}

int totalsangkaan (Listtersangka Lp, Listkasus Lc)
{
    adrtersangka Q = first(Lp);
    adrrelasi R;
    int jumlah = 0;
    while (Q!=NULL)
    {
        R = first(Listkasus(Q));
        while (R!=NULL)
        {
            jumlah++;
            R = next(R);
        }
        Q = next(Q);
    }
    return jumlah;
}

adrrelasi masaterlama (Listtersangka LP, Listkasus LC, int ID)
{
    adrtersangka Q = findElmparent(LP, ID);
    adrrelasi R, temp;
    if (Q!=NULL)
    {
        temp = first(Listkasus(Q));
        R = next(temp);
        while (R != NULL)
        {
            if (info(kasus(R)).masatahanan > info(kasus(temp)).masatahanan)
            {
                temp = R;
            }
            R = next(R);
        }
    }
    return temp;
}

void jummasaterlama(Listkasus LC, Listtersangka LP)
{
    int ID;
    cout<<"Masukkan ID Tersangka : ";
    cin>>ID;
    adrtersangka Q = findElmparent(LP, ID);
    if (Q!=NULL)
    {
        adrrelasi test = first(Listkasus(Q));
        if(test != NULL)
        {
            adrrelasi R = masaterlama(LP,LC,ID);
            if(R != NULL)
            {
                cout<<"Tersangka dengan nama : "<<info(Q).namatersangka<< " divonis dengan hukuman terlama selama "<<info(kasus(R)).masatahanan<<" tahun"<<endl;
            }

        }
        else
        {
            cout<<"Tersangka Belum Divonis!"<<endl;
        }
    }
    else
    {
        cout<<"ID Tersangka Tidak Ditemukan!"<<endl;
    }
}

void printChildOfParent (Listtersangka LP, Listkasus LC)
{
    int ID;
    cout<<"Masukkan ID Tersangka : ";
    cin>>ID;
    adrtersangka Q = findElmparent(LP,ID);
    if (Q != NULL)
    {
        cout << "Tersangka Dengan Nama : " << info(Q).namatersangka <<endl;
        adrrelasi R = first(Listkasus(Q));
        if (R==NULL)
        {
            cout<<"Belum Divonis"<<endl;
        }
        else
        {
            cout <<"Kasus : " << endl;
            while (R != NULL)
            {
                cout << "-> " << info(kasus(R)).namakasus << endl;
                R = next(R);
            }
        }
    }
    else
    {
        cout << "Gagal! ID Tersangka Tidak Ditemukan" << endl;
    }
}
void deleteParent (Listtersangka &P)
{
    /*Nama  : I KOMANG GEDE ARYADI PRAMARTA
      NIM   : 1301184175
    */
    int idtersangka;
    cout<<"Masukkan ID Tersangka :      "<<endl;
    cin>>idtersangka;
    adrtersangka Q = findElmparent(P,idtersangka);
    if (Q!=NULL)
    {
        adrrelasi R = first(Listkasus(Q));
        while (R!=NULL)
        {
            if(kasus(R) != NULL)
            {
                kasus(R) = NULL;
            }
            R = next(R);
        }
        if(Q == first(P))
        {
            deleteFirstparent(P,Q);
        }
        else if(Q == last(P))
        {
            deleteLastparent(P,Q);
        }
        else
        {
            adrtersangka Prec = prev(Q);
            deleteAfterparent(P,Prec,Q);
        }
        cout<<endl;
        cout<<"DATA TERSANGKA TELAH BERHASIL DIHAPUS !!!"<<endl;
    }
    else
    {
        cout<<"ID YANG ANDA MASUKKAN TIDAK DITEMUKAN !!!"<<endl;
    }
}
