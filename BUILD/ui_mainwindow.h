/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <shapes.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget_classes;
    shapes *label_DisplayImage;
    QListWidget *listWidget_images;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *spinBox_RectHeight;
    QComboBox *comboBox_ChooseShape;
    QComboBox *comboBox_SetColour;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *spinBoxVerticies;
    QLabel *label;
    QSpinBox *spinBoxPenWidth;
    QSpinBox *spinBox_RectWidth;
    QLabel *label_5;
    QSpinBox *spinBox_Square;
    QPushButton *pushButton_Help;
    QPushButton *pushButton_HelpSquare;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_className;
    QPushButton *CreateClassFile;
    QPushButton *but_sortClass_Ascending;
    QPushButton *but_sortClass_Descending;
    QPushButton *but_CreateClass;
    QPushButton *but_RemoveClass;
    QPushButton *classBrowse;
    QPushButton *pushButton_addtext;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxImages;
    QPushButton *but_openImage;
    QCheckBox *checkBox_Date;
    QCheckBox *checkBox_File;
    QPushButton *sort_Descending;
    QPushButton *sort_Ascending;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *SaveImageFile;
    QPushButton *AnnotatedFiles;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1200, 700);
        MainWindow->setMinimumSize(QSize(1100, 700));
        MainWindow->setMaximumSize(QSize(1200, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget_classes = new QListWidget(centralwidget);
        listWidget_classes->setObjectName(QStringLiteral("listWidget_classes"));
        listWidget_classes->setGeometry(QRect(640, 110, 541, 111));
        label_DisplayImage = new shapes(centralwidget);
        label_DisplayImage->setObjectName(QStringLiteral("label_DisplayImage"));
        label_DisplayImage->setGeometry(QRect(30, 210, 601, 421));
        label_DisplayImage->setFrameShape(QFrame::WinPanel);
        listWidget_images = new QListWidget(centralwidget);
        listWidget_images->setObjectName(QStringLiteral("listWidget_images"));
        listWidget_images->setGeometry(QRect(30, 110, 601, 91));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(640, 230, 531, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        spinBox_RectHeight = new QSpinBox(gridLayoutWidget);
        spinBox_RectHeight->setObjectName(QStringLiteral("spinBox_RectHeight"));
        spinBox_RectHeight->setMinimum(10);
        spinBox_RectHeight->setMaximum(360);
        spinBox_RectHeight->setValue(100);

        gridLayout->addWidget(spinBox_RectHeight, 2, 1, 1, 1);

        comboBox_ChooseShape = new QComboBox(gridLayoutWidget);
        comboBox_ChooseShape->setObjectName(QStringLiteral("comboBox_ChooseShape"));

        gridLayout->addWidget(comboBox_ChooseShape, 0, 0, 1, 1);

        comboBox_SetColour = new QComboBox(gridLayoutWidget);
        comboBox_SetColour->setObjectName(QStringLiteral("comboBox_SetColour"));

        gridLayout->addWidget(comboBox_SetColour, 4, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinBoxVerticies = new QSpinBox(gridLayoutWidget);
        spinBoxVerticies->setObjectName(QStringLiteral("spinBoxVerticies"));
        spinBoxVerticies->setMinimumSize(QSize(42, 22));
        spinBoxVerticies->setMaximumSize(QSize(42, 22));
        spinBoxVerticies->setMinimum(5);
        spinBoxVerticies->setMaximum(8);

        gridLayout->addWidget(spinBoxVerticies, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        spinBoxPenWidth = new QSpinBox(gridLayoutWidget);
        spinBoxPenWidth->setObjectName(QStringLiteral("spinBoxPenWidth"));
        spinBoxPenWidth->setMinimum(1);
        spinBoxPenWidth->setMaximum(40);
        spinBoxPenWidth->setValue(4);

        gridLayout->addWidget(spinBoxPenWidth, 5, 1, 1, 1);

        spinBox_RectWidth = new QSpinBox(gridLayoutWidget);
        spinBox_RectWidth->setObjectName(QStringLiteral("spinBox_RectWidth"));
        spinBox_RectWidth->setMinimum(10);
        spinBox_RectWidth->setMaximum(400);
        spinBox_RectWidth->setValue(200);

        gridLayout->addWidget(spinBox_RectWidth, 2, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        spinBox_Square = new QSpinBox(gridLayoutWidget);
        spinBox_Square->setObjectName(QStringLiteral("spinBox_Square"));
        spinBox_Square->setMinimum(10);
        spinBox_Square->setMaximum(360);

        gridLayout->addWidget(spinBox_Square, 3, 1, 1, 1);

        pushButton_Help = new QPushButton(gridLayoutWidget);
        pushButton_Help->setObjectName(QStringLiteral("pushButton_Help"));

        gridLayout->addWidget(pushButton_Help, 2, 3, 1, 1);

        pushButton_HelpSquare = new QPushButton(gridLayoutWidget);
        pushButton_HelpSquare->setObjectName(QStringLiteral("pushButton_HelpSquare"));

        gridLayout->addWidget(pushButton_HelpSquare, 3, 3, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(650, 10, 531, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_className = new QLineEdit(gridLayoutWidget_3);
        lineEdit_className->setObjectName(QStringLiteral("lineEdit_className"));

        gridLayout_3->addWidget(lineEdit_className, 0, 0, 1, 1);

        CreateClassFile = new QPushButton(gridLayoutWidget_3);
        CreateClassFile->setObjectName(QStringLiteral("CreateClassFile"));

        gridLayout_3->addWidget(CreateClassFile, 0, 3, 1, 1);

        but_sortClass_Ascending = new QPushButton(gridLayoutWidget_3);
        but_sortClass_Ascending->setObjectName(QStringLiteral("but_sortClass_Ascending"));

        gridLayout_3->addWidget(but_sortClass_Ascending, 0, 2, 1, 1);

        but_sortClass_Descending = new QPushButton(gridLayoutWidget_3);
        but_sortClass_Descending->setObjectName(QStringLiteral("but_sortClass_Descending"));

        gridLayout_3->addWidget(but_sortClass_Descending, 1, 2, 1, 1);

        but_CreateClass = new QPushButton(gridLayoutWidget_3);
        but_CreateClass->setObjectName(QStringLiteral("but_CreateClass"));

        gridLayout_3->addWidget(but_CreateClass, 0, 1, 1, 1);

        but_RemoveClass = new QPushButton(gridLayoutWidget_3);
        but_RemoveClass->setObjectName(QStringLiteral("but_RemoveClass"));

        gridLayout_3->addWidget(but_RemoveClass, 1, 1, 1, 1);

        classBrowse = new QPushButton(gridLayoutWidget_3);
        classBrowse->setObjectName(QStringLiteral("classBrowse"));

        gridLayout_3->addWidget(classBrowse, 1, 3, 1, 1);

        pushButton_addtext = new QPushButton(gridLayoutWidget_3);
        pushButton_addtext->setObjectName(QStringLiteral("pushButton_addtext"));

        gridLayout_3->addWidget(pushButton_addtext, 1, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 10, 601, 91));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxImages = new QComboBox(gridLayoutWidget_2);
        comboBoxImages->setObjectName(QStringLiteral("comboBoxImages"));

        gridLayout_2->addWidget(comboBoxImages, 0, 0, 1, 1);

        but_openImage = new QPushButton(gridLayoutWidget_2);
        but_openImage->setObjectName(QStringLiteral("but_openImage"));

        gridLayout_2->addWidget(but_openImage, 1, 0, 1, 1);

        checkBox_Date = new QCheckBox(gridLayoutWidget_2);
        checkBox_Date->setObjectName(QStringLiteral("checkBox_Date"));

        gridLayout_2->addWidget(checkBox_Date, 0, 1, 1, 1);

        checkBox_File = new QCheckBox(gridLayoutWidget_2);
        checkBox_File->setObjectName(QStringLiteral("checkBox_File"));

        gridLayout_2->addWidget(checkBox_File, 0, 2, 1, 1);

        sort_Descending = new QPushButton(gridLayoutWidget_2);
        sort_Descending->setObjectName(QStringLiteral("sort_Descending"));

        gridLayout_2->addWidget(sort_Descending, 1, 2, 1, 1);

        sort_Ascending = new QPushButton(gridLayoutWidget_2);
        sort_Ascending->setObjectName(QStringLiteral("sort_Ascending"));

        gridLayout_2->addWidget(sort_Ascending, 1, 1, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 590, 322, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SaveImageFile = new QPushButton(layoutWidget);
        SaveImageFile->setObjectName(QStringLiteral("SaveImageFile"));

        horizontalLayout->addWidget(SaveImageFile);

        AnnotatedFiles = new QPushButton(layoutWidget);
        AnnotatedFiles->setObjectName(QStringLiteral("AnnotatedFiles"));

        horizontalLayout->addWidget(AnnotatedFiles);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Labelling Application", Q_NULLPTR));
        label_DisplayImage->setText(QString());
        comboBox_ChooseShape->clear();
        comboBox_ChooseShape->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Triangle", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Rectangle", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Square", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Trapezium", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Polygon", Q_NULLPTR)
        );
        comboBox_SetColour->clear();
        comboBox_SetColour->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "red", Q_NULLPTR)
         << QApplication::translate("MainWindow", "black", Q_NULLPTR)
         << QApplication::translate("MainWindow", "blue", Q_NULLPTR)
         << QApplication::translate("MainWindow", "yellow", Q_NULLPTR)
         << QApplication::translate("MainWindow", "gray", Q_NULLPTR)
         << QApplication::translate("MainWindow", "magenta", Q_NULLPTR)
         << QApplication::translate("MainWindow", "white", Q_NULLPTR)
         << QApplication::translate("MainWindow", "green", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "Pen Width:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Polygon Verticies:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Rectangle Length & Width", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Colour:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Square Length & Width", Q_NULLPTR));
        pushButton_Help->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        pushButton_HelpSquare->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        CreateClassFile->setText(QApplication::translate("MainWindow", "Create Class File", Q_NULLPTR));
        but_sortClass_Ascending->setText(QApplication::translate("MainWindow", "Sort Ascending", Q_NULLPTR));
        but_sortClass_Descending->setText(QApplication::translate("MainWindow", "Sort Descending", Q_NULLPTR));
        but_CreateClass->setText(QApplication::translate("MainWindow", "Create Class", Q_NULLPTR));
        but_RemoveClass->setText(QApplication::translate("MainWindow", "Remove Class", Q_NULLPTR));
        classBrowse->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        pushButton_addtext->setText(QApplication::translate("MainWindow", "Add Text", Q_NULLPTR));
        but_openImage->setText(QApplication::translate("MainWindow", "Choose Image", Q_NULLPTR));
        checkBox_Date->setText(QApplication::translate("MainWindow", "Sort by File Name", Q_NULLPTR));
        checkBox_File->setText(QApplication::translate("MainWindow", "Sort by Date", Q_NULLPTR));
        sort_Descending->setText(QApplication::translate("MainWindow", "Sort Descending", Q_NULLPTR));
        sort_Ascending->setText(QApplication::translate("MainWindow", "Sort Ascending", Q_NULLPTR));
        SaveImageFile->setText(QApplication::translate("MainWindow", "Save Image File", Q_NULLPTR));
        AnnotatedFiles->setText(QApplication::translate("MainWindow", "Browse Annotated Files", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
