/*���ļ���Ҫ�����û��壬��������������ƶ����ſ��¼���ʵ�л�ͼ���ƶ�����
*/
#include "paintwidget.h"


PaintWidget::PaintWidget(QWidget *parent)
	: QWidget(parent), currShapeCode(Shape::Line), shape(NULL), 
	isClick(false),isMove(false),inRect(false),iList(0)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	penColor=Qt::black;
	penStyle=Qt::SolidLine;
}

void PaintWidget::paintEvent(QPaintEvent *event)//���ػ�ͼ�¼�������ͼ��
{
    QPainter painter(this);
	image = QImage(size().width(),size().height(),QImage::Format_RGB32);
	backColor = qRgb(255,255,255); //������ʼ������ɫʹ�ð�ɫ
	image.fill(backColor);
    painter.setBrush(Qt::white);
	painter.setRenderHint(QPainter::Antialiasing,true);
	QPen pen;
    painter.drawRect(0, 0, size().width(), size().height());
	foreach(Shape * shape, shapeList)
		{	shape->paint(image);
		}
	if(((shape)&&(isMove==false))||((isMove==true)&&(inRect==false)) )
	{	shape->paint(image);
	}
	else if(isMove==true)
	{	QPainter painter2(&image);//���������
		pen.setStyle(Qt::DashLine);
		painter2.setPen(pen);
		painter2.drawRect(shape->startPoint().x(),shape->startPoint().y(),
			(shape->endPoint().x()-shape->startPoint().x()),
			(shape->endPoint().y()-shape->startPoint().y()));
		shape->paint(image);
	}
	painter.drawImage(0,0,image);
}

void PaintWidget::mousePressEvent(QMouseEvent *event)//����������¼�
{
    switch(currShapeCode)//�ж���Ҫ���Ƶ�ͼ�β�����
    {
    case Shape::Line:
        {
            shape = new Line;
            break;
        }
    case Shape::Rect:
        {
            shape = new Rect;
            break;
        }
	case Shape::Ellipse:
		{	shape = new Ellipse;
			break;
		}
    }
	if((isMove==true)&&((shape->startPoint().isNull())==true))
	{	shape->setStart(rePaintPoint1);
		shape->setEnd(rePaintPoint2);
	}
	
	mouseStartPoint=(event->pos());

	if(isMove==true)
	{	for(iList=(shapeList.size()-1);iList>=0;iList--)
		{	shape=shapeList[iList];
			QRect rect(shape->startPoint(),shape->endPoint());
			if(rect.contains(mouseStartPoint))
			{	qDebug()<<"inner of rect";
				inRect=true;
				firstStartPoint=shape->startPoint();
				firstEndPoint=shape->endPoint();
				update();
				break;
			}
		}
	}
	else
	{	rePaintPoint1=mouseStartPoint;
		shape->setStart(mouseStartPoint);
        shape->setEnd(mouseStartPoint);
		shape->setPenColor(penColor);
		shape->setPenStyle(penStyle);
	}

	if(shape != NULL) //�����ѻ�ͼ�κ��ƶ����ͼ��
	{	
		isClick = false;
		if((isMove==true)&&(inRect==true))
		{	shapeList[iList]=shape;
		}
		else if(isMove==false)
			shapeList<<shape;
    }
}

void PaintWidget::mouseMoveEvent(QMouseEvent *event)//��������ƶ�������ʵ�ֻ�ͼ���ƶ�
{	mouseMovePoint=(event->pos());//�����з����ƶ�������
	if(isMove==false)
    {	if(shape && !isClick) {
			rePaintPoint2=mouseMovePoint;
			shape->setEnd(mouseMovePoint);
			update();
		}
	}
	else if((isMove==true)&&(inRect==true))
	{	int mySideX,mySideY;
		mySideX=(mouseMovePoint.x()-mouseStartPoint.x());
		mySideY=(mouseMovePoint.y()-mouseStartPoint.y());
		rePaintPoint1.setX((firstStartPoint.x())+mySideX);
		rePaintPoint1.setY((firstStartPoint.y())+mySideY);
		shape->setStart(rePaintPoint1);
        rePaintPoint2.setX((firstEndPoint.x())+mySideX);
		rePaintPoint2.setY((firstEndPoint.y())+mySideY);
		shape->setEnd(rePaintPoint2);
		update();
	}
}

void PaintWidget::mouseReleaseEvent(QMouseEvent *event)//�������ſ��¼�
{	if(isMove==false)//�����ж��������³�ʼ��
		isClick = true;
	else if(inRect==true)
	{	inRect=false;
		shape->setStart(rePaintPoint1);
		shape->setEnd(rePaintPoint2);
		update();
	}
}
