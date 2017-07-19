#include <QCoreApplication>
#include<stdio.h>

enum aylar {OCA=1,SUB,MAR,NIS,MAY,HAZ,TEM,AGU,EYL,EKİ,KAS,ARA };
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    enum aylar ay;
    for(ay=OCA;ay<=ARA;ay++)
    {
        printf("%d\n",ay);
    }
    return a.exec();
}
