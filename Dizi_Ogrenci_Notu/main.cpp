#include <QCoreApplication>
#include<stdio.h>

#define OGRENCILER 3
#define SINAVLAR 4

int maximum(const int[][SINAVLAR],int,int);
int minimum(const int[][SINAVLAR],int,int);
double ortalama(const int[],int);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ogrenci;
    const int ogrenciNotlari[OGRENCILER][SINAVLAR]={{33,67,23,76},{87,55,76,45},{88,99,23,69}};

    printf("Dizi \n;");

    printf("\n\nEn dusuk Not : %d \n En yuksek Not : %d \n ",minimum(ogrenciNotlari,OGRENCILER,SINAVLAR),maximum(ogrenciNotlari,OGRENCILER,SINAVLAR));
    for(ogrenci=0;ogrenci<=OGRENCILER-1;ogrenci++)
    {
        printf("Ogrenci %d icin ortalama not %.2f\n ",ogrenci ,ortalama(ogrenciNotlari[ogrenci],SINAVLAR));
    }
    return 0;



    return a.exec();
}
int maximum(const int notlar[][SINAVLAR],int talebeler,int testler)
{
    int i,j,yuksekNot=0;
    for(int i=0;i<=talebeler-1;i++)
    {
        for(j=0;j<=testler-1;j++)
        {
            if(notlar[i][j]>yuksekNot)
            {
                yuksekNot=notlar[i][j];
            }
        }
    }
    return yuksekNot;
}
int minimum(const int notlar[][SINAVLAR],int talebeler,int testler)
{
    int i,j,dusukNot=100;
    for(int i=0;i<=talebeler-1;i++)
    {
        for(j=0;j<=testler-1;j++)
        {
            if(notlar[i][j]<dusukNot)
            {
                dusukNot=notlar[i][j];
            }
        }
    }
    return dusukNot;
}

double ortalama(const int notlarKumesi[],int testler)
{
    int i,toplam=0;
    for(int i=0;i<testler-1;i++)
    {
       toplam += notlarKumesi[i];
    }
    return (double) toplam/testler;

}
