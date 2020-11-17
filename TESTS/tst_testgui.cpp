/** tst_testgui.cpp contains the code for the testing of the program */

/** All the essential header files are included */

#include <QtTest>
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QString>
#include <QSpinBox>
#include "mainwindow.h"
#include <QDebug>
#include <QListWidgetItem>

using namespace std;



Q_DECLARE_METATYPE(Qt::Key)

class TestGUI : public QObject
{
    Q_OBJECT

private slots:
    void testGUIButtons();
    void testGUICheckBoxes();
    void testGUIComboBoxes();
    void testGUILineEdit();
    void testGUISpinBox();
    void testSpinBoxKeyPress();
    void testSpinBoxMouseClicks();
    void sortingTestAscending();
    void sortingTestDescending();
    void bubblesortfortestingAsc(QStringList t);
    void bubblesortfortestingDes(QStringList t);




private:
    QStringList sortTest = {"Mountain", "Forest", "Hill", "Alleyway", "Riverside"};







};

/** Simulates Left Mouse click on Buttons, Checkboxes, ComboBoxes */

void TestGUI::testGUIButtons()
{
    /** Testing Left Click on Open Image button */

        QPushButton but_openImage;

        QTest::mouseClick(&but_openImage, Qt::LeftButton);


        /** Testing Left Click on Sort Image Ascending button */

        QPushButton sort_Ascending;

        QTest::mouseClick(&sort_Ascending, Qt::LeftButton);


        /** Testing Left Click on Sort Image Descending button */

        QPushButton sort_Descending;

        QTest::mouseClick(&sort_Descending, Qt::LeftButton);


        /** Testing Left Click on Create Class button */

        QPushButton but_CreateClass;

        QTest::mouseClick(&but_CreateClass, Qt::LeftButton);


        /** Testing Left Click on Remove Class button */

        QPushButton but_RemoveClass;

        QTest::mouseClick(&but_RemoveClass, Qt::LeftButton);


        /** Testing Left Click on Create Class File button */

        QPushButton CreateClassFile;

        QTest::mouseClick(&CreateClassFile, Qt::LeftButton);


        /** Testing Left Click on Sort Class Ascending Button */

        QPushButton but_sortClass_Ascending;

        QTest::mouseClick(&but_sortClass_Ascending, Qt::LeftButton);


        /** Testing Left Click on Sort Class Descending Button */

        QPushButton but_sortClass_Descending;

        QTest::mouseClick(&but_sortClass_Descending, Qt::LeftButton);


        /** Testing Left Click on Help button (Rectangle) */

        QPushButton pushButton_Help;

        QTest::mouseClick(&pushButton_Help, Qt::LeftButton);


        /** Testing Left Click on Help button (Square) */

        QPushButton pushButton_HelpSquare;

        QTest::mouseClick(&pushButton_HelpSquare, Qt::LeftButton);

        /** Testing Left Click on Browse Class button */

        QPushButton classBrowse;

        QTest::mouseClick(&classBrowse, Qt::LeftButton);

        /** Testing Left Click on Save Image File button */

        QPushButton SaveImageFile;

        QTest::mouseClick(&SaveImageFile, Qt::LeftButton);

        /** Testing Left Click on Browse Annotation File button */

        QPushButton AnnotatedFiles;

        QTest::mouseClick(&AnnotatedFiles, Qt::LeftButton);

        /** Testing Left Click on Add Text button */

        QPushButton pushButton_addtext;

        QTest::mouseClick(&pushButton_addtext, Qt::LeftButton);

}

void TestGUI::testGUICheckBoxes()
{
    /** Testing Left Click on Sort By Date checkbox */

        QCheckBox checkBox_Date;

        QTest::mouseClick(&checkBox_Date, Qt::LeftButton);



        /** Testing Left Click on Sort By File Name checkbox */

        QCheckBox checkBox_File;

        QTest::mouseClick(&checkBox_File, Qt::LeftButton);
}

void TestGUI::testGUIComboBoxes()
{
        /** Testing Left Click on Images combo box */

        QComboBox comboBoxImages;

        QTest::mouseClick(&comboBoxImages, Qt::LeftButton);


        /** Testing Left click on Choose Shape combo box */

        QComboBox comboBox_ChooseShape;

        QTest::mouseClick(&comboBox_ChooseShape, Qt::LeftButton);


        /** Testing Left click on Set Colour combo box */

        QComboBox comboBox_SetColour;

        QTest::mouseClick(&comboBox_SetColour, Qt::LeftButton);
}




