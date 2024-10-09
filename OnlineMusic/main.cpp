#include "OnlineMusic.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OnlineMusic w;
    w.show();

    return a.exec();
}
