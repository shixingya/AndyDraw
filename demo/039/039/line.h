#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line : public Shape
{
public:
    Line();

    void paint(QImage &theImage);//���ػ�ͼ����
};

#endif // LINE_H
