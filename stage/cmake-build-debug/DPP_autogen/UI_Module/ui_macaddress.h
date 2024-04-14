/********************************************************************************
** Form generated from reading UI file 'macaddress.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACADDRESS_H
#define UI_MACADDRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_macaddress
{
public:
    QLabel *label;

    void setupUi(QWidget *macaddress)
    {
        if (macaddress->objectName().isEmpty())
            macaddress->setObjectName("macaddress");
        macaddress->resize(396, 375);
        label = new QLabel(macaddress);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 391, 371));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 6, 6);"));

        retranslateUi(macaddress);

        QMetaObject::connectSlotsByName(macaddress);
    } // setupUi

    void retranslateUi(QWidget *macaddress)
    {
        macaddress->setWindowTitle(QCoreApplication::translate("macaddress", "Form", nullptr));
        label->setText(QCoreApplication::translate("macaddress", "<html><head/><body><p align=\"center\"><span style=\" font-family:'Arial','sans-serif'; font-size:24px; font-weight:700; color:#ffffff;\">\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 MAC-\320\260\320\264\321\200\320\265\321\201\320\260\320\274\320\270</span><span style=\" font-family:'Arial','sans-serif'; color:#ffffff;\"/></p><p align=\"center\"><span style=\" font-family:'Arial','sans-serif'; font-size:18px; color:#ffffff;\">e0:db:55:a9:0c </span><span style=\" font-family:'Arial','sans-serif'; font-size:18px; color:#4caf50;\">\320\242\320\265\320\272\321\203\321\211\320\270\320\271 \320\260\320\264\321\200\320\265\321\201. \320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214</span><span style=\" font-family:'Arial','sans-serif'; color:#ffffff;\"/></p><p align=\"center\"><span style=\" font-family:'Arial','sans-serif'; font-size:18px; color:#ffffff;\">50:46:5d:6e:8c:20 </span><span style=\" font-family:'Arial','sans-serif'; font-size:18px; color:#4caf50;\">\320"
                        "\220\320\264\321\200\320\265\321\201 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\321\221\320\275\320\275\320\276\320\263\320\276 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260. \320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214</span><span style=\" font-family:'Arial','sans-serif'; color:#ffffff;\"/></p><p align=\"center\"><span style=\" font-family:'Arial','sans-serif'; font-size:14px; color:#ffffff; background-color:rgba(255,255,255,0.098039);\">2023-04-12 08:30:15 - [INFO] - \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\267\320\260\320\277\321\203\321\211\320\265\320\275\320\260.</span><span style=\" font-family:'Arial','sans-serif'; font-size:14px; color:#ffffff;\"/></p><p align=\"center\"><span style=\" font-family:'Arial','sans-serif'; font-size:14px; color:#ffffff; background-color:rgba(255,255,255,0.098039);\">...\320\264\321\200\321\203\320\263\320\270\320\265 \320\273\320\276\320\263\320\270...</span><span st"
                        "yle=\" font-family:'Arial','sans-serif'; font-size:14px; color:#ffffff;\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class macaddress: public Ui_macaddress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACADDRESS_H
