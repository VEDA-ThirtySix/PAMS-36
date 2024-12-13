/********************************************************************************
** Form generated from reading UI file 'streaming.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMING_H
#define UI_STREAMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Streaming
{
public:
    QFrame *streamingFrame;
    QLabel *streamingLabel;
    QLabel *dateTimeLabel;
    QLabel *licensetitleLabel;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label_url;
    QFrame *licensePlateframe;
    QVBoxLayout *verticalLayout;
    QLabel *number1;
    QFrame *stateArea;
    QVBoxLayout *verticalLayout_2;
    QFrame *stateFrame;
    QLabel *gate_state;
    QLabel *label_2;
    QLabel *alarm_state;
    QLabel *label;
    QLabel *VehicleEntry;

    void setupUi(QWidget *Streaming)
    {
        if (Streaming->objectName().isEmpty())
            Streaming->setObjectName(QString::fromUtf8("Streaming"));
        Streaming->resize(1052, 587);
        streamingFrame = new QFrame(Streaming);
        streamingFrame->setObjectName(QString::fromUtf8("streamingFrame"));
        streamingFrame->setGeometry(QRect(-10, 0, 1051, 581));
        streamingFrame->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border:none;"));
        streamingFrame->setFrameShape(QFrame::NoFrame);
        streamingLabel = new QLabel(streamingFrame);
        streamingLabel->setObjectName(QString::fromUtf8("streamingLabel"));
        streamingLabel->setGeometry(QRect(20, 100, 671, 461));
        streamingLabel->setStyleSheet(QString::fromUtf8("font: 300 bold 13pt \"Quicksand Light\";\n"
"color:  rgb(243,115,33);\n"
"background:rgba(243,115,33,0.2);\n"
"border:1px solid rgb(243,115,33);"));
        dateTimeLabel = new QLabel(streamingFrame);
        dateTimeLabel->setObjectName(QString::fromUtf8("dateTimeLabel"));
        dateTimeLabel->setGeometry(QRect(20, 10, 671, 31));
        dateTimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 500 12pt \"Quicksand Medium\";\n"
"background-color: rgba(243,115,33,0.5);\n"
"border:1px solid rgb(243,115,33);\n"
"text-align: center; /* \354\210\230\355\217\211 \354\244\221\354\225\231 \354\240\225\353\240\254 */"));
        licensetitleLabel = new QLabel(streamingFrame);
        licensetitleLabel->setObjectName(QString::fromUtf8("licensetitleLabel"));
        licensetitleLabel->setGeometry(QRect(700, 350, 321, 31));
        licensetitleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 500 13pt \"Quicksand Medium\";\n"
"background-color: rgba(243,115,33,0.5);\n"
"border:1px solid rgb(243,115,33);"));
        startButton = new QPushButton(streamingFrame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(20, 70, 341, 31));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        color:  rgb(243,115,33);\n"
"        background:white;\n"
"        border:1px solid rgb(243,115,33);\n"
"        font: 500 10pt \"Quicksand Medium\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        color:  rgb(255, 255, 255);\n"
"        background-color:rgba(243,115,33,0.3);\n"
"        border:1px solid rgb(243,115,33);\n"
"        font: 500 8pt \"Quicksand Medium\";\n"
"}"));
        startButton->setIconSize(QSize(20, 20));
        stopButton = new QPushButton(streamingFrame);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(360, 70, 331, 31));
        stopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        color:  rgb(243,115,33);\n"