void TestGUI::testGUISpinBox()
{
    /** Testing Pen Width spin box values */

    QSpinBox spinBoxPenWidth;

    spinBoxPenWidth.setRange(1,40);

    /** Testing value within Pen Width spin box range */

    spinBoxPenWidth.setValue(20);
    QCOMPARE(spinBoxPenWidth.value(), 20);
    qDebug() << spinBoxPenWidth.value();

    /** Testing value smaller than Pen Width spin box range */

    spinBoxPenWidth.setValue(0);
    QCOMPARE(spinBoxPenWidth.value(), 1);
    qDebug() << spinBoxPenWidth.value();

    /** Testing value larger than Pen Width spin box range */

    spinBoxPenWidth.setValue(41);
    QCOMPARE(spinBoxPenWidth.value(), 40);
    qDebug() << spinBoxPenWidth.value();



    /** Testing Vertices spin box values */

    QSpinBox spinBoxVertices;

    spinBoxVertices.setRange(5,8);

    /** Testing value within Vertices spin box range */

    spinBoxVertices.setValue(7);
    QCOMPARE(spinBoxVertices.value(), 7);
    qDebug() << spinBoxVertices.value();

    /** Testing value smaller than Vertices spin box range */

    spinBoxVertices.setValue(4);
    QCOMPARE(spinBoxVertices.value(), 5);
    qDebug() << spinBoxVertices.value();

    /** Testing value larger than Vertices spin box range */
    spinBoxVertices.setValue(9);
    QCOMPARE(spinBoxVertices.value(), 8);
    qDebug() << spinBoxVertices.value();





    /** Testing Rectangle height spin box values */

    QSpinBox spinBox_RectHeight;

    spinBox_RectHeight.setRange(10,360);

    /** Testing value within Rectangle height spin box range */

    spinBox_RectHeight.setValue(90);
    QCOMPARE(spinBox_RectHeight.value(), 90);
    qDebug() << spinBox_RectHeight.value();

    /** Testing value smaller than Rectangle height spin box range */

    spinBox_RectHeight.setValue(9);
    QCOMPARE(spinBox_RectHeight.value(), 10);
    qDebug() << spinBox_RectHeight.value();

    /** Testing value larger than Rectangle height spin box range */

    spinBox_RectHeight.setValue(361);
    QCOMPARE(spinBox_RectHeight.value(), 360);
    qDebug() << spinBox_RectHeight.value();





    /** Testing Rectangle width spin box values */

    QSpinBox spinBox_RectWidth;

    spinBox_RectWidth.setRange(10,400);

    /** Testing value within Rectangle width spin box range */

    spinBox_RectWidth.setValue(200);
    QCOMPARE(spinBox_RectWidth.value(), 200);
    qDebug() << spinBox_RectWidth.value();

    /** Testing value smaller than Rectangle width spin box range */

    spinBox_RectWidth.setValue(9);
    QCOMPARE(spinBox_RectWidth.value(), 10);
    qDebug() << spinBox_RectWidth.value();

    /** Testing value larger than Rectangle width spin box range */

    spinBox_RectWidth.setValue(401);
    QCOMPARE(spinBox_RectWidth.value(), 400);
    qDebug() << spinBox_RectWidth.value();





    /** Testing Square spin box values */

    QSpinBox spinBox_Square;

    spinBox_Square.setRange(10,360);

    /** Testing value witin Square spin box range */

    spinBox_Square.setValue(150);
    QCOMPARE(spinBox_Square.value(), 150);
    qDebug() << spinBox_Square.value();

    /** Testing value smaller than Square spin box range */

    spinBox_Square.setValue(9);
    QCOMPARE(spinBox_Square.value(), 10);
    qDebug() << spinBox_Square.value();

    /** Testing value larger than Square spin box range */

    spinBox_Square.setValue(361);
    QCOMPARE(spinBox_Square.value(), 360);
    qDebug() << spinBox_Square.value();
}


