#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QtWidgets>
#include <QtGui>
#include <QDebug>
#include <QMouseEvent>
#include "shape.h"
#include "line.h"
#include "rect.h"
#include "ellipse.h"

class PaintWidget : public QWidget
{
    Q_OBJECT

public:
    PaintWidget(QWidget *parent = 0);
	QColor penColor;
	Qt::PenStyle penStyle;

public slots:
    void setCurrentShape(Shape::Code s)
    {	isMove=false;
        if(s != currShapeCode) {
            currShapeCode = s;
        }
    }

	void moveGraph()
	{
		isMove=true;
	}

	void saveGraph()
	{
		bool OK= image.save("picture.png");  
		if (!OK)  
		{  
			QMessageBox::about(NULL,"","保存失败");  
		}  
	}

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    Shape::Code currShapeCode;
    Shape *shape;
    bool isClick;//判断鼠标点击、松开
	bool isMove;//判断是否处于移动状态
	bool inRect;//判断移动状态下点击是否处于虚框内
    QList<Shape*> shapeList;//使用QList保存已画的图形
	int iList;
	QImage image;
	QRgb backColor;
	QPoint mouseStartPoint;//用来保存鼠标点击起始位置
	QPoint mouseMovePoint;//用来保存鼠标移动位置
	QPoint rePaintPoint1;//用来保存重绘的起始点
	QPoint rePaintPoint2;//用来保存重绘的终点
	QPoint firstStartPoint;//用来保存图形最开始的起始点
	QPoint firstEndPoint;//用来保存图形最开始的终点
};

#endif // PAINTWIDGET_H
