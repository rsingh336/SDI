/** The necessary header files are included */

#include "shapes.h"

/** function for declaring
 * ~all the mouse clicks
 * ~all the coordinates
 * from the shapes
 */
shapes::shapes(QWidget *parent)
    :QLabel(parent)
    , mP1X(), mP1Y(), mP2X(), mP2Y()
    , mP3X(), mP3Y(), mP4X(), mP4Y()
    , mP5X(), mP5Y(), mP6X(), mP6Y()
    , mP7X(), mP7Y(), mP8X(), mP8Y()
    , mFirstClick(true), mSecondClick(false)
    , mThirdClick(false), mFourthClick(false)
    , mSeventhClick(false), mEighthClick(false), mPaintFlag(false)
{
 ;
}

/** function for storing all the
 * ~mouse clicks
 * ~all the coordinates
 * of the shapes
 */
void shapes::mousePressEvent(QMouseEvent *event){

    if (shapeIndex == 1){ /// checks if the user selected triangle

                if(event->button() == Qt::LeftButton){ /// checks if the mouse left button is clicked
                    if (mFirstClick == true){ /// if the mouse is clicked for the first time, it stores the coordinates of the first click
                        mFirstClick = true;
                        mP1X = event->x(); /// x-coordinate of first point
                        mP1Y = event->y(); /// y-coordinate of first point
                        mFirstClick = false;
                        mSecondClick = true;
                        mPaintFlag = true;
                    }
                    else if(mSecondClick == true)/// if the mouse is clicked for the second time, it stores the coordinates of the second click
                    {
                        mP2X = event->x();
                        mP2Y = event->y();
                        mFirstClick = false;
                        mSecondClick = false;
                        mThirdClick = true;
                        mPaintFlag = true;
                    }
                    else if(mThirdClick == true)/// if the mouse is clicked for the third time, it stores the coordinates of the third click
                    {
                        mP3X = event->x();
                        mP3Y = event->y();
                        mThirdClick = false;
                        update();
                    }
                }
            }
        else if (shapeIndex == 2){ /// checks if the user selected rectangle
            if(event->button() == Qt::LeftButton){ /// checks if the mouse left button is clicked
                mFirstClick = true;
                mP1X = event->x();
                mP1Y = event->y();
                mPaintFlag = true;
                update();

        }
        }
        else if(shapeIndex == 3){ /// checks if the user selected Square
                if(event->button() == Qt::LeftButton){ /// checks if the mouse left button is clicked
                    mFirstClick = true;
                    mP1X = event->x();
                    mP1Y = event->y();
                    mPaintFlag = true;
                    update();

            }
            }
        else if(shapeIndex == 4){ /// checks if the user selected Trapezium
            if(event->button() == Qt::LeftButton){ /// checks if the mouse left button is clicked
                if (mFirstClick == true){ /// if the mouse is clicked for the first time it's coordinates gets saved
                    mP1X = event->x();
                    mP1Y = event->y();
                    mFirstClick = false;
                    mSecondClick = true;
                    mPaintFlag = true;

                }
                else if(mSecondClick == true) /// if the mouse is clicked for the second time it's coordinates gets saved
                {
                    mP2X = event->x();
                    mP2Y = event->y();
                    mFirstClick = false;
                    mSecondClick = false;
                    mThirdClick = true;
                    mPaintFlag = true;


                }
                else if(mThirdClick == true) /// if the mouse is clicked for the third time it's coordinates gets saved
                {
                    mP3X = event->x();
                    mP3Y = event->y();
                    mThirdClick = false;
                    mPaintFlag = true;
                    mFourthClick = true;


                }
                else if(mFourthClick == true) /// if the mouse is clicked for the fourth time it's coordinates gets saved
                {
                    mP4X = event->x();
                    mP4Y = event->y();
                    mFourthClick = false;
                    mPaintFlag = true;
                    update();
                }
            }
        }
    else if(shapeIndex == 5){ /// checks if the user selected 5 vertices for the polygon
        if(event->button() == Qt::LeftButton){
            if (verticies == 5){
                if (mFirstClick == true){
                    mP1X = event->x();
                    mP1Y = event->y();
                    mFirstClick = false;
                    mSecondClick = true;
                    mPaintFlag = true;
                }
                else if(mSecondClick == true)
                {
                    mP2X = event->x();
                    mP2Y = event->y();
                    mSecondClick = false;
                    mThirdClick = true;
                    mPaintFlag = true;
                }
                else if(mThirdClick == true)
                {
                    mP3X = event->x();
                    mP3Y = event->y();
                    mThirdClick = false;
                    mPaintFlag = true;
                    mFourthClick = true;
                }
                else if(mFourthClick == true)
                {
                    mP4X = event->x();
                    mP4Y = event->y();
                    mFourthClick = false;
                    mPaintFlag = true;
                    mFifthClick = true;
                }
                else if(mFifthClick == true)
                {
                    mP5X = event->x();
                    mP5Y = event->y();
                    mFifthClick = false;
                    mPaintFlag = true;
                    update();
                }
            }
        else if(verticies == 6){ /// checks if the user selected 6 vertices for the polygon
                if (mFirstClick == true){
                mP1X = event->x();
                mP1Y = event->y();
                mFirstClick = false;
                mSecondClick = true;
                mPaintFlag = true;
                }
                else if(mSecondClick == true)
                {
                    mP2X = event->x();
                    mP2Y = event->y();
                    mSecondClick = false;
                    mThirdClick = true;
                    mPaintFlag = true;
                }
                else if(mThirdClick == true)
                {
                    mP3X = event->x();
                    mP3Y = event->y();
                    mThirdClick = false;
                    mPaintFlag = true;
                    mFourthClick = true;
                }
                else if(mFourthClick == true)
                {
                    mP4X = event->x();
                    mP4Y = event->y();
                    mFourthClick = false;
                    mPaintFlag = true;
                    mFifthClick = true;
                }
                else if(mFifthClick == true)
                {
                    mP5X = event->x();
                    mP5Y = event->y();
                    mFifthClick = false;
                    mPaintFlag = true;
                    mSixthClick = true;
                }
                else if(mSixthClick == true)
                {
                    mP6X = event->x();
                    mP6Y = event->y();
                    mSixthClick = false;
                    mPaintFlag = true;
                    update();
                }
            }
            else if(verticies == 7){ /// checks if the user selected 7 vertices for the polygon
                if (mFirstClick == true){
                    mP1X = event->x();
                    mP1Y = event->y();
                    mFirstClick = false;
                    mSecondClick = true;
                    mPaintFlag = true;
                }
                else if(mSecondClick == true)
                {
                    mP2X = event->x();
                    mP2Y = event->y();
                    mSecondClick = false;
                    mThirdClick = true;
                    mPaintFlag = true;
                }
                else if(mThirdClick == true)
                {
                    mP3X = event->x();
                    mP3Y = event->y();
                    mThirdClick = false;
                    mPaintFlag = true;
                    mFourthClick = true;
                }
                else if(mFourthClick == true)
                {
                    mP4X = event->x();
                    mP4Y = event->y();
                    mFourthClick = false;
                    mPaintFlag = true;
                    mFifthClick = true;
                }
                else if(mFifthClick == true)
                {
                    mP5X = event->x();
                    mP5Y = event->y();
                    mFifthClick = false;
                    mPaintFlag = true;
                    mSixthClick = true;
                }
                else if(mSixthClick == true)
                {
                    mP6X = event->x();
                    mP6Y = event->y();
                    mSixthClick = false;
                    mPaintFlag = true;
                    mSeventhClick = true;
                }
                else if(mSeventhClick == true)
                {
                    mP7X = event->x();
                    mP7Y = event->y();
                    mSeventhClick = false;
                    mPaintFlag = true;
                    update();
                }
            }
            else if(verticies == 8){ /// checks if the user selected 8 vertices for the polygon
                    if (mFirstClick == true){
                        mP1X = event->x();
                        mP1Y = event->y();
                        mFirstClick = false;
                        mSecondClick = true;
                        mPaintFlag = true;
                    }
                    else if(mSecondClick == true)
                    {
                        mP2X = event->x();
                        mP2Y = event->y();
                        mSecondClick = false;
                        mThirdClick = true;
                        mPaintFlag = true;
                    }
                    else if(mThirdClick == true)
                    {
                        mP3X = event->x();
                        mP3Y = event->y();
                        mThirdClick = false;
                        mPaintFlag = true;
                        mFourthClick = true;
                    }
                    else if(mFourthClick == true)
                    {
                        mP4X = event->x();
                        mP4Y = event->y();
                        mFourthClick = false;
                        mPaintFlag = true;
                        mFifthClick = true;
                    }
                    else if(mFifthClick == true)
                    {
                        mP5X = event->x();
                        mP5Y = event->y();
                        mFifthClick = false;
                        mPaintFlag = true;
                        mSixthClick = true;
                    }
                    else if(mSixthClick == true)
                    {
                        mP6X = event->x();
                        mP6Y = event->y();
                        mSixthClick = false;
                        mPaintFlag = true;
                        mSeventhClick = true;
                    }
                    else if(mSeventhClick == true)
                    {
                        mP7X = event->x();
                        mP7Y = event->y();
                        mSeventhClick = false;
                        mPaintFlag = true;
                        mEighthClick = true;
                    }
                    else if(mEighthClick == true)
                    {
                        mP8X = event->x();
                        mP8Y = event->y();
                        mEighthClick = false;
                        mPaintFlag = true;
                        update();
                    }
                }
        }
    }
}