void TestGUI::testSpinBoxKeyPress()
{

    /** Testing to simulate keyboard press on Pen Width spin box */

    QSpinBox spinBoxPenWidth;

    spinBoxPenWidth.setRange(1,40);
    spinBoxPenWidth.setValue(20);


    /** Testing up keyboard button press on Pen Width spin box */

    QTest::keyClick(&spinBoxPenWidth, Qt::Key_Up);
    QCOMPARE(spinBoxPenWidth.value(), 21);
    qDebug() << spinBoxPenWidth.value();

    /** Testing down keyboard button press on Pen Width spin box */

    QTest::keyClick(&spinBoxPenWidth, Qt::Key_Down);
    QCOMPARE(spinBoxPenWidth.value(), 20);
    qDebug() << spinBoxPenWidth.value();

    /** Testing up and down keyboard button press on Pen Width spin box range limit */

    spinBoxPenWidth.setValue(40);
    QTest::keyClick(&spinBoxPenWidth, Qt::Key_Up);
    QCOMPARE(spinBoxPenWidth.value(), 40);
    qDebug() << spinBoxPenWidth.value();

    spinBoxPenWidth.setValue(1);
    QTest::keyClick(&spinBoxPenWidth, Qt::Key_Down);
    QCOMPARE(spinBoxPenWidth.value(), 1);
    qDebug() << spinBoxPenWidth.value();


    /** Testing to simulate keyboard button press on Vertices spin box */

    QSpinBox spinBoxVertices;

    spinBoxVertices.setRange(5,8);
    spinBoxVertices.setValue(7);

    /** Testing up keyboard button press on Vertices spin box */

    QTest::keyClick(&spinBoxVertices, Qt::Key_Up);
    QCOMPARE(spinBoxVertices.value(), 8);
    qDebug() << spinBoxVertices.value();

    /** Testing down keyboard button press on Verticies spin box */

    QTest::keyClick(&spinBoxVertices, Qt::Key_Down);
    QCOMPARE(spinBoxVertices.value(), 7);
    qDebug() << spinBoxVertices.value();

    /** Testing up and down keyboard button press on Vertices spin box range limit */

    spinBoxVertices.setValue(8);
    QTest::keyClick(&spinBoxVertices, Qt::Key_Up);
    QCOMPARE(spinBoxVertices.value(), 8);
    qDebug() << spinBoxVertices.value();

    spinBoxVertices.setValue(5);
    QTest::keyClick(&spinBoxVertices, Qt::Key_Down);
    QCOMPARE(spinBoxVertices.value(), 5);
    qDebug() << spinBoxVertices.value();



    /** Testing to simulate keyboard button press on Rectangle Height spin box */

    QSpinBox spinBox_RectHeight;

    spinBox_RectHeight.setRange(10,360);
    spinBox_RectHeight.setValue(50);

    /** Testing up keyboard button press on Rectangle Height spin box */

    QTest::keyClick(&spinBox_RectHeight, Qt::Key_Up);
    QCOMPARE(spinBox_RectHeight.value(), 51);
    qDebug() << spinBox_RectHeight.value();

    /** Testing down keyboard button press on Rectangle Height spin box */

    QTest::keyClick(&spinBox_RectHeight, Qt::Key_Down);
    QCOMPARE(spinBox_RectHeight.value(), 50);
    qDebug() << spinBox_RectHeight.value();

    /** Testing up and down keyboard button press on Rectangle Height spin box range limit */

    spinBox_RectHeight.setValue(360);
    QTest::keyClick(&spinBox_RectHeight, Qt::Key_Up);
    QCOMPARE(spinBox_RectHeight.value(), 360);
    qDebug() << spinBox_RectHeight.value();

    spinBox_RectHeight.setValue(10);
    QTest::keyClick(&spinBox_RectHeight, Qt::Key_Down);
    QCOMPARE(spinBox_RectHeight.value(), 10);
    qDebug() << spinBox_RectHeight.value();


    /** Testing to simulate keyboard button press on Rectangle Width spin box */

    QSpinBox spinBox_RectWidth;

    spinBox_RectWidth.setRange(10,400);
    spinBox_RectWidth.setValue(280);

    /** Testing up keyboard button press on Rectangle Width spin box */

    QTest::keyClick(&spinBox_RectWidth, Qt::Key_Up);
    QCOMPARE(spinBox_RectWidth.value(), 281);
    qDebug() << spinBox_RectWidth.value();

    /** Testing down keyboard button press on Rectangle Width spin box */

    QTest::keyClick(&spinBox_RectWidth, Qt::Key_Down);
    QCOMPARE(spinBox_RectWidth.value(), 280);
    qDebug() << spinBox_RectWidth.value();

    /** Testing up and down keyboard button press on Rectangle Width spin box range limit */

    spinBox_RectWidth.setValue(400);
    QTest::keyClick(&spinBox_RectWidth, Qt::Key_Up);
    QCOMPARE(spinBox_RectWidth.value(), 400);
    qDebug() << spinBox_RectWidth.value();

    spinBox_RectWidth.setValue(10);
    QTest::keyClick(&spinBox_RectWidth, Qt::Key_Down);
    QCOMPARE(spinBox_RectWidth.value(), 10);
    qDebug() << spinBox_RectWidth.value();



    /** Testing to simulate keyboard button press on Square spin box */

    QSpinBox spinBox_Square;

    spinBox_Square.setRange(10,360);
    spinBox_Square.setValue(120);

    /** Testing up keyboard button press on Square spin box */

    QTest::keyClick(&spinBox_Square, Qt::Key_Up);
    QCOMPARE(spinBox_Square.value(), 121);
    qDebug() << spinBox_Square.value();

    /** Testing down keyboard button press on Square spin box */

    QTest::keyClick(&spinBox_Square, Qt::Key_Down);
    QCOMPARE(spinBox_Square.value(), 120);
    qDebug() << spinBox_Square.value();

    /** Testing up and down keyboard button press on Square spin box range limit */

    spinBox_Square.setValue(360);
    QTest::keyClick(&spinBox_Square, Qt::Key_Up);
    QCOMPARE(spinBox_Square.value(), 360);
    qDebug() << spinBox_Square.value();

    spinBox_Square.setValue(10);
    QTest::keyClick(&spinBox_Square, Qt::Key_Down);
    QCOMPARE(spinBox_Square.value(), 10);
    qDebug() << spinBox_Square.value();
}


