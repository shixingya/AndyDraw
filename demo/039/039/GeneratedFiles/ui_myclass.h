/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created: Wed Dec 18 09:50:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

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
            MyClassClass->setObjectName(QString::fromUtf8("MyClassClass"));
        MyClassClass->resize(600, 400);
        centralWidget = new QWidget(MyClassClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MyClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyClassClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        MyClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyClassClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyClassClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyClassClass->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MyClassClass);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        penColorcomboBox = new QComboBox(dockWidgetContents_2);
        penColorcomboBox->setObjectName(QString::fromUtf8("penColorcomboBox"));
        penColorcomboBox->setGeometry(QRect(0, 10, 69, 22));
        penstylecomboBox = new QComboBox(dockWidgetContents_2);
        penstylecomboBox->setObjectName(QString::fromUtf8("penstylecomboBox"));
        penstylecomboBox->setGeometry(QRect(0, 70, 69, 22));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MyClassClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        retranslateUi(MyClassClass);

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "MyClass", 0, QApplication::UnicodeUTF8));
        penColorcomboBox->clear();
        penColorcomboBox->insertItems(0, QStringList()
         << QApplication::translate("MyClassClass", "PenColor", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "Black", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "White", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "Red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "Yellow", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        penColorcomboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        penstylecomboBox->clear();
        penstylecomboBox->insertItems(0, QStringList()
         << QApplication::translate("MyClassClass", "SolidLine", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MyClassClass", "DotLine", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
