#include "ellipse.h"

Ellipse::Ellipse()
{
}

void Ellipse::paint(QImage &theImage)
{	QPainter pp(&theImage);
	QPen penP;
	penP.setColor(color);
	penP.setStyle(penStyle2);
	pp.setPen(penP);
	pp.drawEllipse(start.x(),start.y(),end.x()-start.x(),end.y()-start.y());
}