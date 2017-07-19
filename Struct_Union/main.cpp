#include <QCoreApplication>
#include<stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    union
    {
        int stok_no;
        float fiyat;
        struct
        {
            char isim[20];
            char yazar[20];
        }kitap;
        struct
        {
            char isim[20];
            int model;
        }saat;
        struct
        {
            char desen[20];
            int renk;
            int size;

        }kazak;
    }katalog;
    printf("Katalog stk no : %d \n",katalog.stok_no);
    printf("Katalog fiyat : %f \n",katalog.fiyat);
    printf("Saat model: %i \n",katalog.saat.model);
    katalog.stok_no=1;
    katalog.fiyat=50;
    katalog.saat.model=3420;
    printf("Katalog stk no : %d \n",katalog.stok_no);
    printf("Katalog fiyat : %f \n",katalog.fiyat);
    printf("Saat model: %i \n",katalog.saat.model);
    return a.exec();
}
