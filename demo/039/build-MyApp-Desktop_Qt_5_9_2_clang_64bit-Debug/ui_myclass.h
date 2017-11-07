/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QComboBox *penColorcomboBox;
    QComboBox *penstylecomboBox;

    void setupUi(QMainWindow *MyClassClass)
    {
        if (MyClassClass->objectName().isEmpty())
            MyClassClass->setObjectName(QStringLiteral("MyClassClass"));
        MyClassClass->resize(600, 400);
        centralWidget = new QWidget(MyClassClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyClassClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        MyClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyClassClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyClassClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyClassClass->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MyClassClass);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        penColorcomboBox = new QComboBox(dockWidgetContents_2);
        penColorcomboBox->setObjectName(QStringLiteral("penColorcomboBox"));
        penColorcomboBox->setGeometry(QRect(0, 10, 69, 22));
        penstylecomboBox = new QComboBox(dockWidgetContents_2);
        penstylecomboBox->setObjectName(QStringLiteral("penstylecomboBox"));
        penstylecomboBox->setGeometry(QRect(0, 70, 69, 22));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MyClassClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        retranslateUi(MyClassClass);

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "MyClass", Q_NULLPTR));
        penColorcomboBox->clear();
        penColorcomboBox->insertItems(0, QStringList()
         << QApplication::translate("MyClassClass", "PenColor", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "Black", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "White", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "Red", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "Blue", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "Yellow", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        penColorcomboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        penstylecomboBox->clear();
        penstylecomboBox->insertItems(0, QStringList()
         << QApplication::translate("MyClassClass", "SolidLine", Q_NULLPTR)
         << QApplication::translate("MyClassClass", "DotLine", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
