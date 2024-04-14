/********************************************************************************
** Form generated from reading UI file 'restart.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTART_H
#define UI_RESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_restart
{
public:
    QPushButton *restart_2;
    QLineEdit *api_2;
    QLabel *api2;
    QLabel *port2;
    QLineEdit *api_3;

    void setupUi(QDialog *restart)
    {
        if (restart->objectName().isEmpty())
            restart->setObjectName("restart");
        restart->resize(302, 293);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        restart->setFont(font);
        restart->setStyleSheet(QString::fromUtf8("background: #292929;\n"
"display: flex;\n"
"align-items: center;\n"
"justify-content: center;\n"
"flex-direction: column;\n"
"gap: 37px;\n"
"border-radius: 20px;\n"
"z-index: 0;\n"
"\n"
"\n"
""));
        restart_2 = new QPushButton(restart);
        restart_2->setObjectName("restart_2");
        restart_2->setGeometry(QRect(60, 230, 181, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Random Grotesque Standard Book")});
        font1.setBold(false);
        font1.setItalic(false);
        restart_2->setFont(font1);
        restart_2->setStyleSheet(QString::fromUtf8("font: 400 14px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #d9d9d9;\n"
"border-radius: 15px;\n"
"\n"
"width: 672px;\n"
"height: 89px;\n"
"background: #181818;"));
        api_2 = new QLineEdit(restart);
        api_2->setObjectName("api_2");
        api_2->setGeometry(QRect(30, 164, 241, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(api_2->sizePolicy().hasHeightForWidth());
        api_2->setSizePolicy(sizePolicy);
        api_2->setLayoutDirection(Qt::LeftToRight);
        api_2->setAutoFillBackground(false);
        api_2->setStyleSheet(QString::fromUtf8("border-radius: 16px;                     \n"
"background: #d9d9d9;\n"
"border-radius: 20px;\n"
"font: 400 16px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #000;\n"
"text-align: center"));
        api_2->setAlignment(Qt::AlignCenter);
        api2 = new QLabel(restart);
        api2->setObjectName("api2");
        api2->setGeometry(QRect(37, 42, 231, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Random Grotesque Standard Bold")});
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        api2->setFont(font2);
        api2->setStyleSheet(QString::fromUtf8("font-family: \"Random Grotesque Standard Bold\", sans-serif;\n"
"background: transparent;\n"
"font-size: 64px;\n"
"font-weight: normal;\n"
"text-align: center;\n"
"color: #D9D9D9;"));
        port2 = new QLabel(restart);
        port2->setObjectName("port2");
        port2->setGeometry(QRect(36, 133, 231, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Random Grotesque Standard Bold")});
        font3.setBold(false);
        font3.setItalic(false);
        port2->setFont(font3);
        port2->setStyleSheet(QString::fromUtf8("font-family: \"Random Grotesque Standard Bold\", sans-serif;\n"
"background: transparent;\n"
"font-size: 64px;\n"
"font-weight: normal;\n"
"text-align: center;\n"
"color: #D9D9D9;"));
        port2->setAlignment(Qt::AlignCenter);
        api_3 = new QLineEdit(restart);
        api_3->setObjectName("api_3");
        api_3->setGeometry(QRect(30, 74, 241, 41));
        sizePolicy.setHeightForWidth(api_3->sizePolicy().hasHeightForWidth());
        api_3->setSizePolicy(sizePolicy);
        api_3->setLayoutDirection(Qt::LeftToRight);
        api_3->setAutoFillBackground(false);
        api_3->setStyleSheet(QString::fromUtf8("border-radius: 16px;                     \n"
"background: #d9d9d9;\n"
"border-radius: 20px;\n"
"font: 400 16px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #000;\n"
"text-align: center"));
        api_3->setAlignment(Qt::AlignCenter);

        retranslateUi(restart);

        QMetaObject::connectSlotsByName(restart);
    } // setupUi

    void retranslateUi(QDialog *restart)
    {
        restart->setWindowTitle(QCoreApplication::translate("restart", "Dialog", nullptr));
        restart_2->setText(QCoreApplication::translate("restart", "\320\237\320\265\321\200\320\265\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        api_2->setText(QString());
        api2->setText(QCoreApplication::translate("restart", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">IP-\320\260\320\264\321\200\320\265\321\201:</span></p></body></html>", nullptr));
        port2->setText(QCoreApplication::translate("restart", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\320\237\320\276\321\200\321\202:</span></p></body></html>", nullptr));
        api_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class restart: public Ui_restart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTART_H
