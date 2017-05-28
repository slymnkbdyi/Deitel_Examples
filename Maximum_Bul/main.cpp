#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int Max_Bul(int,int,int);
    int b,c,d;

    printf("Maximum  icin uc sayi giriniz  \n \n");
    scanf("%d %d %d",&b,&c,&d);
    printf("Maximum Sayi  :  %d \n",Max_Bul(b,c,d));



    return 0;
}

int Max_Bul(int x ,int y, int z )
{
    if(x>y && x>z)
    {
       return x;
    }
    if(y>x && y>z)
    {
       return y;
    }
    if(z>x && z>y)
    {
       return z;
    }
}
