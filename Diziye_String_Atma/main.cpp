#include <QCoreApplication>
#include<stdio.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char string1[20],string2[]="String Literal";
    int i;
    printf("Bir String Giriniz \n");
    scanf("%s",string1);
    printf("%s\n%s\n",string1,string2);
    for(i=0;string1[i] !='\0';i++)
    {
        printf("%c\t",string1[i]);

    }
    printf("\n");
    return 0;
}
