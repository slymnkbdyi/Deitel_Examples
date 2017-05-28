#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x, y = 5 , z = 5 ;
    for(x=0;x<10;x++)
    {
        if(x==5)
        {
            if(y==5)
            {
                if(z==5)
                {
                    break;
                }
            }

        }
        printf("X in degeri : %d \n ", x);
    }
    printf("X in degeri 5 oldugu icin dongu kirildi ");
    return 0;
}
