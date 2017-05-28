#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int kare(int);
    int sayi;
    printf("Karesinin almak istediginiz sayiyi giriniz : \n \n ");
    scanf("%d",&sayi);
    printf("Sayinin Karesi : %d \n \n  ",kare(sayi));
    return 0;
}

int kare(int deger)
{
    return deger*deger;
}
