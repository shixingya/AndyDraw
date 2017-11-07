#include "preheader.h"
#include "SubjectTabWidget.h"
#include "ui_SubjectTabWidget.h"
#include <QTabWidget>
SubjectTabWidget::SubjectTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectTabWidget)
{
     QWidget *label = new QWidget(this);
    ui->tabWidget->addTab(label,QIcon((":/img/error01.png")),"123");
   //ui->tabWidget->addTab(label,QIcon(QPixmap(":/img/error01.png")),NULL);
    ui->setupUi(this);
}

SubjectTabWidget::~SubjectTabWidget()
{
    delete ui;
}
