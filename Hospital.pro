QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    confirmation.cpp \
    credit.cpp \
    emergency.cpp \
    inhomevisit.cpp \
    inpatient.cpp \
    login.cpp \
    main.cpp \
    outpatient.cpp \
    patienttype.cpp \
    pay.cpp \
    rating.cpp

HEADERS += \
    confirmation.h \
    credit.h \
    emergency.h \
    inhomevisit.h \
    inpatient.h \
    login.h \
    outpatient.h \
    patienttype.h \
    pay.h \
    rating.h

FORMS += \
    confirmation.ui \
    credit.ui \
    emergency.ui \
    inhomevisit.ui \
    inpatient.ui \
    login.ui \
    outpatient.ui \
    patienttype.ui \
    pay.ui \
    rating.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
