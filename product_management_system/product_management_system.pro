QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminallproducts.cpp \
    adminallusers.cpp \
    main.cpp \
    login.cpp \
    productaddscreen.cpp \
    register.cpp \
    usermenu.cpp \
    userproducts.cpp

HEADERS += \
    adminallproducts.h \
    adminallusers.h \
    login.h \
    productaddscreen.h \
    register.h \
    usermenu.h \
    userproducts.h

FORMS += \
    adminallproducts.ui \
    adminallusers.ui \
    login.ui \
    productaddscreen.ui \
    register.ui \
    usermenu.ui \
    userproducts.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
