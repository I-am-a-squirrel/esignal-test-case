/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QTreeView *filesystemTreeView;
    QLabel *label_3;
    QProgressBar *fileTreeProgressBar;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLCDNumber *fileLcdCounter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLCDNumber *wholeSizeLcdNumber;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QListView *spaceTypesListView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLCDNumber *lcdNumber;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLCDNumber *subcatalogsLcdNumber;
    QLabel *label_8;
    QProgressBar *progressBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(89, 144, 233, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 144, 233);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(15, 8, 771, 561));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        filesystemTreeView = new QTreeView(widget);
        filesystemTreeView->setObjectName("filesystemTreeView");

        verticalLayout_3->addWidget(filesystemTreeView);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        fileTreeProgressBar = new QProgressBar(widget);
        fileTreeProgressBar->setObjectName("fileTreeProgressBar");
        fileTreeProgressBar->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(255, 0, 0);"));
        fileTreeProgressBar->setValue(24);

        verticalLayout_3->addWidget(fileTreeProgressBar);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        fileLcdCounter = new QLCDNumber(widget);
        fileLcdCounter->setObjectName("fileLcdCounter");

        horizontalLayout_2->addWidget(fileLcdCounter);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        wholeSizeLcdNumber = new QLCDNumber(widget);
        wholeSizeLcdNumber->setObjectName("wholeSizeLcdNumber");

        horizontalLayout->addWidget(wholeSizeLcdNumber);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setPointSize(19);
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        spaceTypesListView = new QListView(widget);
        spaceTypesListView->setObjectName("spaceTypesListView");

        verticalLayout->addWidget(spaceTypesListView);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");

        horizontalLayout_3->addWidget(label_10);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");

        horizontalLayout_3->addWidget(lcdNumber);

        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        horizontalLayout_4->addWidget(label_9);

        subcatalogsLcdNumber = new QLCDNumber(widget);
        subcatalogsLcdNumber->setObjectName("subcatalogsLcdNumber");

        horizontalLayout_4->addWidget(subcatalogsLcdNumber);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(85, 255, 0);"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        horizontalLayout_5->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \321\204\320\260\320\271\320\273\320\276\320\262\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201 \321\201\320\272\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\221", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\277\320\276 \321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\321\217\320\274:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\234\320\221", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\264\320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\276\320\262 \320\277\320\276 \320\264\320\260\320\275\320\275\320\276\320\271 \320\277\320\260\320\277\320\272\320\265:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\265\321\201\321\201 \320\277\320\276\320\264\321\201\321\207\321\221\321\202\320\260 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
