#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ilk_Sayi, ikinci_Sayi;

    printf("Bir Sayi Giriniz : \n");
    scanf("%d",&ilk_Sayi);
    printf("ikinci Sayiyi Giriniz\n" );
    scanf("%d",&ikinci_Sayi);
    if(ilk_Sayi==ikinci_Sayi)
    {
        printf("iki sayida esittir \n");
    }
    if(ilk_Sayi>ikinci_Sayi)
    {
        printf("ilk sayi buyuktur %d \n  ",ilk_Sayi);
    }
    if(ikinci_Sayi>ilk_Sayi )
    {
        printf("İkinci Sayi buyuktur  %d\n ",ikinci_Sayi);
    }
    return 0;
}
