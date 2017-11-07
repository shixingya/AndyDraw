#ifndef SHAPE_H
#define SHAPE_H

#include <QtGui>

class Shape
{
public:

enum Code {Line,Rect,Ellipse};

    Shape(QColor penColor=Qt::black,Qt::PenStyle penStyle=Qt::SolidLine);

    void setStart(QPoint s)//设置绘图起始点
    {
        start = s;
    }

    void setEnd(QPoint e)//设置绘图起始点
    {
        end = e;
    }

    QPoint startPoint()//设置绘图终点
    {
        return start;
    }

    QPoint endPoint()//返回绘图起始点
    {
        return end;
    }

	void setPenColor(QColor penColor)
	{
		color=penColor;
	}

	QColor getPenColor() const
	{	
		return color;
	}

	void setPenStyle(Qt::PenStyle penStyle)
	{
		penStyle2=penStyle;
	}

	Qt::PenStyle getPenStyle() const
	{
		return penStyle2;
	}

    void virtual paint(QImage &theImage)=0;//绘图函数，设为虚函数
		//，在子文件中重写绘制特定的图形
protected:
    QPoint start;
    QPoint end;
	QColor color;
	Qt::PenStyle penStyle2;
};

#endif // SHAPE_H
