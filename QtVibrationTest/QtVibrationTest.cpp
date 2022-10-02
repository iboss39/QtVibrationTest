#include "QtVibrationTest.h"

QtVibrationTest::QtVibrationTest(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);    
    connect(ui.left_motor_scrollbar, &QScrollBar::valueChanged, this, &QtVibrationTest::SetLeftMotor);
    connect(ui.right_motor_scrollbar, &QScrollBar::valueChanged, this, &QtVibrationTest::SetRightMotor);
}

QtVibrationTest::~QtVibrationTest()
{}

void QtVibrationTest::SetMotorToController()
{
    for (DWORD i = 0; i < XUSER_MAX_COUNT; i++)
    {
        XINPUT_STATE state;
        ZeroMemory(&state, sizeof(XINPUT_STATE));

        // Simply get the state of the controller from XInput.
        DWORD dwResult;
        dwResult = XInputGetState(i, &state);

        if (dwResult == ERROR_SUCCESS)
        {
            XINPUT_VIBRATION vibration;
            ZeroMemory(&vibration, sizeof(XINPUT_VIBRATION));
            vibration.wLeftMotorSpeed = left_motor_value;
            vibration.wRightMotorSpeed = right_motor_value;
            XInputSetState(i, &vibration);
        }
    }
}

void QtVibrationTest::SetLeftMotor()
{
    left_motor_value = ui.left_motor_scrollbar->value(); 
    SetMotorToController();
}

void QtVibrationTest::SetRightMotor()
{    
    right_motor_value = ui.right_motor_scrollbar->value();
    SetMotorToController();
}