"        background:white;\n"
"        border:1px solid rgb(243,115,33);\n"
"        font: 500 10pt \"Quicksand Medium\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        color:  rgb(255, 255, 255);\n"
"        background-color:rgba(243,115,33,0.3);\n"
"        border:1px solid rgb(243,115,33);\n"
"        font: 500 8pt \"Quicksand Medium\";\n"
"}"));
        label_url = new QLabel(streamingFrame);
        label_url->setObjectName(QString::fromUtf8("label_url"));
        label_url->setGeometry(QRect(20, 40, 671, 31));
        label_url->setStyleSheet(QString::fromUtf8("	color:  rgb(154, 154, 154);\n"
"        background:white;\n"
"        border:1px solid rgb(243,115,33);\n"
"        font: 500 10pt \"Quicksand Medium\";\n"
""));
        licensePlateframe = new QFrame(streamingFrame);
        licensePlateframe->setObjectName(QString::fromUtf8("licensePlateframe"));
        licensePlateframe->setGeometry(QRect(700, 380, 321, 181));
        licensePlateframe->setStyleSheet(QString::fromUtf8("color:  rgb(243,115,33);\n"
"background:white;\n"
"border:1px solid rgb(243,115,33);"));
        licensePlateframe->setFrameShape(QFrame::NoFrame);
        verticalLayout = new QVBoxLayout(licensePlateframe);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        number1 = new QLabel(licensePlateframe);
        number1->setObjectName(QString::fromUtf8("number1"));
        number1->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:1px solid rgb(243,115,33);\n"
"font: 300 bold 13pt \"Quicksand Light\";\n"
"color:  rgb(243,115,33);"));

        verticalLayout->addWidget(number1);

        stateArea = new QFrame(streamingFrame);
        stateArea->setObjectName(QString::fromUtf8("stateArea"));
        stateArea->setGeometry(QRect(700, 40, 321, 301));
        stateArea->setStyleSheet(QString::fromUtf8("color:  rgb(243,115,33);\n"
"background:white;\n"
"border:1px solid rgb(243,115,33);"));
        stateArea->setFrameShape(QFrame::NoFrame);
        verticalLayout_2 = new QVBoxLayout(stateArea);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stateFrame = new QFrame(stateArea);
        stateFrame->setObjectName(QString::fromUtf8("stateFrame"));
        stateFrame->setFrameShape(QFrame::StyledPanel);
        stateFrame->setFrameShadow(QFrame::Raised);
        gate_state = new QLabel(stateFrame);
        gate_state->setObjectName(QString::fromUtf8("gate_state"));
        gate_state->setGeometry(QRect(150, 10, 131, 121));
        gate_state->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        gate_state->setScaledContents(true);
        label_2 = new QLabel(stateFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        alarm_state = new QLabel(stateFrame);
        alarm_state->setObjectName(QString::fromUtf8("alarm_state"));
        alarm_state->setGeometry(QRect(40, 50, 61, 51));
        alarm_state->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        alarm_state->setScaledContents(true);

        verticalLayout_2->addWidget(stateFrame);

        label = new QLabel(stateArea);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Sans Serif\";"));

        verticalLayout_2->addWidget(label);

        VehicleEntry = new QLabel(streamingFrame);
        VehicleEntry->setObjectName(QString::fromUtf8("VehicleEntry"));
        VehicleEntry->setGeometry(QRect(700, 10, 321, 31));
        VehicleEntry->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 500 13pt \"Quicksand Medium\";\n"
"background-color: rgba(243,115,33,0.5);\n"
"border:1px solid rgb(243,115,33);"));

        retranslateUi(Streaming);

        QMetaObject::connectSlotsByName(Streaming);
    } // setupUi

    void retranslateUi(QWidget *Streaming)
    {
        Streaming->setWindowTitle(QCoreApplication::translate("Streaming", "Form", nullptr));
        streamingLabel->setText(QCoreApplication::translate("Streaming", "Streaming Video", nullptr));
        dateTimeLabel->setText(QCoreApplication::translate("Streaming", "Date - Time", nullptr));
        licensetitleLabel->setText(QCoreApplication::translate("Streaming", "LicensePlate", nullptr));
        startButton->setText(QCoreApplication::translate("Streaming", "Start", nullptr));
        stopButton->setText(QCoreApplication::translate("Streaming", "Stop", nullptr));
        label_url->setText(QCoreApplication::translate("Streaming", "RTSP Server IP Address", nullptr));
        number1->setText(QCoreApplication::translate("Streaming", "Vehicle2", nullptr));
        gate_state->setText(QString());
        label_2->setText(QCoreApplication::translate("Streaming", " Vehicle State", nullptr));
        alarm_state->setText(QString());
        label->setText(QCoreApplication::translate("Streaming", "Customer Information", nullptr));
        VehicleEntry->setText(QCoreApplication::translate("Streaming", "Event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Streaming: public Ui_Streaming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMING_H
