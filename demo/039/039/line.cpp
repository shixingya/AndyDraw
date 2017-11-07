#include "line.h"

Line::Line()
{
}

void Line::paint(QImage &theImage)
{	QPainter pp(&theImage);
	QPen penP;
	penP.setColor(color);
	penP.setStyle(penStyle2);
	pp.setPen(penP);
    pp.drawLine(start, end);
}
