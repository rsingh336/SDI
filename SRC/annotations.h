/// defining the header files

#ifndef ANNOTATIONS_H
#define ANNOTATIONS_H

/// including the necessary header files

#include "mainwindow.h"
#include "shapes.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

///class annotations is declared with the member functions

class annotations {

public:
    void save_details(); /** Function for saving the details of the annotated file */
    void load_annotated_file(); /** Function for loading the .annotations file on button click */

};

#endif // ANNOTATIONS_H
