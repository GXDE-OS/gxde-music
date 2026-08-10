include(../../common.pri)

TEMPLATE = app
TARGET = controller
CONFIG += qt link_pkgconfig

QT += qml quick

DEPENDPATH += ../../src
INCLUDEPATH += ../../src
LIBS += -L../../src -l$${MPRISQTLIB}
PKGCONFIG = dbusextended-qt6

SOURCES += \
    controller.cpp

target.path = /usr/bin

INSTALLS += target
