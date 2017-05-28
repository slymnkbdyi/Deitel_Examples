#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int toplam =0 , sayac =2 ;

    for( ; sayac<=30 ; sayac+=2)
    {
        toplam = toplam + sayac ;
        printf( "Sayi :  %d \n ",sayac );
    }
    printf("2 den 30 a kadar sayilarin toplami:  %d \n ",toplam);
    return 0;
}