void TestGUI::testSpinBoxMouseClicks()
{
    /** Testing Mouse clicks on Pen width spin box */

    QSpinBox spinBoxPenWidth;

    spinBoxPenWidth.setRange(1,40);
    spinBoxPenWidth.setValue(20);

    QSize size =
    spinBoxPenWidth.size();
    QPoint upButton=
    QPoint(size.width()-2, 2);
    QPoint downButton=
    QPoint(size.width()-2, size.height()-2);

    /** Testing Mouse clicks on Pen width spin box up and down button */

    QTest::mouseClick(&spinBoxPenWidth, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBoxPenWidth.value(), 21);
    qDebug() << spinBoxPenWidth.value();

    QTest::mouseClick(&spinBoxPenWidth, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBoxPenWidth.value(), 20);

    /** Testing Mouse clicks on Pen width spin box up and down button at range limit */

    spinBoxPenWidth.setValue(40);
    QTest::mouseClick(&spinBoxPenWidth, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBoxPenWidth.value(), 40);

    spinBoxPenWidth.setValue(1);
    QTest::mouseClick(&spinBoxPenWidth, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBoxPenWidth.value(), 1);


    /** Testing Mouse clicks on Vertices spin box */

    QSpinBox spinBoxVertices;

    spinBoxVertices.setRange(5,8);
    spinBoxVertices.setValue(7);

    spinBoxVertices.size();
    QPoint(size.width()-2, 2);
    QPoint(size.width()-2, size.height()-2);

    /** Testing Mouse clicks on Vertices spin box up and down button */

    QTest::mouseClick(&spinBoxVertices, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBoxVertices.value(), 8);

    QTest::mouseClick(&spinBoxVertices, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBoxVertices.value(), 7);

    /** Testing Mouse clicks on Vertices spin box up and down button at range limit */

    spinBoxVertices.setValue(8);
    QTest::mouseClick(&spinBoxVertices, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBoxVertices.value(), 8);

    spinBoxVertices.setValue(5);
    QTest::mouseClick(&spinBoxVertices, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBoxVertices.value(), 5);

    /** Testing Mouse clicks on Rectangle Height spin box */

    QSpinBox spinBox_RectHeight;


    spinBox_RectHeight.setRange(10,360);
    spinBox_RectHeight.setValue(100);

    spinBox_RectHeight.size();
    QPoint(size.width()-2, 2);
    QPoint(size.width()-2, size.height()-2);

    /** Testing Mouse clicks on Rectangle Height spin box up and down button */

    QTest::mouseClick(&spinBox_RectHeight, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_RectHeight.value(), 101);
    qDebug() << spinBox_RectHeight.value();

    QTest::mouseClick(&spinBox_RectHeight, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_RectHeight.value(), 100);
    qDebug() << spinBox_RectHeight.value();

    /** Testing Mouse clicks on Rectangle Height spin box up and down button at range limit */

    spinBox_RectHeight.setValue(360);
    QTest::mouseClick(&spinBox_RectHeight, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_RectHeight.value(), 360);

    spinBox_RectHeight.setValue(10);
    QTest::mouseClick(&spinBox_RectHeight, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_RectHeight.value(), 10);

    /** Testing Mouse clicks on Rectangle Width spin box */

    QSpinBox spinBox_RectWidth;

    spinBox_RectWidth.setRange(10,400);
    spinBox_RectWidth.setValue(270);

    spinBox_RectWidth.size();
    QPoint(size.width()-2, 2);
    QPoint(size.width()-2, size.height()-2);

    /** Testing Mouse clicks on Rectangle Width spin box up and down button */

    QTest::mouseClick(&spinBox_RectWidth, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_RectWidth.value(), 271);
    qDebug() << spinBox_RectWidth.value();

    QTest::mouseClick(&spinBox_RectWidth, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_RectWidth.value(), 270);
    qDebug() << spinBox_RectWidth.value();

    /** Testing Mouse clicks on Rectangle Width spin box up and down button at range limit */

    spinBox_RectWidth.setValue(400);
    QTest::mouseClick(&spinBox_RectWidth, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_RectWidth.value(), 400);

    spinBox_RectWidth.setValue(10);
    QTest::mouseClick(&spinBox_RectWidth, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_RectWidth.value(), 10);

    /** Testing Mouse clicks on Square spin box */

    QSpinBox spinBox_Square;

    spinBox_Square.setRange(10,360);
    spinBox_Square.setValue(150);

    spinBox_Square.size();
    QPoint(size.width()-2, 2);
    QPoint(size.width()-2, size.height()-2);

    /** Testing Mouse clicks on Square spin box up and down button */

    QTest::mouseClick(&spinBox_Square, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_Square.value(), 151);
    qDebug() << spinBox_Square.value();

    QTest::mouseClick(&spinBox_Square, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_Square.value(), 150);
    qDebug() << spinBox_Square.value();

    /** Testing Mouse clicks on Square spin box up and down button at range limit */

    spinBox_Square.setValue(360);
    QTest::mouseClick(&spinBox_Square, Qt::LeftButton, 0, upButton);
    QCOMPARE(spinBox_Square.value(), 360);

    spinBox_Square.setValue(10);
    QTest::mouseClick(&spinBox_Square, Qt::LeftButton, 0, downButton);
    QCOMPARE(spinBox_Square.value(), 10);
}





