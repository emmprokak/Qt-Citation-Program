QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bookcitationwindow.cpp \
    chaptercitationwindow.cpp \
    citation.cpp \
    infowindow.cpp \
    main.cpp \
    mainwindow.cpp \
    papercitationwindow.cpp

HEADERS += \
    bookcitationwindow.h \
    chaptercitationwindow.h \
    citation.h \
    infowindow.h \
    mainwindow.h \
    papercitationwindow.h

FORMS += \
    bookcitationwindow.ui \
    chaptercitationwindow.ui \
    infowindow.ui \
    mainwindow.ui \
    papercitationwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

ICON = MyIcon.icns
