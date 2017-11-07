/*此文件主要是创建按钮，设置槽
*/
#include "mainwindow.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	QToolBar *bar = this->addToolBar("Tools");
    QActionGroup *group = new QActionGroup(bar);

    QAction *drawLineAction = new QAction("Line", bar);//设置画直线按钮
    drawLineAction->setToolTip(tr("Draw a line."));
    drawLineAction->setStatusTip(tr("Draw a line."));
    drawLineAction->setCheckable(true);
    drawLineAction->setChecked(true);
    group->addAction(drawLineAction);
	bar->addAction(drawLineAction);
    
	QAction *drawRectAction = new QAction("Rectangle", bar);//设置画矩形按钮
    drawRectAction->setToolTip(tr("Draw a rectangle."));
    drawRectAction->setStatusTip(tr("Draw a rectangle."));
    drawRectAction->setCheckable(true);
    group->addAction(drawRectAction);
    bar->addAction(drawRectAction);


	QAction *drawEllipseAction = new QAction("Ellipse", bar);//设置画椭圆按钮
    drawEllipseAction->setToolTip(tr("Draw a ellipse."));
    drawEllipseAction->setStatusTip(tr("Draw a ellipse."));
    drawEllipseAction->setCheckable(true);
    group->addAction(drawEllipseAction);
    bar->addAction(drawEllipseAction);

	QAction *moveGraphAction = new QAction("Move", bar);//设置移动按钮
    moveGraphAction->setToolTip(tr("Move the graph."));
    moveGraphAction->setStatusTip(tr("Move the graph."));
    moveGraphAction->setCheckable(true);
    group->addAction(moveGraphAction);
    bar->addAction(moveGraphAction);

	QAction *saveAction = new QAction("Save", bar);//设置移动按钮
    saveAction->setToolTip(tr("Save the graph."));
    saveAction->setStatusTip(tr("Save the graph."));
    group->addAction(saveAction);
    bar->addAction(saveAction);

	QLabel *statusMsg = new QLabel;
    statusBar()->addWidget(statusMsg);

    paintWidget = new PaintWidget(this);
    setCentralWidget(paintWidget);

    connect(drawLineAction, SIGNAL(triggered()),//链接信号和槽
            this, SLOT(drawLineActionTriggered()));
    connect(drawRectAction, SIGNAL(triggered()),
            this,SLOT(drawRectActionTriggered()));
	connect(drawEllipseAction,SIGNAL(triggered()),
			this, SLOT(drawEllipseActionTriggered()));
    connect(this, SIGNAL(changeCurrentShape(Shape::Code)),
            paintWidget, SLOT(setCurrentShape(Shape::Code)));
	connect(moveGraphAction,SIGNAL(triggered()),
			paintWidget,SLOT(moveGraph()));
	connect(saveAction,SIGNAL(triggered()),
			paintWidget,SLOT(saveGraph()));
	connect(ui.penColorcomboBox,SIGNAL(activated(QString)),
			this,SLOT(creatColorComboBoxTriggered(QString)));
	connect(ui.penstylecomboBox,SIGNAL(activated(QString)),
			this,SLOT(changePenStyleTriggered(QString)));
}


void MainWindow::changePenStyleTriggered(QString style) 
{
	if(style == tr("SolidLine"))
	{	paintWidget->penStyle=Qt::SolidLine;
	}
	else if(style == tr("DotLine"))
	{	paintWidget->penStyle=Qt::DotLine;
	}
}

void MainWindow::creatColorComboBoxTriggered(QString penColorString)
{	if(penColorString==tr("Black"))
	{	paintWidget->penColor=Qt::black;
	}
	else if(penColorString==tr("White"))
	{	paintWidget->penColor=Qt::white;
	}
	else if(penColorString==tr("Red"))
	{	paintWidget->penColor=Qt::red;
	}
	else if(penColorString==tr("Blue"))
	{	paintWidget->penColor=Qt::blue;
	}
	else if(penColorString==tr("Yellow"))
	{	paintWidget->penColor=Qt::yellow;
	}
}

void MainWindow::drawLineActionTriggered()//设置画直线槽，并发出改变图形为直线的信号
{
    emit changeCurrentShape(Shape::Line);
}

void MainWindow::drawRectActionTriggered()//设置画矩形槽，并发出改变图形为矩形的信号
{
    emit changeCurrentShape(Shape::Rect);
}

void MainWindow::drawEllipseActionTriggered()//设置画椭圆槽，并发出改变图形为椭圆的信号
{	
	emit changeCurrentShape(Shape::Ellipse);
}