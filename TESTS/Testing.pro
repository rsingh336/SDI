QT += testlib
QT += gui
QT += widgets

CONFIG += qt warn_on depend_includepath testcase
TARGET = print-qstringlist
TEMPLATE = app

isEmpty(BOOST_INCLUDE_DIR): BOOST_INCLUDE_DIR=$$(BOOST_INCLUDE_DIR)
# set by Qt Creator wizard
isEmpty(BOOST_INCLUDE_DIR): BOOST_INCLUDE_DIR="C:/Program Files/boost/boost_1_72_0"
!isEmpty(BOOST_INCLUDE_DIR): INCLUDEPATH *= $${BOOST_INCLUDE_DIR}

isEmpty(BOOST_INCLUDE_DIR): {
    message("BOOST_INCLUDE_DIR is not set, assuming Boost can be found automatically in your system")
}



SOURCES +=  tst_testgui.cpp

INCLUDEPATH += /Users/RishiSingh/Desktop/SDI group 9/SRC/
