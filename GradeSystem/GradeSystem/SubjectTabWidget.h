#pragma once

#include "preheader.h"
namespace Ui {
class SubjectTabWidget;
}

class SubjectTabWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SubjectTabWidget(QWidget *parent = 0);
    ~SubjectTabWidget();

private:
    Ui::SubjectTabWidget *ui;
};
