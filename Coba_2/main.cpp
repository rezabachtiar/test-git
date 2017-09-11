#include <QCoreApplication>

int calculate(int x, int y, int flag)
{
    int result;
    switch(flag){
    case 1:
        result=x+y;break;
    case 2:
        result=x-y;break;
    case 3:
        result=x*y;break;
    default:
        result=0;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    return a.exec();
}
