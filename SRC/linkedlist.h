/// defining the header files

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/// including the necessary header files

#include <QString>
#include "shapes.h"

/// declaring struct with member variables

struct node{
    QString data;
    node *next; /// node pointer type

};

/// declaring class linked class with members

class LinkedList
{
public:
    LinkedList(); /// constructor
    void append(QString);
    int size();


private:
    node *head, *tail;
    node nodeCurrentPos(int);


};

#endif // LINKEDLIST_H
