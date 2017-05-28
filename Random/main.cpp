#include <QCoreApplication>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int sayac =0 ,  random=0;
    for(;sayac<1000;sayac ++)
    {
        random=rand();
        printf("Random sayi : %d \n ",random);
        if(random%100 == 5)
        {
            printf("%d . seferde random sayi 5 olarak bulundu \n",sayac);
            break;
        }
    }


    return a.exec();
}
