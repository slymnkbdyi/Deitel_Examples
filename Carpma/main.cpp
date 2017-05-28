#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int first_Num,sec_Num,third_Num,result;
    printf("Bir Sayi Giriniz : \n ");
    scanf("%d",&first_Num);
    printf("ikinci Sayiyi Giriniz : \n");
    scanf("%d",&sec_Num);
    printf("Ucuncu Sayiyi Giriniz : \n");
    scanf("%d",&third_Num);
    result= first_Num * sec_Num * third_Num;
    printf(" Sonuc : %d \n",result);
    return a.exec();
}
