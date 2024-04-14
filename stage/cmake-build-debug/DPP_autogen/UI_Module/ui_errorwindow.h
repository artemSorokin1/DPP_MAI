/********************************************************************************
** Form generated from reading UI file 'errorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWINDOW_H
#define UI_ERRORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_errorWindow
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *errorWindow)
    {
        if (errorWindow->objectName().isEmpty())
            errorWindow->setObjectName("errorWindow");
        errorWindow->resize(474, 290);
        errorWindow->setStyleSheet(QString::fromUtf8("background: #292929;\n"
"border-radius: 20px;\n"
"text-align: center;\n"
"display: flex;\n"
"justify-content: center;"));
        verticalLayout = new QVBoxLayout(errorWindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        scrollArea = new QScrollArea(errorWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("background: #292929;\n"
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
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 472, 337));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"text-align: center;\n"
"align-items: center;\n"
"justify-content: center;\n"
"font-size: 16px; /* \320\270\320\273\320\270 \320\264\321\200\321\203\320\263\320\276\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\262 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\275\321\203\320\266\320\264 */\n"
"color: #D9D9D9; \n"
"font-family: 'random grotesque standard book', sans-serif; \n"
"text-shadow: 1px 1px 4px rgba(255, 255, 255, 0.8); /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \321\202\320\265\320\275\320\270 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 10px 20px; /* \320\275\320\265\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 \321\202\320\265\320\272\321\201\321\202\320\260 */"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(errorWindow);

        QMetaObject::connectSlotsByName(errorWindow);
    } // setupUi

    void retranslateUi(QWidget *errorWindow)
    {
        errorWindow->setWindowTitle(QCoreApplication::translate("errorWindow", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("errorWindow", "\320\222 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265 \342\204\2263 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\272\320\260 \321\201\320\273\320\265\320\263\320\272\320\260 \320\277\321\200\320\265\320\262\321\213\321\210\320\260\320\265\321\202 1 \320\220", nullptr));
        label_8->setText(QCoreApplication::translate("errorWindow", "\320\222 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265 \342\204\2261 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\272\320\260 \320\277\321\200\320\265\320\262\321\213\321\211\320\260\320\265\321\202 1 \320\220", nullptr));
        label_7->setText(QCoreApplication::translate("errorWindow", "\320\222 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265 \342\204\2261 \321\203\321\200\320\276\320\262\320\265\320\275\321\214 \321\202\320\276\320\272\320\260 \320\277\321\200\320\265\320\262\321\213\321\211\320\260\320\265\321\202 1 \320\220", nullptr));
        label_6->setText(QCoreApplication::translate("errorWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("errorWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("errorWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("errorWindow", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorWindow: public Ui_errorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWINDOW_H
