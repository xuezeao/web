#-------------------------------------------------
#
# Project created by QtCreator 2017-03-03T08:53:20
#
#-------------------------------------------------
QT       += core gui
QT       += core sql

QT       += network
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartCabinet
TEMPLATE = app


SOURCES += main.cpp \
    ui/common/dg_loginpage.cpp \
    ui/common/dg_functionoptpage.cpp \
    network/netcommunication.cpp \
    common/delaytime.cpp \
    common/initprocess.cpp \
    common/timerandupdate.cpp \
    common/uart4stm.cpp \
    common/waitingpage.cpp \
    common/globalvariable.cpp \
    common/updatesql.cpp \
    common/commonmodel.cpp \
    ui/task/dg_returnpage.cpp \
    ui/task/dg_checkpage.cpp \
    ui/common/dg_requestposition.cpp \
    ui/task/dg_takein.cpp \
    ui/task/dg_taskclass.cpp \
    ui/task/dg_takeoutpage.cpp \
    ui/task/dg_remove.cpp \
    ui/task/dg_scrap.cpp \
    ui/task/dg_replace.cpp \
    common/serialportworking.cpp \
    ui/exec/dg_execclass.cpp \
    ui/exec/dg_takeout_exec.cpp \
    ui/exec/dg_takein_exec.cpp \
    ui/exec/dg_back_exec.cpp \
    ui/exec/dg_checkpage_exec.cpp \
    ui/exec/dg_scrap_exec.cpp \
    ui/exec/dg_replace_exec.cpp \
    ui/exec/dg_remove_exec.cpp

HEADERS  += \
    ui/common/dg_loginpage.h \
    ui/common/dg_functionoptpage.h \
    common/globalvariable.h \
    network/netcommunication.h \
    common/delaytime.h \
    common/initprocess.h \
    common/Sql_Setting.h \
    common/timerandupdate.h \
    common/uart4stm.h \
    common/waitingpage.h \
    common/updatesql.h \
    common/commonmodel.h \
    ui/task/dg_returnpage.h \
    ui/task/dg_checkpage.h \
    ui/common/dg_requestposition.h \
    ui/task/dg_takein.h \
    ui/task/dg_taskclass.h \
    ui/task/dg_takeoutpage.h \
    ui/task/dg_remove.h \
    ui/task/dg_scrap.h \
    ui/task/dg_replace.h \
    common/serialportworking.h \
    ui/exec/dg_execclass.h \
    ui/exec/dg_takeout_exec.h \
    ui/exec/dg_takein_exec.h \
    ui/exec/dg_back_exec.h \
    ui/exec/dg_checkpage_exec.h \
    ui/exec/dg_scrap_exec.h \
    ui/exec/dg_replace_exec.h \
    ui/exec/dg_remove_exec.h

FORMS    += \
    ui/common/dg_loginpage.ui \
    ui/common/dg_functionoptpage.ui \
    ui/task/dg_returnpage.ui \
    ui/common/dg_requestposition.ui \
    ui/task/dg_takein.ui \
    ui/task/dg_taskclass.ui \
    ui/exec/dg_execclass.ui

RESOURCES += \
    resource/resoure.qrc


target.path = /home/pi/Desktop
INSTALLS += target
#include($$PWD/inputnew/inputnew.pri)
