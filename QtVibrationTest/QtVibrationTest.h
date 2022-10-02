#pragma once

#include <Windows.h>
#include <Xinput.h>
#include <QtWidgets/QMainWindow>
#include "ui_QtVibrationTest.h"

class QtVibrationTest : public QMainWindow
{
    Q_OBJECT

public:
    QtVibrationTest(QWidget *parent = nullptr);
    ~QtVibrationTest();

private:
    Ui::QtVibrationTestClass ui;
    int left_motor_value = 0;
    int right_motor_value = 0;
private slots:
    void SetLeftMotor();    
    void SetRightMotor();
    void SetMotorToController();
};
