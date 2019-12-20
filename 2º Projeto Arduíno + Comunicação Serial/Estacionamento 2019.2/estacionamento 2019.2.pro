TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        LiquidCrystal.cpp \
        MFRC522.cpp \
        MFRC522Extended.cpp \
        codigo2proj.cpp \
        codigoquetadandocerto.cpp \
        main.cpp \
        meudisplay.cpp \
        meuldr.cpp \
        meuled.cpp

HEADERS += \
    Arduino.h \
    LiquidCrystal.h \
    MFRC522.h \
    MFRC522Extended.h \
    SPI.h \
    Servo.h \
    String.h \
    deprecated.h \
    meuRFID.h \
    meuServo.h \
    meudisplay.h \
    meuldr.h \
    meuled.h \
    require_cpp11.h

DISTFILES += \
    pTinkercad.txt