/** function for drawing the shapes
 * draws the different shapes based on the points selected by the user
 * in case of triangle and trapezium
 */
void shapes::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);
    QPainter painter(this); /// QPainter is set to draw shapes
    QPen paintpen(lineColour); /// colour of the shape is chosen by the user
    paintpen.setWidth(penWidth); /// width of pen is chosen
    painter.setPen(paintpen);



    if(mPaintFlag == true && shapeIndex == 1){
        mFirstClick = true;

        QPoint p1; /// QPoint is created which holds the (x,y) values.
        p1.setX(mP1X);
        p1.setY(mP1Y);
        pointsTriangle[0] = {p1};
        painter.drawPoint(p1); /// first point is drawn

        QPoint p2;  /// second point is created
        p2.setX(mP2X);
        p2.setY(mP2Y);
        painter.drawPoint(p2); /// second point is drawn
        pointsTriangle[1] = {p2}; /// point is stored in pointsTriangle[3]


        QPoint p3; /// third point is created
        p3.setX(mP3X);
        p3.setY(mP3Y);
        painter.drawPoint(p3); /// third point is drawn
        pointsTriangle[2] = {p3};
        painter.drawPolygon(pointsTriangle,3); /// a triangle is drawn
        painter.setFont(QFont("Arial", 30));/// font and size text is initialised
        painter.drawText(p3,class_text); /// text is drawn



        }
    else if (mPaintFlag == true && shapeIndex == 2){ /// draw rectangle
        mFirstClick = true;
        QPoint p1;
        p1.setX(mP1X);
        p1.setY(mP1Y);
        QRect rect(mP1X,mP1Y, rectHeight,rectWidth);
        painter.drawRect(rect);
        painter.setFont(QFont("Arial", 30));/// font and size text is initialised
        painter.drawText(p1,class_text); /// text is drawn
    }
    else if(mPaintFlag == true && shapeIndex == 3){ /// draw square
        mFirstClick = true;
        QPoint p1;
        p1.setX(mP1X);
        p1.setY(mP1Y);
        QRect rect(mP1X,mP1Y, squareDimension,squareDimension);
        painter.drawRect(rect);
        painter.setFont(QFont("Arial", 30));/// font and size text is initialised
        painter.drawText(p1,class_text); /// text is drawn
    }
   else if(mPaintFlag == true && shapeIndex == 4){
        mFirstClick = true;
        QPoint p1;
        p1.setX(mP1X);
        p1.setY(mP1Y);
        pointsTrap[0] = {p1};
        painter.drawPoint(p1); /// point 1 is drawn

        QPoint p2;
        p2.setX(mP2X);
        p2.setY(mP2Y);
        painter.drawPoint(p2);
        pointsTrap[1] = {p2}; /// point 2 is drawn

        QPoint p3;
        p3.setX(mP3X);
        p3.setY(mP3Y);
        painter.drawPoint(p3); /// point 3 is drawn
        pointsTrap[2] = {p3};

        QPoint p4;
        p4.setX(mP4X);
        p4.setY(mP4Y);
        painter.drawPoint(p4); /// point 4 drawn
        pointsTrap[3] = {p4};
        painter.drawPolygon(pointsTrap,4);
        painter.setFont(QFont("Arial", 30));/// font and size text is initialised
        painter.drawText(p4,class_text); /// text is drawn



    }
    else if(mPaintFlag == true && shapeIndex == 5){
        if(verticies == 5){
            mFirstClick = true;

            QPointF p1;
            p1.setX(mP1X);
            p1.setY(mP1Y);
            pointsPent[0] = {p1};
            painter.drawPoint(p1);
            QPointF p2;
            p2.setX(mP2X);
            p2.setY(mP2Y);
            pointsPent[1] = {p2};

            QPointF p3;
            p3.setX(mP3X);
            p3.setY(mP3Y);
            painter.drawPoint(p3);
            pointsPent[2] = {p3};

            QPointF p4;
            p4.setX(mP4X);
            p4.setY(mP4Y);
            painter.drawPoint(p4);
            pointsPent[3] = {p4};

            QPoint p5; /// fifth point declared
            p5.setX(mP5X);
            p5.setY(mP5Y);
            painter.drawPoint(p5);
            pointsPent[4] = {p5};
            painter.drawPolygon(pointsPent,5); /// draw 5 point polygon
            painter.setFont(QFont("Arial", 30));/// font and size text is initialised
            painter.drawText(p5,class_text); /// text is drawn
        }
        else if(verticies == 6){ /// drawing a hexagon
            mFirstClick = true;
            QPointF p1;
            p1.setX(mP1X);
            p1.setY(mP1Y);
            pointsHex[0] = {p1};
            painter.drawPoint(p1);
            QPointF p2;
            p2.setX(mP2X);
            p2.setY(mP2Y);
            painter.setPen(paintpen);
            painter.drawPoint(p2);
            pointsHex[1] = {p2};

            QPointF p3;
            p3.setX(mP3X);
            p3.setY(mP3Y);
            painter.setPen(paintpen);
            painter.drawPoint(p3);
            pointsHex[2] = {p3};
            QPointF p4;
            p4.setX(mP4X);
            p4.setY(mP4Y);
            painter.drawPoint(p4);
            pointsHex[3] = {p4};

            QPoint p5;
            p5.setX(mP5X);
            p5.setY(mP5Y);
            painter.drawPoint(p5);
            pointsHex[4] = {p5};

            QPoint p6; /// declare point 6
            p6.setX(mP6X);
            p6.setY(mP6Y);
            painter.drawPoint(p6);
            pointsHex[5] = {p6};
            painter.drawPolygon(pointsHex,6); /// draw 6 point polygon
            painter.setFont(QFont("Arial", 30));/// font and size text is initialised
            painter.drawText(p6,class_text); /// text is drawn
        }
        else if(verticies == 7){ /// drawing
            mFirstClick = true;

            QPointF p1;
            p1.setX(mP1X);
            p1.setY(mP1Y);
            pointsHep[0] = {p1};
            painter.drawPoint(p1);

            QPointF p2;
            p2.setX(mP2X);
            p2.setY(mP2Y);
            painter.drawPoint(p2);
            pointsHep[1] = {p2};

            QPointF p3;
            p3.setX(mP3X);
            p3.setY(mP3Y);
            painter.drawPoint(p3);
            pointsHep[2] = {p3};
            QPointF p4;
            p4.setX(mP4X);
            p4.setY(mP4Y);
            painter.drawPoint(p4);
            pointsHep[3] = {p4};

            QPoint p5;
            p5.setX(mP5X);
            p5.setY(mP5Y);
            painter.drawPoint(p5);
            pointsHep[4] = {p5};

            QPoint p6;
            p6.setX(mP6X);
            p6.setY(mP6Y);
            painter.drawPoint(p6);
            pointsHep[5] = {p6};

            QPoint p7; /// seventh point declared
            p7.setX(mP7X);
            p7.setY(mP7Y);
            painter.drawPoint(p7);
            pointsHep[6] = {p7};
            painter.drawPolygon(pointsHep,7); /// draw 7 point polygon
            painter.setFont(QFont("Arial", 30));/// font and size text is initialised
            painter.drawText(p7,class_text); /// text is drawn
        }
        else if(verticies == 8){
            mFirstClick = true;

            QPointF p1;
            p1.setX(mP1X);
            p1.setY(mP1Y);
            pointsOct[0] = {p1};
            painter.drawPoint(p1);

            QPointF p2;
            p2.setX(mP2X);
            p2.setY(mP2Y);
            painter.drawPoint(p2);
            pointsOct[1] = {p2};

            QPointF p3;
            p3.setX(mP3X);
            p3.setY(mP3Y);
            painter.drawPoint(p3);
            pointsOct[2] = {p3};
            QPointF p4;
            p4.setX(mP4X);
            p4.setY(mP4Y);
            painter.drawPoint(p4);
            pointsOct[3] = {p4};

            QPoint p5;
            p5.setX(mP5X);
            p5.setY(mP5Y);
            painter.drawPoint(p5);
            pointsOct[4] = {p5};

            QPoint p6;
            p6.setX(mP6X);
            p6.setY(mP6Y);
            painter.drawPoint(p6);
            pointsOct[5] = {p6};

            QPoint p7;
            p7.setX(mP7X);
            p7.setY(mP7Y);
            painter.drawPoint(p7);
            pointsOct[6] = {p7};

            QPoint p8; /// declare eighth point
            p8.setX(mP8X);
            p8.setY(mP8Y);
            painter.drawPoint(p8);
            pointsOct[7] = {p8};
            painter.drawPolygon(pointsOct,8); /// draw 8 point polygon
            painter.setFont(QFont("Arial", 30));/// font and size text is initialised
            painter.drawText(p8,class_text); /// text is drawn
        }
    }
}
