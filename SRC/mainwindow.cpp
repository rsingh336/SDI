/** MainWindow.cpp contains the code for all the main UI features of the program */

/** All the essential header files are included */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "shapes.h"
#include "annotations.h"
#include <QFileDialog>
#include <QListWidgetItem>
#include <QtCore/QDateTime>
#include <QInputDialog>

/** function for setting up the ui */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/** destructor for deleting the ui */
MainWindow::~MainWindow()
{
    delete ui;
}

/** Function to open image into qlabel */
void MainWindow::on_but_openImage_clicked()
{
    QString filePath = findPath();

            if (QString::compare(filePath,QString()) != 0){
                QImage image;
                bool valid = image.load(filePath); /// verifying the exisitence of pathway.
                if (valid){
                    displayImage(image);/// image is passed to display function
                    add_to_combobox(filePath); /// filepath of image is added to combobox
                    QFileInfo fi(filePath);
                    QString fileName = fi.fileName(); /// filename is extracted from filepath
                    index_image.append(filePath);
                    mylist_Image.append(fileName);
                    removeDuplicates(); /// duplicates of filename are removed from list
                    index_image.removeDuplicates();
                    ui->listWidget_images->clear();
                    ui->listWidget_images->addItems(mylist_Image);
                    mylist_Dates.append(filePath);
                }
            }
}

/** display image function */
void MainWindow::displayImage(QImage image){
    ui->label_DisplayImage->clear();
    image = image.scaledToWidth(ui->label_DisplayImage->width(),Qt::SmoothTransformation); /// image is scaled to fit the size of the qlabel.
    ui->label_DisplayImage->setPixmap(QPixmap::fromImage(image));

}

/** function for removing any duplicate names in the list */
void MainWindow::removeDuplicates()
{
    mylist_Image.removeDuplicates();
}

