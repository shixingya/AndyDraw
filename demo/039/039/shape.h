#ifndef SHAPE_H
#define SHAPE_H

#include <QtGui>

class Shape
{
public:

enum Code {Line,Rect,Ellipse};

    Shape(QColor penColor=Qt::black,Qt::PenStyle penStyle=Qt::SolidLine);

    void setStart(QPoint s)//���û�ͼ��ʼ��
    {
        start = s;
    }

    void setEnd(QPoint e)//���û�ͼ��ʼ��
    {
        end = e;
    }

    QPoint startPoint()//���û�ͼ�յ�
    {
        return start;
    }

    QPoint endPoint()//���ػ�ͼ��ʼ��
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

    void virtual paint(QImage &theImage)=0;//��ͼ��������Ϊ�麯��
		//�������ļ�����д�����ض���ͼ��
protected:
    QPoint start;
    QPoint end;
	QColor color;
	Qt::PenStyle penStyle2;
};

#endif // SHAPE_H