void TestGUI::testGUILineEdit()
{
    /** Testing line edit to check if its empty */

    QLineEdit lineEdit_className;

    QVERIFY2(lineEdit_className.text().isEmpty(), "Line Edit is not empty");

    qDebug() << lineEdit_className.text();


   /** Testing line edit widget by simulating the writing of "class name test" */

   QTest::keyClicks(&lineEdit_className, "class name test");

   QCOMPARE(lineEdit_className.text(),QString("class name test"));

   qDebug() << lineEdit_className.text();
}


void TestGUI::bubblesortfortestingAsc(QStringList t)
{
    /** Bubble sort Ascending from mainwindow.cpp for testing sort algorithm */
    int size;
    size = t.count();
    for(int i=0; i< size; i++)
        {
            for(int j=0; j< size-1; j++)
            {

                if(t[j]>t[j+1])
                {
                    QString temp;
                    temp = t[j];
                    t[j] = t[j+1];
                    t[j+1] = temp;
                }
            }
        }

    qDebug() << t ;
}


void TestGUI::bubblesortfortestingDes(QStringList t)
{
     /** Bubble sort Descending from mainwindow.cpp for testing sort algorithm */
    int size;
    size = t.count();
    for(int i=0; i< size; i++)
        {
            for(int j=0; j< size-1; j++)
            {
                if(t[j]<t[j+1])
                {
                    QString temp;
                    temp = t[j];
                    t[j] = t[j+1];
                    t[j+1] = temp;
                }
            }
        }

    qDebug() << t ;
}


void TestGUI::sortingTestAscending()
{
     /** Testing of sort algorithm Ascending */

    bubblesortfortestingAsc(sortTest);



}

void TestGUI::sortingTestDescending()
{
    /** Testing of sort algorithm Descending */
    bubblesortfortestingDes(sortTest);


}

QTEST_MAIN(TestGUI)

#include "tst_testgui.moc"