/** function for sorting the file names in ascending order */
void MainWindow::SortImages_Ascending()
{
    /** check to see if the ui->listWidget_images field is empty */
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch block for handling exceptions
    {
        ui->listWidget_images->clear();
        int size;
        size = mylist_Image.count();
        /// sorting image file names using bubble sort
        for(int i=0; i< size; i++)
            {
                for(int j=0; j< size-1; j++)
                {
                    if(mylist_Image[j]>mylist_Image[j+1])
                    {
                        QString temp;
                        temp = mylist_Image[j];
                        mylist_Image[j] = mylist_Image[j+1];
                        mylist_Image[j+1] = temp;
                    }
                }
            }
        ui->listWidget_images->addItems(mylist_Image);/// adding the sorted names back to the list
    } catch (...) {

        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for sorting the file names in descending order */
void MainWindow::SortImages_Descending()
{
    /** check to see if the ui->listWidget_images field is empty */
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-ctach block for handling exceptions
    {
        ui->listWidget_images->clear();
        int size;
        size = mylist_Image.count();
        /// sorting image file names using bubble sort
        for(int i=0; i< size; i++)
            {
                for(int j=0; j< size-1; j++)
                {
                    if(mylist_Image[j]<mylist_Image[j+1])
                    {
                        QString temp;
                        temp = mylist_Image[j];
                        mylist_Image[j] = mylist_Image[j+1];
                        mylist_Image[j+1] = temp;
                    }
                }
            }
        ui->listWidget_images->addItems(mylist_Image);/// adding the sorted names back to the list
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for sorting file creation dates in ascending order */
void MainWindow::SortDates_Ascending()
{
    /** check to see if the ui->listWidget_images field is empty */
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch block for handling exceptions
    {
        ui->listWidget_images->clear();
        int size;
        size = mylist_Image.count();
        for(int i=0; i< size; i++)
        {
            QFileInfo info(mylist_Dates[i]);
            QDateTime created = info.created();
            created_At.append(created.toString());
        }
        /// Bubble Sort to sort the files based on their creation Dates
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(created_At[j] > created_At[j+1])
                {
                    QString temp;
                    temp = created_At[j];
                    created_At[j] = created_At[j+1];
                    created_At[j+1] = temp;
                }
            }
        }
        ui->listWidget_images->addItems(created_At);/// sorted file dates are added to the list
    } catch (...) {
         qDebug()<<"Handling exceptions not caught in slot";
    }

}

/** function for sorting file creation dates in descending order */
void MainWindow::SortDates_Descending()
{
    /** check to see if the ui->listWidget_images field is empty */
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch block for handling exceptions
    {
        ui->listWidget_images->clear();
        int size;
        size = mylist_Image.count();
        for(int i=0; i< size; i++)
        {
            QFileInfo info(mylist_Dates[i]);
            QDateTime created = info.created();
            created_At.append(created.toString());
        }
        /// Bubble Sort to sort the files based on their creation Dates
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(created_At[j] < created_At[j+1])
                {
                    QString temp;
                    temp = created_At[j];
                    created_At[j] = created_At[j+1];
                    created_At[j+1] = temp;
                }
            }
        }
        ui->listWidget_images->addItems(created_At);/// sorted files are added back to the list
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for browsing an image file */
QString MainWindow::findPath()
{

    /// opens a file dialog box for selecting an image file
    QString filePath = QFileDialog::getOpenFileName(this,
                                                    tr("Open Image"),
                                                    "/Users/RishiSingh/images",
                                                    "All Image Files (*.jpg *.png);;jpg File (*.jpg);; png File(*.png)"
                                                        );
    return filePath;
}

/** function for adding the image file name to ui->comboBoxImages */
void MainWindow::add_to_combobox(QString fileName)
{
    comboBox_imagesOrder.append(fileName);/// adds the image file paths to the list based on when they have been first selected
    comboBox_imagesOrder.removeDuplicates();/// remove any duplicate file paths
    ui->comboBoxImages->clear();
    ui->comboBoxImages->addItems(comboBox_imagesOrder);/// adds the image file paths to the comboBox
}

/** function for listing the file names in */
void MainWindow::add_to_listWidget(QString fileName)
{
    ui->listWidget_images->addItem(fileName);/// adds the image file names to the listWidget

}

/** function for creating classes */
void MainWindow::on_but_CreateClass_clicked()
{
    QString name;
        QString className;
        className = ui ->lineEdit_className->text();/// function for displaying class names in a list widget
        /** checks if the create button is clicked without entering a class name */
        if (className.isEmpty()) return QMessageBox::about(this,"Enter class name.","Please enter a class name to create a class.");
        try /// try-ctach block for handling exceptions
        {
            mylist_Classes.append(className);/// adds all the class names to the list
            ui->listWidget_classes->addItem(className);/// displays all the class names in the ui->listWidget_classes
            ui->lineEdit_className->clear();
        }catch(...)
        {
            qDebug()<<"Handling exceptions not caught in slot";
        }
}



/** function for removing the classes */
void MainWindow::on_but_RemoveClass_clicked()
{
    /** checks if the remove button is clicked without entering a class name */
   if(ui->listWidget_classes->count() == 0) return QMessageBox::about(this, "Class list is empty!", "Please enter a class.");
   try /// try-catch for handling exceptions
   {
       /** checks for the class names that has been selected before clicking the remove button */
       QList<QListWidgetItem*> items = ui->listWidget_classes->selectedItems();
       foreach(QListWidgetItem* item, items){
           int remove_val;
           remove_val = ui->listWidget_classes->currentRow();
           delete ui->listWidget_classes->takeItem(ui->listWidget_classes->row(item));/// deletes the selected classes
           mylist_Classes.removeAt(remove_val);

       }
   } catch (...)
   {
       qDebug()<<"Handling exceptions not caught in slot";
   }
}

/** function for saving the classes in a .names file */
void MainWindow::on_CreateClassFile_clicked()
{
    /** checks if the create  File button is clicked without entering a class name */
    if(ui->listWidget_classes->count() == 0) return QMessageBox::about(this, "Class list is empty!", "Please enter a class.");
    try /// try-catch for handling exceptions
    {
        /// prompt to enter a name for saving the file
        QString name = QInputDialog::getText(this, tr("QInputDialog::getText()"), tr("File Name:"), QLineEdit::Normal);
            QDir().mkdir("C:/MyClassFolder");/// creates a folder in the C drive for saving the file
            QString fileName = "C:/MyClassFolder/";
            QFile file(fileName + name + ".names");
            if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
               {
                   QTextStream stream(&file);
                   for(int i= 0; i < ui->listWidget_classes->count(); i++)
                   {
                       QString className = ui->listWidget_classes->item(i)->text();
                       stream<<" "<< className<<endl;
                   }
               }
               file.close();
    } catch (...)
    {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}
/** Function for adding to text ti shape */
void MainWindow::on_pushButton_addtext_clicked()
{
    QList<QListWidgetItem*> items = ui->listWidget_classes->selectedItems(); /// item selected
    foreach(QListWidgetItem* item, items){
        int val;
        QString class_text; /// local variable to hold item.
        val = ui->listWidget_classes->currentRow();
        class_text = mylist_Classes.at(val);
        ui->label_DisplayImage->class_text = class_text; /// initialising text with variable in shapes file
    }
}


/** function for sorting the classes in ascending order */
void MainWindow::SortClasses_Ascending()
{
    /** checks if the Sort Ascending button is clicked without entering a class name */
    if(ui->listWidget_classes->count() == 0) return QMessageBox::about(this, "Class list is empty!", "Please enter a class.");
    try /// try-catch for handling exceptions
    {
        ui->listWidget_classes->clear();
        int size;
        size = mylist_Classes.count();
        /// bubble sort for sorting the classes
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(mylist_Classes[j] > mylist_Classes[j+1])
                {
                    QString temp;
                    temp = mylist_Classes[j];
                    mylist_Classes[j] = mylist_Classes[j+1];
                    mylist_Classes[j+1] = temp;
                }
            }
        }
        ui->listWidget_classes->addItems(mylist_Classes);
    } catch (...)
    {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for sorting the classes in descending order */
void MainWindow::SortClasses_Descending(){

    /** checks if the Sort Descending button is clicked without entering a class name */
    if(ui->listWidget_classes->count() == 0) return QMessageBox::about(this, "Class list is empty!", "Please enter a class.");
    try /// try-catch for handling exceptions
    {
        ui->listWidget_classes->clear();
        int size;
        size = mylist_Classes.count();
        /// bubble sort for sorting the classes
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(mylist_Classes[j] < mylist_Classes[j+1])
                {
                    QString temp;
                    temp = mylist_Classes[j];
                    mylist_Classes[j] = mylist_Classes[j+1];
                    mylist_Classes[j+1] = temp;
                }
            }
        }
        ui->listWidget_classes->addItems(mylist_Classes);
    } catch (...)
    {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for checking if the check box for date is selected or not */
void MainWindow::on_checkBox_Date_clicked(bool checked)
{
    /// check to see if the check box is selected without selecting an image file
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch for handling exceptions
    {
        if(checked == true) {
            ui->checkBox_File->setChecked(false);
        }
        else{
            ui->checkBox_File->setChecked(true);
        }
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for checking if the check box for selecting files is selected or not */
void MainWindow::on_checkBox_File_clicked(bool checked)
{
    /// check to see if the check box is selected without selecting an image file
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch for handling exceptions
    {
        if(checked == true){
            ui->checkBox_Date->setChecked(false);
        }
        else{
            ui->checkBox_Date->setChecked(true);
        }
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for checking if the push button Sort Ascending has been clicked */
void MainWindow::on_sort_Ascending_clicked()
{
    /// check to see if Sort Ascending is clicked without selecting an image file
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch for handling exceptions
    {
        if(ui->checkBox_Date->checkState() == true){
            SortDates_Ascending();
        }
        else
        {
            SortImages_Ascending();
        }
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for chekcing if the push button Sort Descending has been clicked */
void MainWindow::on_sort_Descending_clicked()
{
    /// check to see if Sort Descending is clicked without selecting an image file
    if(ui->listWidget_images->count() == 0) return QMessageBox::about(this, "Image list empty!", "Please choose an image file.");
    try /// try-catch for handling exceptions
    {
        if(ui->checkBox_Date->checkState() == true){
            SortDates_Descending();
        }
        else
        {
            SortImages_Descending();
        }
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for checking if the push button Sort Ascending (Classes) has been clicked */
void MainWindow::on_but_sortClass_Ascending_clicked()
{
    SortClasses_Ascending(); /// the classes gets sorted when the push button is clicked
}

/** function for checking if the push button Sort Descending (Classes) has been clicked */
void MainWindow::on_but_sortClass_Descending_clicked()
{
    SortClasses_Descending(); /// the classes gets sorted when the push button is clicked
}

/** function for displaying an image when it's filepath has been selected from ui->comboBoxImages */
void MainWindow::on_comboBoxImages_activated(const QString &arg1)
{
    try /// try-catch for handling exceptions
    {
        bool valid = image.load(arg1);
        if (valid){
            ui->label_DisplayImage->clear();
            displayImage(image);
         }
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for choosing and drawing a particular shape (annotation) on the image */
void MainWindow::on_comboBox_ChooseShape_activated(const QString &arg1)
{
    if (arg1 == "Triangle")
    {
        ui->label_DisplayImage->shapeIndex = 1;
        ui->label_DisplayImage->mPaintFlag = true;
        shapeList.append(arg1);
    }
    else if(arg1 == "Rectangle"){
        ui->label_DisplayImage->shapeIndex = 2;
        ui->label_DisplayImage->mPaintFlag = true;
        shapeList.append(arg1);
    }
    else if(arg1 == "Square"){
        ui->label_DisplayImage->shapeIndex = 3;
        ui->label_DisplayImage->mPaintFlag = true;
        shapeList.append(arg1);
    }
    else if (arg1 == "Trapezium"){
        ui->label_DisplayImage->shapeIndex = 4;
        ui->label_DisplayImage->mPaintFlag = true;
        shapeList.append(arg1);

    }
    else if(arg1 == "Polygon"){
        ui->label_DisplayImage->shapeIndex = 5;
        ui->label_DisplayImage->mPaintFlag = true;
        shapeList.append(arg1);


    }


    // qDebug()<<shapeList.size();
    //Used for testing purpose to check shapeList size.


}

/** function for browsing folders to check for .names file that has been saved */
QString MainWindow::on_classBrowse_clicked()
{
    /// function to enable the user to browse for the .names file
    QString filePath = QFileDialog::getOpenFileName(this,
                                                            tr("Open Class File"),
                                                            "C:/MyClassFolder",
                                                            "All Class Files (*.names);;names File"
                                                                );
    return filePath;
}

/** function for changing the colour of the shape */
void MainWindow::on_comboBox_SetColour_activated(const QString &arg1)
{
    try /// try-catch for handling exceptions
    {
        ui->label_DisplayImage->lineColour = arg1;
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for changing the line width of the shape */
void MainWindow::on_spinBoxPenWidth_valueChanged(int arg1)
{
    try /// try-catch for handling exceptions
    {
        ui->label_DisplayImage->penWidth = arg1;
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for changing the height of the rectangle */
void MainWindow::on_spinBox_RectHeight_valueChanged(int arg1)
{
    try /// try-catch for handling exceptions
    {
        ui->label_DisplayImage->rectHeight = arg1;
        ui->spinBox_Square->setValue(10);
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for changing the width of the rectangle */
void MainWindow::on_spinBox_RectWidth_valueChanged(int arg1)
{
    try /// try-catch for handling exceptions
    {
         ui->label_DisplayImage->rectWidth = arg1;
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for changing the height of the square */
void MainWindow::on_spinBox_Square_valueChanged(int arg1)
{
    try /// try-catch for handling exceptions
    {
        ui->label_DisplayImage->squareDimension = arg1;
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for displaying the text when ui->pushButton_Help is clicked */
void MainWindow::on_pushButton_Help_clicked()
{
    try /// try-catch for handling exceptions
    {
        QMessageBox message;
        message.setText("If you are unabe to see a rectangle on the image please choose the correct shape in the shape combo box. Also check the colour and width of the lines.");
        message.exec();
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for displaying the text when ui->pushButton_HelpSquare is clicked */
void MainWindow::on_pushButton_HelpSquare_clicked()
{
    try /// try-catch for handling exceptions
    {
        QMessageBox message;
        message.setText("If you are unabe to see a square on the image please choose the correct shape in the shape combo box. Also check the colour and width of the lines.");
        message.exec();
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for slecting the number of vertices of the polygon */
void MainWindow::on_spinBoxVerticies_valueChanged(int arg1)
{
    try /// try-catch for handling exceptions
    {
        ui->label_DisplayImage->verticies=arg1;
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for getting the current shape from ui->comboBox_ChooseShape() */
QString MainWindow::get_shape_index()
{
    QString index_text = ui->comboBox_ChooseShape->currentText();
    return index_text;
}

/** function for getting the current image file name from ui->comboBoxImages */
QString MainWindow::get_image_file_name()
{
    QString filePath = ui->comboBoxImages->currentText();
    QFileInfo fi(filePath);
    QString fileName = fi.fileName();
    return fileName;
}

/** function for saving the details of the annotated file */
void MainWindow::on_SaveImageFile_clicked()
{
    try /// try-catch for handling exceptions
    {
        annotations a;
        a.save_details();
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}

/** function for loading the .annotations Json file */
void MainWindow::on_AnnotatedFiles_clicked()
{
    try /// try-catch for handling exceptions
    {
        QString fileName = QFileDialog::getOpenFileName(this,tr("Open Text File"), "", tr("Text Files (*.annotations)"));
            QFile file1(fileName);
            if(!file1.open(QIODevice::ReadOnly | QIODevice::Text))
                return;
            QTextBrowser *b = new QTextBrowser;
            b->setText(file1.readAll());
            b->show();
    } catch (...) {
        qDebug()<<"Handling exceptions not caught in slot";
    }
}


