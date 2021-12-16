QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    choosetablewindow.cpp \
    createcolumnform.cpp \
    createnewdbwindow.cpp \
    createtablewindow.cpp \
    errorwindow.cpp \
    helpwindow.cpp \
    inputdbsettingswindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    about.h \
    choosetablewindow.h \
    createcolumnform.h \
    createnewdbwindow.h \
    createtablewindow.h \
    errorwindow.h \
    helpwindow.h \
    inputdbsettingswindow.h \
    mainwindow.h

FORMS += \
    about.ui \
    choosetablewindow.ui \
    createcolumnform.ui \
    createnewdbwindow.ui \
    createtablewindow.ui \
    errorwindow.ui \
    helpwindow.ui \
    inputdbsettingswindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    application_delete.png \
    database_edit.png \
    icon.png \
    table_delete.png \
    textfield_delete.png
