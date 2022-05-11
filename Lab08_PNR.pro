QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    coupee_ticket_pnr.cpp \
    luxury_ticket_pnr.cpp \
    main.cpp \
    lab08_pnr.cpp \
    train_ticket_pnr.cpp

HEADERS += \
    coupee_ticket_pnr.h \
    lab08_pnr.h \
    luxury_ticket_pnr.h \
    train_ticket_pnr.h

FORMS += \
    lab08_pnr.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
