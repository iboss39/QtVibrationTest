/********************************************************************************
** Form generated from reading UI file 'QtVibrationTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTVIBRATIONTEST_H
#define UI_QTVIBRATIONTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtVibrationTestClass
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QScrollBar *left_motor_scrollbar;
    QLabel *label;
    QScrollBar *right_motor_scrollbar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtVibrationTestClass)
    {
        if (QtVibrationTestClass->objectName().isEmpty())
            QtVibrationTestClass->setObjectName(QString::fromUtf8("QtVibrationTestClass"));
        QtVibrationTestClass->resize(600, 113);
        centralWidget = new QWidget(QtVibrationTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        left_motor_scrollbar = new QScrollBar(centralWidget);
        left_motor_scrollbar->setObjectName(QString::fromUtf8("left_motor_scrollbar"));
        left_motor_scrollbar->setMaximum(65535);
        left_motor_scrollbar->setSingleStep(1000);
        left_motor_scrollbar->setPageStep(10000);
        left_motor_scrollbar->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, left_motor_scrollbar);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        right_motor_scrollbar = new QScrollBar(centralWidget);
        right_motor_scrollbar->setObjectName(QString::fromUtf8("right_motor_scrollbar"));
        right_motor_scrollbar->setMaximum(65535);
        right_motor_scrollbar->setSingleStep(100);
        right_motor_scrollbar->setPageStep(10000);
        right_motor_scrollbar->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, right_motor_scrollbar);

        QtVibrationTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtVibrationTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        QtVibrationTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtVibrationTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtVibrationTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtVibrationTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtVibrationTestClass->setStatusBar(statusBar);

        retranslateUi(QtVibrationTestClass);

        QMetaObject::connectSlotsByName(QtVibrationTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtVibrationTestClass)
    {
        QtVibrationTestClass->setWindowTitle(QCoreApplication::translate("QtVibrationTestClass", "QtVibrationTest", nullptr));
        label_2->setText(QCoreApplication::translate("QtVibrationTestClass", "LeftMotor", nullptr));
        label->setText(QCoreApplication::translate("QtVibrationTestClass", "<html><head/><body><p>RightMotor</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtVibrationTestClass: public Ui_QtVibrationTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVIBRATIONTEST_H
