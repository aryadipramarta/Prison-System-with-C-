#include "penjara.h"
#include "aplikasi.h"
#include "tahanan.h"
#include "relasi.h"
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

Listtersangka Lp;
Listrelasi Lr;
Listkasus Lc;

int main()
{
    createListparent(Lp);
    createListkasus(Lc);
    createListRelasi(Lr);
    int pil;
    adrtersangka P;
    int X;
    do
    {
        cout<<" __________________________________________"<<endl<<
            "|      MAIN MENU TERSANGKA X KASUS         |"<<endl<<
            "|      1. Masukkan Data Tersangka          |"<<endl<<
            "|      2. Masukkan Data Kasus              |"<<endl<<
            "|      3. Tampilkan Semua Data Tersangka   |"<<endl<<
            "|      4. Tampilkan Semua Data Kasus       |"<<endl<<
            "|      5. Find Data Tersangka              |"<<endl<<
            "|      6. Find Data Kasus                  |"<<endl<<
            "|      7. Vonis Tersangka                  |"<<endl<<
            "|      8. Tampilkan Hubungan Data          |"<<endl<<
            "|      9. Hapus Vonis Tersangka            |"<<endl<<
            "|      10. Delete Data Tersangka           |"<<endl<<
            "|      11. Delete Data Kasus               |"<<endl<<
            "|      12. Lihat Semua Data                |"<<endl<<
            "|      13. Total Vonisan                   |"<<endl<<
            "|      14. Lihat Masa Tahanan Terlama      |"<<endl<<
            "|      15. Lihat Kasus Tersangka           |"<<endl<<
            "|      0. EXIT                             |"<<endl<<
            " __________________________________________"<<endl<<
            "Input Menu : ";
        cin>>pil;
        switch (pil)
        {
        case 1:
            insert_datatersangka(Lp);
            break;
        case 2:
            insert_datakasus(Lc);
            break;
        case 3:
            view_datatersangka(Lp);
            break;
        case 4:
            view_datakasus(Lc);
            break;
        case 5:
            search_datatersangka(Lp,X);
            break;
        case 6:
            search_datakasus(Lc,X);
            break;
        case 7:
            relasikan(Lc,Lp);
            break;
        case 8:
            keteranganrelasi(Lc,Lp);
            break;
        case 9:
            putusrelasi(Lc,Lp);
            break;
        case 10:
            deleteParent(Lp);
            break;
        case 11:
            deletekasus(Lp,Lc);
            break;
        case 12:
            printAll(Lp,Lc);
            break;
        case 13:
            cout << "Total Vonis : " << totalsangkaan(Lp, Lc) << " Vonisan" << endl;;
            break;
        case 14:
            jummasaterlama(Lc,Lp);
            break;
        case 15:
            printChildOfParent(Lp,Lc);
            break;
        case 0:
            ;
            break;
        default:
            cout<<"INPUT SALAH MOHON CEK KEMBALI"<<endl;
            break;
        }
        cout<<"\npress enter";
        getch();
        cout<<endl;
        system("pause");
        system("CLS");
    }
    while(pil!=0);
}
