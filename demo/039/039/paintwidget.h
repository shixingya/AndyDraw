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
			QMessageBox::about(NULL,"","����ʧ��");  
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
    bool isClick;//�ж���������ɿ�
	bool isMove;//�ж��Ƿ����ƶ�״̬
	bool inRect;//�ж��ƶ�״̬�µ���Ƿ��������
    QList<Shape*> shapeList;//ʹ��QList�����ѻ���ͼ��
	int iList;
	QImage image;
	QRgb backColor;
	QPoint mouseStartPoint;//���������������ʼλ��
	QPoint mouseMovePoint;//������������ƶ�λ��
	QPoint rePaintPoint1;//���������ػ����ʼ��
	QPoint rePaintPoint2;//���������ػ���յ�
	QPoint firstStartPoint;//��������ͼ���ʼ����ʼ��
	QPoint firstEndPoint;//��������ͼ���ʼ���յ�
};

#endif // PAINTWIDGET_H
