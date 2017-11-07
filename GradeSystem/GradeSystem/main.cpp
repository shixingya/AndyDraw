#include "preheader.h"

#include "SubjectTabWidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SubjectTabWidget w;
    w.show();

    return a.exec();
}
