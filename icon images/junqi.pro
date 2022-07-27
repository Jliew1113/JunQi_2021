QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    board.cpp \
    clickablelabel.cpp \
    connect.cpp \
    create.cpp \
    disconnect.cpp \
    forfeit.cpp \
    graph.cpp \
    main.cpp \
    mainwindow.cpp \
    piece.cpp \
    result.cpp

HEADERS += \
    board.h \
    clickablelabel.h \
    connect.h \
    create.h \
    disconnect.h \
    forfeit.h \
    graph.h \
    mainwindow.h \
    piece.h \
    result.h

FORMS += \
    connect.ui \
    create.ui \
    disconnect.ui \
    forfeit.ui \
    mainwindow.ui \
    result.ui

QT += network

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
