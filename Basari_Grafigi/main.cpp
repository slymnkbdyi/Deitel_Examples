#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int basarili_ogr_sayisi  = 0 , basarisiz_ogr_sayisi = 0 ,  ogr_notu = 0 , sayac=0 ;
    while(sayac<10)
    {
        printf("Ogrencinin notunu giriniz  basarili : 1   basarisiz icin : 2 \n");
        scanf("%d", &ogr_notu );
        if(ogr_notu==1)
        {
            basarili_ogr_sayisi++;
        }
        else
        {
            basarisiz_ogr_sayisi++;
        }
        sayac++;

    }


    printf("Basarili  ogrenci Sayisi  :  %d \n",basarili_ogr_sayisi);
    printf("Basarisiz  ogrenci Sayisi  :  %d \n",basarisiz_ogr_sayisi);
    if(basarili_ogr_sayisi >= 8)
    {
        printf("Siz Basarili Bir Kurumsunuz \n ");
    }
    else
    {
        printf("Siz Basarili Bir Kurum Degilsiniz \n ");
    }








    return a.exec();
}
