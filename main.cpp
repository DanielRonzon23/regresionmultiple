#include "reg_mult.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    REG_MULT w;
    w.show();

    return a.exec();
}
