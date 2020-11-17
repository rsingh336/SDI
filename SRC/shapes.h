/// Defining the header files

#ifndef SHAPES_H
#define SHAPES_H

/// The necessary header files gets included

#include <QObject>
#include <QLabel>
#include <QPainter>
#include <QPen>
#include <QtGui>
#include <QtWidgets>
#include <QApplication>
#include <QVector>
#include <QDebug>
#include "linkedlist.h"



/** class shapes is declared
 *  all the member functions and
 *  all  the variables
 *  used for the functioning of the shapes
 */

class shapes : public QLabel
{
public:
    explicit shapes(QWidget * parent = 0);
    int mPX,mPY,mP1X,mP1Y,mP2X, mP2Y,mP3X,mP3Y,mP4X,mP4Y,mP5X,mP5Y,mP6X,mP6Y,mP7X, mP7Y,mP8X, mP8Y; //cordinate points
    int rectHeight = 100; /// size of rect
    int rectWidth = 200;
    int squareDimension = 120;
    QPointF pointsTriangle[3],pointsTrap[4],pointsPent[5],pointsHex[6],pointsHep[7],pointsOct[8]; //points of shapes
    QColor lineColour;
    int penWidth = 4; /// width of pen
    bool mFirstClick,mSecondClick,mThirdClick,mFourthClick,mFifthClick, mSixthClick, mSeventhClick,mEighthClick; //boolean for verticies
    bool mPaintFlag; /// boolean for draw
    int shapeIndex; /// shape type
    int verticies; /// number of vertices
    QString class_text;


protected:
    /// shapes();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    QString pointName(int points);

};

#endif /// SHAPES_H
