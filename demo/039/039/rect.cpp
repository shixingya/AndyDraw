#include "rect.h"

Rect::Rect()
{
}

void Rect::paint(QImage &theImage)
{	QPainter pp(&theImage);
	QPen penP;
	penP.setColor(color);
	penP.setStyle(penStyle2);
	pp.setPen(penP);
    pp.drawRect(start.x(), start.y(),
                     end.x() - start.x(), end.y() - start.y());
}
