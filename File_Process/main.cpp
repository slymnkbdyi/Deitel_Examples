/*  a ile dosyayı acarsan yoksa olusturur varsa devamına yazar
 *  w yada r ile acarsan yoksa olustur varsa icini siler yazar DİKKAT  */

#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int hesap;
    char ad[30];
    double bakiye;
    FILE *cfPtr;

    if((cfPtr=fopen("musteri.txt","w"))==NULL)
    {
        printf("Dosya Acilamadi");

    }
    else
     {
        fprintf(cfPtr,"%10s%15s%20s \n","Hesap ","Ad","Bakiye");
        printf("Sira ile Hesap , Ad ve Bakiyeyi Giriniz : \n");
        scanf("%d %s %lf",&hesap,ad,&bakiye);
        while(!feof(stdin))
        {
            fprintf(cfPtr,"%10d%15s%20lf \n",hesap,ad,bakiye);
            scanf("%d %s %lf",&hesap,ad,&bakiye);
        }
        fclose(cfPtr);
    }

    return a.exec();
}
