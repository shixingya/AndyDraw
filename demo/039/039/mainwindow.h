#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>

#include "shape.h"
#include "paintwidget.h"
#include "ui_myclass.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

signals:
    void changeCurrentShape(Shape::Code newShape);

private slots:
    void drawLineActionTriggered();
    void drawRectActionTriggered();
	void drawEllipseActionTriggered();
	void creatColorComboBoxTriggered(QString penColorString);
	void changePenStyleTriggered(QString style);

private:
	Ui::MyClassClass ui;
	PaintWidget *paintWidget;
};

#endif // MAINWINDOW_H
