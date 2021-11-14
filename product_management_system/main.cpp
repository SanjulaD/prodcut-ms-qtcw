#include "login.h"

#include <QApplication>
#include <QLatin1String>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/qss/qss/Devsion.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { QLatin1String(file.readAll()) };
    Login w;

    //setup stylesheet
    w.setStyleSheet(styleSheet);

    w.show();
    return a.exec();
}
