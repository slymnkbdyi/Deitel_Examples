#include <QCoreApplication>
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double hipotenus(double,double);
    double a_kenari, b_kenari ;
    printf("Ucgenin iki kenarinida giriniz: \n");
    scanf("%lf %lf ",&a_kenari,&b_kenari);
    printf("ucgenin hipotenusu  : %f",hipotenus(a_kenari,b_kenari));




    return 0;
}
double hipotenus(double x , double y )
{
    double sayi = x*x+y*y;

    return sqrt(sayi);
}
