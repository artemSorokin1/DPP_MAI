/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *request;
    QLabel *label;
    QLineEdit *api;
    QLineEdit *port;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(863, 674);
        QFont font;
        font.setPointSize(32);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        MainWindow->setFocusPolicy(Qt::TabFocus);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/image/resources/img/background.png);\n"
"background-color: rgba(145, 145, 145, 0);\n"
"background-color: transparent;\n"
""));
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        request = new QPushButton(centralwidget);
        request->setObjectName("request");
        request->setGeometry(QRect(170, 450, 461, 46));
        request->setMouseTracking(true);
        request->setAcceptDrops(true);
        request->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"    color: #d9d9d9;\n"
"    border-radius: 23px;\n"
"    width: 672px;\n"
"    height: 89px;\n"
"    background: #1e1e1e;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: transparent;\n"
"    font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"    color: #d9d9d9;\n"
"    border-radius: 23px;\n"
"    border: 1px solid #d9d9d9;\n"
"    width: 672px;\n"
"    height: 89px;\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 160, 721, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("random grotesque standard book")});
        font1.setKerning(true);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"align-items: center;\n"
"justify-content: center;\n"
"font-size: 40px; /* \320\270\320\273\320\270 \320\264\321\200\321\203\320\263\320\276\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\262 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\275\321\203\320\266\320\264 */\n"
"color: #D9D9D9; \n"
"font-family: 'random grotesque standard book', sans-serif; \n"
"text-shadow: 1px 1px 4px rgba(255, 255, 255, 0.8); /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \321\202\320\265\320\275\320\270 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 10px 20px; /* \320\275\320\265\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 \321\202\320\265\320\272\321\201\321\202\320\260 */"));
        api = new QLineEdit(centralwidget);
        api->setObjectName("api");
        api->setGeometry(QRect(170, 270, 459, 61));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(api->sizePolicy().hasHeightForWidth());
        api->setSizePolicy(sizePolicy);
        api->setLayoutDirection(Qt::LeftToRight);
        api->setAutoFillBackground(false);
        api->setStyleSheet(QString::fromUtf8("border-radius: 20px;                     \n"
"background: #d9d9d9;\n"
"border-radius: 30px;\n"
"font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #000;\n"
"text-align: center;\n"
"box-shadow: transparent; "));
        api->setAlignment(Qt::AlignCenter);
        port = new QLineEdit(centralwidget);
        port->setObjectName("port");
        port->setGeometry(QRect(170, 340, 459, 60));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(port->sizePolicy().hasHeightForWidth());
        port->setSizePolicy(sizePolicy1);
        port->setStyleSheet(QString::fromUtf8("border-radius: 30px;\n"
"background: #d9d9d9;\n"
"font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #000;\n"
"box-shadow: transparent; "));
        port->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 863, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        request->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201 \320\275\320\260 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\320\275\320\265\320\273\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260\320\274\320\270", nullptr));
        api->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
