/// Defining the header files

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/// Necessary header files gets included

#include <QMainWindow>
#include <QListWidget>
#include <QVector>
#include <QMessageBox>
#include <QPainter>
#include "shapes.h"
#include "linkedlist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/** class MainWindow is declared
 *  all the member functions,
 *  all the slots and
 *  all the variables
 *  used for the functioning of the ui
 */

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString get_shape_index();
    QString get_image_file_name();
    QImage image;
    LinkedList shapeList;

private slots:
    void on_but_openImage_clicked();
    void on_but_CreateClass_clicked();
    void on_but_RemoveClass_clicked();
    void on_checkBox_Date_clicked(bool checked);
    void on_checkBox_File_clicked(bool checked);
    void on_sort_Ascending_clicked();
    void on_sort_Descending_clicked();
    void on_but_sortClass_Ascending_clicked();
    void on_but_sortClass_Descending_clicked();
    void on_comboBoxImages_activated(const QString &arg1);
    void on_comboBox_ChooseShape_activated(const QString &arg1);
    QString on_classBrowse_clicked();
    void on_comboBox_SetColour_activated(const QString &arg1);
    void on_spinBoxPenWidth_valueChanged(int arg1);
    void on_spinBox_RectHeight_valueChanged(int arg1);
    void on_spinBox_RectWidth_valueChanged(int arg1);
    void on_spinBox_Square_valueChanged(int arg1);
    void on_pushButton_Help_clicked();
    void on_pushButton_HelpSquare_clicked();
    void on_spinBoxVerticies_valueChanged(int arg1);
    void on_CreateClassFile_clicked();
    void on_AnnotatedFiles_clicked();
    void on_SaveImageFile_clicked();
    void on_pushButton_addtext_clicked();


private:
    Ui::MainWindow *ui;
    QString findPath();
    QStringList index_image;
    QStringList comboBox_imagesOrder;
    QStringList mylist_Classes;
    QStringList mylist_Image;
    QStringList mylist_Dates;
    QStringList created_At;
    void add_to_combobox(QString fileName);
    void add_to_listWidget(QString fileName);
    void displayImage(QImage image);
    void removeDuplicates();
    void SortImages_Ascending();
    void SortImages_Descending();
    void SortDates_Ascending();
    void SortDates_Descending();
    void SortClasses_Ascending();
    void SortClasses_Descending();
    void addShapes_To_comboBox();
};
#endif /// MAINWINDOW_H
