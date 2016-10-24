#include "myreplace.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myreplace w;
    w.show();

    return a.exec();
}
