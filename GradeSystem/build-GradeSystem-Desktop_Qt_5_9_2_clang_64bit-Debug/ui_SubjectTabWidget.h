/********************************************************************************
** Form generated from reading UI file 'SubjectTabWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTTABWIDGET_H
#define UI_SUBJECTTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectTabWidget
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QTimeEdit *timeEdit;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QDial *dial;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *SubjectTabWidget)
    {
        if (SubjectTabWidget->objectName().isEmpty())
            SubjectTabWidget->setObjectName(QStringLiteral("SubjectTabWidget"));
        SubjectTabWidget->resize(400, 300);
        gridLayout = new QGridLayout(SubjectTabWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(SubjectTabWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        timeEdit = new QTimeEdit(tab);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout_5->addWidget(timeEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        dateEdit = new QDateEdit(tab_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout_4->addWidget(dateEdit, 0, 0, 1, 1);

        dateEdit_2 = new QDateEdit(tab_3);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        gridLayout_4->addWidget(dateEdit_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        dial = new QDial(tab_4);
        dial->setObjectName(QStringLiteral("dial"));

        gridLayout_3->addWidget(dial, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));

        gridLayout_2->addWidget(calendarWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(SubjectTabWidget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(SubjectTabWidget);
    } // setupUi

    void retranslateUi(QWidget *SubjectTabWidget)
    {
        SubjectTabWidget->setWindowTitle(QApplication::translate("SubjectTabWidget", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SubjectTabWidget", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SubjectTabWidget", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SubjectTabWidget", "\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SubjectTabWidget", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectTabWidget: public Ui_SubjectTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTTABWIDGET_H
