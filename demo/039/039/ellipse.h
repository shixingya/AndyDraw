#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape
{public:
	Ellipse();

	void paint(QImage &theImage);//���ػ�ͼ����
};

#endif //ELLIPSE_H