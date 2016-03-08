/* Написать программу на основе класса QDialog, которая решает квадратное уравнение вида a⋅x^2+b⋅x+c=0 для любых a,  b, c (программа должна иметь 6 ветвей).*/
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}
