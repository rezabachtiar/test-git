#include "halamanmuka.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HalamanMuka w;
    w.show();

    return a.exec();
}
