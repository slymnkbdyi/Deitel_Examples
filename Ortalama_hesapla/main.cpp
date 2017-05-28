#include <QCoreApplication>
#include <stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int Sayac=0 ,girilen_Sayi=0, Toplam=0 ;
    float Ortalama=0;
    printf("Ogrenci Notunu Giriniz :   Cikis icin -1 giriniz  \n");
    scanf("%d",&girilen_Sayi);
    while(girilen_Sayi !=-1)
    {

        Toplam=Toplam + girilen_Sayi,
        Sayac++;
        printf("Ogrenci Notunu Giriniz :   Cikis icin -1 giriniz  \n");
        scanf("%d",&girilen_Sayi);
    }

    if(Sayac !=0)
    {
        Ortalama = (float) Toplam / Sayac;
        printf("Ogrencilerin Not Ortalamasi %.2f  dir...\n",Ortalama);
    }
    else
    {
        printf("Hic Sayi Girilmemis \n");
    }


    return 0;
}
