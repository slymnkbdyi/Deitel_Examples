#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     const int x = 5;

    printf("yeryer %d\n\n",x);
    x=2;
    printf("yeryer %d\n\n",x);
    return 0;
}
