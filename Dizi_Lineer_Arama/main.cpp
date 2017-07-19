
#include <QCoreApplication>
#include<stdio.h>


#define BOYUT 100
int lineerArama(const int[],int , int);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int data[ BOYUT ],x,AramaDegeri,eleman;
    for(x=0;x<=BOYUT-1;x++)
    {
        data[x]=2*x;
    }
    printf("Arama Degeri Giriniz : \n");
    scanf("%d",&AramaDegeri);
    eleman = lineerArama(data,AramaDegeri,BOYUT);
    if(eleman !=-1)
    {
        printf("Aranan Eleman Bulundu : %d \n ",eleman);
    }
    else
    {
        printf("Aranan Eleman Bulunamadi  \n");
    }


    return 0 ;



    return a.exec();
}
int lineerArama(const int dizi[],int anahtar,int boyut)
{
    for(int n=0;n<=boyut;n++)
    {

     if(dizi[n]==anahtar)
     {
         return n;
     }

    }
    return -1;
}
