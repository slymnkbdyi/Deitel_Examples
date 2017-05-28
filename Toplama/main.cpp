#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ilksayi,ikincisayi,toplam;
    printf("ilk sayiyi giriniz : \n");
    scanf("%d",&ilksayi);
    printf("ikinci sayiyi giriniz : \n");
    scanf("%d",&ikincisayi);
    toplam = ilksayi + ikincisayi;
    printf("iki sayinin toplami %d  dir \n",toplam);


    return 0;
}
