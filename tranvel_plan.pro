TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    logfile.cpp \
    getstate.cpp \
    strategy.cpp \
    planchange.cpp \
    timetable.cpp \
    traveller.cpp \
    travelroad.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    logfile.h \
    getstate.h \
    strategy.h \
    planchange.h \
    timetable.h \
    traveller.h \
    travelroad.h

