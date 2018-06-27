/********************************************************************************
** Form generated from reading UI file 'AddresBook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESBOOK_H
#define UI_ADDRESBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddresBookClass
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidgetBook;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddresBookClass)
    {
        if (AddresBookClass->objectName().isEmpty())
            AddresBookClass->setObjectName(QStringLiteral("AddresBookClass"));
        AddresBookClass->resize(703, 608);
        centralWidget = new QWidget(AddresBookClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidgetBook = new QTableWidget(centralWidget);
        if (tableWidgetBook->columnCount() < 4)
            tableWidgetBook->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetBook->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetBook->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetBook->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetBook->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetBook->setObjectName(QStringLiteral("tableWidgetBook"));
        tableWidgetBook->setGeometry(QRect(10, 80, 151, 311));
        tableWidgetBook->setColumnCount(4);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 40, 491, 481));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddresBookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddresBookClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 703, 21));
        AddresBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddresBookClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AddresBookClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AddresBookClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AddresBookClass->setStatusBar(statusBar);

        retranslateUi(AddresBookClass);

        QMetaObject::connectSlotsByName(AddresBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddresBookClass)
    {
        AddresBookClass->setWindowTitle(QApplication::translate("AddresBookClass", "AddresBook", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetBook->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddresBookClass", "\320\244.\320\230.\320\236", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetBook->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddresBookClass", "\320\235\320\276\320\274\320\265\321\200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetBook->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AddresBookClass", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetBook->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AddresBookClass", "\320\220\320\264\321\200\320\265\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddresBookClass: public Ui_AddresBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESBOOK_H
