/********************************************************************************
** Form generated from reading UI file 'indicatorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDICATORWIDGET_H
#define UI_INDICATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_indicatorwidget
{
public:
    QLabel *indicatorWidget;
    QCheckBox *toggle0_2;
    QPushButton *info0_2;

    void setupUi(QWidget *indicatorwidget)
    {
        if (indicatorwidget->objectName().isEmpty())
            indicatorwidget->setObjectName("indicatorwidget");
        indicatorwidget->resize(336, 95);
        indicatorWidget = new QLabel(indicatorwidget);
        indicatorWidget->setObjectName("indicatorWidget");
        indicatorWidget->setGeometry(QRect(10, 0, 321, 71));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(indicatorWidget->sizePolicy().hasHeightForWidth());
        indicatorWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(9);
        font.setWeight(QFont::ExtraLight);
        indicatorWidget->setFont(font);
        indicatorWidget->setStyleSheet(QString::fromUtf8("width: 400px;\n"
"background-image: url(:/image/resources/img/info_black.png);\n"
"color: rgb(0, 0, 0);\n"
"height: 50px;\n"
" /*background-color: white;*/\n"
"border-radius: 25px; /* \320\237\320\276\320\273\320\276\320\262\320\270\320\275\320\260 \320\262\321\213\321\201\320\276\321\202\321\213 \320\264\320\273\321\217 \320\277\320\276\320\273\320\275\320\276\320\263\320\276 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"display: flex;\n"
"align-items: center; /* \320\222\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\276\320\265 \320\262\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 0 20px; /* \320\236\321\202\321\201\321\202\321\203\320\277\321\213 \321\201 \320\276\320\261\320\276\320\270\321\205 \320\272\320\276\320\275\321\206\320\276\320\262 */\n"
"box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1); /* \320\235\320\265\320\261\320\276\320"
                        "\273\321\214\321\210\320\260\321\217 \321\202\320\265\320\275\321\214 \320\264\320\273\321\217 \321\215\321\204\321\204\320\265\320\272\321\202\320\260 \320\262\321\201\320\277\320\273\321\213\321\202\320\270\321\217 */\n"
" margin: 10px 0; /* \320\224\320\273\321\217 \320\276\321\202\321\201\321\202\321\203\320\277\320\260 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270, \320\265\321\201\320\273\320\270 \320\270\321\205 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 */\n"
""));
        indicatorWidget->setFrameShadow(QFrame::Raised);
        toggle0_2 = new QCheckBox(indicatorwidget);
        toggle0_2->setObjectName("toggle0_2");
        toggle0_2->setEnabled(true);
        toggle0_2->setGeometry(QRect(257, 21, 59, 31));
        toggle0_2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"	width: 60px;\n"
"	height: 80px;\n"
"	background-image: url(:/image/resources/img/info.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/image/resources/img/on_new.jpg);\n"
"	background-image: url(:/image/resources/img/info.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"	image: url(:/image/resources/img/off_new.jpg);\n"
"	background-image: url(:/image/resources/img/info.png);\n"
"}\n"
"\n"
""));
        info0_2 = new QPushButton(indicatorwidget);
        info0_2->setObjectName("info0_2");
        info0_2->setEnabled(true);
        info0_2->setGeometry(QRect(150, 27, 22, 22));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info0_2->sizePolicy().hasHeightForWidth());
        info0_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        info0_2->setFont(font1);
        info0_2->setMouseTracking(true);
        info0_2->setTabletTracking(true);
        info0_2->setFocusPolicy(Qt::StrongFocus);
        info0_2->setAutoFillBackground(false);
        info0_2->setStyleSheet(QString::fromUtf8("image: url(:/image/resources/img/info_black.png);\n"
"border-radius: 80px;"));
        info0_2->setCheckable(true);
        info0_2->setAutoDefault(false);
        info0_2->setFlat(true);
        indicatorWidget->raise();
        info0_2->raise();
        toggle0_2->raise();

        retranslateUi(indicatorwidget);

        QMetaObject::connectSlotsByName(indicatorwidget);
    } // setupUi

    void retranslateUi(QWidget *indicatorwidget)
    {
        indicatorwidget->setWindowTitle(QCoreApplication::translate("indicatorwidget", "Form", nullptr));
        indicatorWidget->setText(QCoreApplication::translate("indicatorwidget", "<html><head/><body><p>\320\230\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200 \342\204\226 0</p></body></html>", nullptr));
        toggle0_2->setText(QString());
        info0_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class indicatorwidget: public Ui_indicatorwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDICATORWIDGET_H
