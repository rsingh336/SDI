#include "annotations.h"
#include <QFileSystemModel>
#include <iostream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

/** function for saving the details of the annotated files
 * ~the name of the image file
 * ~the type of shape selected as annotation
 * ~the coordinates of the annotation
 * are all saved in a Json file
 */
void annotations::save_details()
{
    MainWindow m; /// creates an object of the MainWindow class
    QDir().mkdir("C:/My_Annotated_Image_Folder"); /// creates a folder in the C Drive for storing the .annotations file
    QString name = m.get_image_file_name(); /// gets the name of the current filepath in ui->comboBoxImages
    QString fileName = "C:/My_Annotated_Image_Folder/";
    QFile file(fileName + name + ".annotations"); /// creates the name of the annotated image file
    QJsonDocument doc; /// a Json document is created
    QJsonObject recordImage = doc.object(); /// Json object is created
    QJsonArray dimensions = doc.array(); /// Json array is created
    recordImage.insert("File_Name:", QJsonValue::fromVariant(name)); /// inserts the file name in the document
    recordImage.insert("No_Of_Images:", QJsonValue::fromVariant("1"));/// inserts the default number of images in the document
    recordImage.insert("No_Of_Shapes:", QJsonValue::fromVariant("1"));/// inserts the default number of images in the document
    QString text = m.get_shape_index(); /// gets the index of the shape selected from the comboBox
    shapes s ; /// creates an object of the shape

    /** saving the shape type and the coordinates if the shape is a Triangle */
    if(text == "Triangle")
        {
            recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Triangle"));
            recordImage.insert("Dimensions: ", QJsonValue::fromVariant("Point_1(x, y), Point_2(x, y), Point_3(x, y):"));
            dimensions.push_back(s.mP1X);
            dimensions.push_back(s.mP1Y);
            dimensions.push_back(s.mP2X);
            dimensions.push_back(s.mP2Y);
            dimensions.push_back(s.mP3X);
            dimensions.push_back(s.mP3Y);
        }

        /** saving the shape type and the coordinates if the shape is a Rectangle */
        else if(text == "Rectangle")
        {
            recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Rectangle"));
            recordImage.insert("Dimensions: ", QJsonValue::fromVariant("Point_1(x, y), Point_2(x, y), Point_3(x, y), Point_4(x, y):"));
            dimensions.push_back(s.mP1X);
            dimensions.push_back(s.mP1Y);
            dimensions.push_back(s.mP2X);
            dimensions.push_back(s.mP2Y);
            dimensions.push_back(s.mP3X);
            dimensions.push_back(s.mP3Y);
            dimensions.push_back(s.mP4X);
            dimensions.push_back(s.mP4Y);
        }
        /** saving the shape type and the coordinates if the shape is a Square */
        else if(text == "Square")
        {
            recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Square"));
            recordImage.insert("Dimensions: ", QJsonValue::fromVariant("Point_1(x, y), Point_2(x, y), Point_3(x, y), Point_4(x, y):"));
            dimensions.push_back(s.mP1X);
            dimensions.push_back(s.mP1Y);
            dimensions.push_back(s.mP2X);
            dimensions.push_back(s.mP2Y);
            dimensions.push_back(s.mP3X);
            dimensions.push_back(s.mP3Y);
            dimensions.push_back(s.mP4X);
            dimensions.push_back(s.mP4Y);
        }

        /** saving the shape type and the coordinates if the shape is a Trapezium */
        else if(text == "Trapezium")
        {
            recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Trapezium"));
            recordImage.insert("Dimensions: ", QJsonValue::fromVariant("Point_1(x, y), Point_2(x, y), Point_3(x, y), Point_4(x, y):"));
            dimensions.push_back(s.mP1X);
            dimensions.push_back(s.mP1Y);
            dimensions.push_back(s.mP2X);
            dimensions.push_back(s.mP2Y);
            dimensions.push_back(s.mP3X);
            dimensions.push_back(s.mP3Y);
            dimensions.push_back(s.mP4X);
            dimensions.push_back(s.mP4Y);
        }

        /** saving the shape type and the coordinates if the shape is a Polygon */
        else if(text == "Polygon")
        {
            if(s.verticies == 5) /// checks if the polygon is a Pentagon
            {
                recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Polygon (Pentagon)"));
                recordImage.insert("Dimensions: ", QJsonValue::fromVariant("P_1(x, y), P_2(x, y), P_3(x, y), P_4(x, y), P_5(x, y):"));
                dimensions.push_back(s.mP1X);
                dimensions.push_back(s.mP1Y);
                dimensions.push_back(s.mP2X);
                dimensions.push_back(s.mP2Y);
                dimensions.push_back(s.mP3X);
                dimensions.push_back(s.mP3Y);
                dimensions.push_back(s.mP4X);
                dimensions.push_back(s.mP4Y);
                dimensions.push_back(s.mP5X);
                dimensions.push_back(s.mP5Y);
            }

            else if(s.verticies == 6) /// checks if the polygon is a Hexagon
            {
                recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Polygon (Hexagon)"));
                recordImage.insert("Dimensions: ", QJsonValue::fromVariant("P_1(x, y), P_2(x, y), P_3(x, y), P_4(x, y), P_5(x, y), P_6(x, y):"));
                dimensions.push_back(s.mP1X);
                dimensions.push_back(s.mP1Y);
                dimensions.push_back(s.mP2X);
                dimensions.push_back(s.mP2Y);
                dimensions.push_back(s.mP3X);
                dimensions.push_back(s.mP3Y);
                dimensions.push_back(s.mP4X);
                dimensions.push_back(s.mP4Y);
                dimensions.push_back(s.mP5X);
                dimensions.push_back(s.mP5Y);
                dimensions.push_back(s.mP6X);
                dimensions.push_back(s.mP6Y);
            }

            else if(s.verticies == 7) /// checks if the polygon is a Heptagon
            {
                recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Polygon (Heptagon)"));
                recordImage.insert("Dimensions: ", QJsonValue::fromVariant("P_1(x, y), P_2(x, y), P_3(x, y), P_4(x, y), P_5(x, y), P_6(x, y), P_7(x, y):"));
                dimensions.push_back(s.mP1X);
                dimensions.push_back(s.mP1Y);
                dimensions.push_back(s.mP2X);
                dimensions.push_back(s.mP2Y);
                dimensions.push_back(s.mP3X);
                dimensions.push_back(s.mP3Y);
                dimensions.push_back(s.mP4X);
                dimensions.push_back(s.mP4Y);
                dimensions.push_back(s.mP5X);
                dimensions.push_back(s.mP5Y);
                dimensions.push_back(s.mP6X);
                dimensions.push_back(s.mP6Y);
                dimensions.push_back(s.mP7X);
                dimensions.push_back(s.mP7Y);
            }

            else if(s.verticies == 8) /// checks if the polygon is an Octagon
            {
                recordImage.insert("Shape_Type:", QJsonValue::fromVariant("Polygon (Octagon)"));
                recordImage.insert("Dimensions: ", QJsonValue::fromVariant("P_1(x, y), P_2(x, y), P_3(x, y), P_4(x, y), P_5(x, y), P_6(x, y), P_7(x, y), P_8(x, y):"));
                dimensions.push_back(s.mP1X);
                dimensions.push_back(s.mP1Y);
                dimensions.push_back(s.mP2X);
                dimensions.push_back(s.mP2Y);
                dimensions.push_back(s.mP3X);
                dimensions.push_back(s.mP3Y);
                dimensions.push_back(s.mP4X);
                dimensions.push_back(s.mP4Y);
                dimensions.push_back(s.mP5X);
                dimensions.push_back(s.mP5Y);
                dimensions.push_back(s.mP6X);
                dimensions.push_back(s.mP6Y);
                dimensions.push_back(s.mP7X);
                dimensions.push_back(s.mP7Y);
                dimensions.push_back(s.mP8X);
                dimensions.push_back(s.mP8Y);
            }
        }
    QJsonArray imageAnnotations; /// creates a Json array
    imageAnnotations.push_back(recordImage); /// the image file name and shape type is stored
    imageAnnotations.push_back(dimensions); /// the coordinates of the shape is stored
    doc.setArray(imageAnnotations); /// the array is put in the Json document
    try /// try-catch for handling exceptions
    {
        /// writing the file details to the Json file
        file.open(QFile::WriteOnly | QFile::Text);
        file.write(doc.toJson());
        file.close();
    } catch (...) {
        qDebug()<<"Handling exceptions for this function.";
    }

}


