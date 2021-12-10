#include "login.h"

#include <QApplication>
#include <QLatin1String>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/qss/qss/Devsion.qss");
    file.open(QFile::ReadOnly);

    QSplashScreen *splash = new QSplashScreen;
    splash -> setPixmap((QPixmap(":/splash/images/splash_image.png")));
    splash->setFixedSize(1000, 400);
    splash -> show();

    QString styleSheet { QLatin1String(file.readAll()) };
    Login w;

    QTimer::singleShot(2400, splash, SLOT(close()));
    QTimer::singleShot(2500, &w, SLOT(show()));

    //setup stylesheet
    w.setStyleSheet(styleSheet);
    return a.exec();
}
