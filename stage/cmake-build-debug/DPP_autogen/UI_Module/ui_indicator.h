/********************************************************************************
** Form generated from reading UI file 'indicator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDICATOR_H
#define UI_INDICATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_indicator
{
public:
    QPushButton *build;
    QPushButton *mistakes;
    QPushButton *macAddress;
    QLabel *top;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelInfo0;
    QLabel *labelInfo1;
    QPushButton *restart;
    QLabel *indiccount;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *indicator)
    {
        if (indicator->objectName().isEmpty())
            indicator->setObjectName("indicator");
        indicator->setEnabled(true);
        indicator->resize(1066, 742);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(indicator->sizePolicy().hasHeightForWidth());
        indicator->setSizePolicy(sizePolicy);
        indicator->setMinimumSize(QSize(1066, 0));
        QFont font;
        font.setPointSize(7);
        font.setWeight(QFont::Thin);
        indicator->setFont(font);
        indicator->setMouseTracking(true);
        indicator->setTabletTracking(true);
        indicator->setFocusPolicy(Qt::TabFocus);
        indicator->setAcceptDrops(true);
        indicator->setAutoFillBackground(false);
        indicator->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);\n"
"background-image: url(:/image/resources/img/background.png);"));
        indicator->setSizeGripEnabled(false);
        build = new QPushButton(indicator);
        build->setObjectName("build");
        build->setGeometry(QRect(10, 10, 341, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(build->sizePolicy().hasHeightForWidth());
        build->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Random Grotesque Standard Book")});
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        build->setFont(font1);
        build->setMouseTracking(true);
        build->setAutoFillBackground(false);
        build->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"	color: #fff;\n"
"	background: #353535;\n"
"	border: 2px solid transparent;\n"
"  	text-decoration: none; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  text-decoration: underline; \n"
"}\n"
""));
        build->setAutoDefault(true);
        build->setFlat(true);
        mistakes = new QPushButton(indicator);
        mistakes->setObjectName("mistakes");
        mistakes->setGeometry(QRect(600, 10, 141, 41));
        mistakes->setStyleSheet(QString::fromUtf8("font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"color: #fff;\n"
"background: #353535;\n"
"border: 2px solid transparent;"));
        macAddress = new QPushButton(indicator);
        macAddress->setObjectName("macAddress");
        macAddress->setGeometry(QRect(770, 10, 271, 41));
        macAddress->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 400 20px \"Random Grotesque Standard Book\", sans-serif;\n"
"	color: #fff;\n"
"	background: #353535;\n"
"	border: 2px solid transparent;\n"
"  	text-decoration: none; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  text-decoration: underline; \n"
"}\n"
""));
        macAddress->setFlat(true);
        top = new QLabel(indicator);
        top->setObjectName("top");
        top->setGeometry(QRect(0, 0, 1071, 61));
        top->setStyleSheet(QString::fromUtf8("background: #353535;\n"
"width: 1440px;\n"
"height: 112px;"));
        label = new QLabel(indicator);
        label->setObjectName("label");
        label->setGeometry(QRect(372, 280, 701, 201));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("random grotesque standard book")});
        font2.setBold(false);
        font2.setItalic(false);
        font2.setHintingPreference(QFont::PreferFullHinting);
        label->setFont(font2);
        label->setAcceptDrops(true);
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"align-items: center;\n"
"justify-content: center;\n"
"font-size: 25px; /* \320\270\320\273\320\270 \320\264\321\200\321\203\320\263\320\276\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 \320\262 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \320\276\321\202 \320\275\321\203\320\266\320\264 */\n"
"color: #fff; \n"
"font-family: 'random grotesque standard book', sans-serif; \n"
"text-shadow: 1px 1px 4px rgba(255, 255, 255, 0.8); /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \321\202\320\265\320\275\320\270 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 10px 20px; /* \320\275\320\265\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
""));
        label->setLineWidth(0);
        label->setTextFormat(Qt::MarkdownText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextSelectableByMouse);
        label_2 = new QLabel(indicator);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 441, 121));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("random grotesque standard book")});
        font3.setPointSize(9);
        font3.setWeight(QFont::Medium);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #fff; \n"
"font-family: 'random grotesque standard book', sans-serif; \n"
"text-shadow: 1px 1px 4px rgba(255, 255, 255, 0.8); /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \321\202\320\265\320\275\320\270 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"padding: 10px 20px; /* \320\275\320\265\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 \321\202\320\265\320\272\321\201\321\202\320\260 */"));
        label_2->setFrameShadow(QFrame::Raised);
        labelInfo0 = new QLabel(indicator);
        labelInfo0->setObjectName("labelInfo0");
        labelInfo0->setEnabled(true);
        labelInfo0->setGeometry(QRect(530, 110, 521, 591));
        labelInfo0->setStyleSheet(QString::fromUtf8("border-color: rgb(221, 221, 221);\n"
"background-color: rgb(194, 194, 194);\n"
"background-image: url(:/image/resources/img/white_back.jpg);\n"
"border-radius: 35px; /* \320\237\320\276\320\273\320\276\320\262\320\270\320\275\320\260 \320\262\321\213\321\201\320\276\321\202\321\213 \320\264\320\273\321\217 \320\277\320\276\320\273\320\275\320\276\320\263\320\276 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"display: flex;"));
        labelInfo0->setAlignment(Qt::AlignCenter);
        labelInfo1 = new QLabel(indicator);
        labelInfo1->setObjectName("labelInfo1");
        labelInfo1->setEnabled(true);
        labelInfo1->setGeometry(QRect(560, 230, 521, 591));
        labelInfo1->setStyleSheet(QString::fromUtf8("border-color: rgb(221, 221, 221);\n"
"background-color: rgb(194, 194, 194);\n"
"background-image: url(:/image/resources/img/white_back.jpg);\n"
"border-radius: 35px; /* \320\237\320\276\320\273\320\276\320\262\320\270\320\275\320\260 \320\262\321\213\321\201\320\276\321\202\321\213 \320\264\320\273\321\217 \320\277\320\276\320\273\320\275\320\276\320\263\320\276 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"display: flex;"));
        labelInfo1->setAlignment(Qt::AlignCenter);
        restart = new QPushButton(indicator);
        restart->setObjectName("restart");
        restart->setEnabled(true);
        restart->setGeometry(QRect(370, 170, 31, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(restart->sizePolicy().hasHeightForWidth());
        restart->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setStyleStrategy(QFont::PreferAntialias);
        restart->setFont(font4);
        restart->setMouseTracking(true);
        restart->setTabletTracking(true);
        restart->setFocusPolicy(Qt::StrongFocus);
        restart->setAutoFillBackground(false);
        restart->setStyleSheet(QString::fromUtf8("image: url(:/image/resources/img/restart.png);\n"
"border-radius: 80px;\n"
"background: transparent;"));
        restart->setCheckable(true);
        restart->setAutoDefault(false);
        restart->setFlat(true);
        indiccount = new QLabel(indicator);
        indiccount->setObjectName("indiccount");
        indiccount->setGeometry(QRect(420, 170, 71, 41));
        indiccount->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #D9D9D9; \n"
"font-family: 'random grotesque standard book', sans-serif; \n"
"text-shadow: 1px 1px 4px rgba(255, 255, 255, 0.8); /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \321\202\320\265\320\275\320\270 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
""));
        label_3 = new QLabel(indicator);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(704, 460, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/resources/img/info.png")));
        label_3->setScaledContents(true);
        scrollArea = new QScrollArea(indicator);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 230, 400, 491));
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMaximumSize(QSize(400, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName("scrollAreaWidget");
        scrollAreaWidget->setGeometry(QRect(0, 0, 377, 489));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidget);
        top->raise();
        build->raise();
        mistakes->raise();
        macAddress->raise();
        label_2->raise();
        labelInfo0->raise();
        labelInfo1->raise();
        label->raise();
        restart->raise();
        indiccount->raise();
        label_3->raise();
        scrollArea->raise();

        retranslateUi(indicator);

        QMetaObject::connectSlotsByName(indicator);
    } // setupUi

    void retranslateUi(QDialog *indicator)
    {
        indicator->setWindowTitle(QCoreApplication::translate("indicator", "Dialog", nullptr));
        build->setText(QCoreApplication::translate("indicator", "\320\241\320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 IP-\320\260\320\264\321\200\320\265\321\201 \320\270 \320\277\320\276\321\200\321\202", nullptr));
        mistakes->setText(QCoreApplication::translate("indicator", "\320\236\321\210\320\270\320\261\320\272\320\270", nullptr));
        macAddress->setText(QCoreApplication::translate("indicator", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 MAC-\320\260\320\264\321\200\320\265\321\201\320\260\320\274\320\270", nullptr));
        top->setText(QString());
        label->setText(QCoreApplication::translate("indicator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'random grotesque standard book','sans-serif'; font-size:25px; font-weight:400; font-style:normal;\" bgcolor=\"transparent\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:34px; color:#ffffff;\">    \320\247\321\202\320\276\320\261\321\213 \320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260,</span></p>\n"
"<p align=\"c"
                        "enter\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:34px; color:#ffffff;\">    \320\262\320\272\320\273\321\216\321\207\320\270\321\202\320\265 \320\276\320\264\320\270\320\275 \320\270\320\267 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213\321\205 \320\270</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:34px; color:#ffffff;\">    \320\275\320\260\320\266\320\274\320\270\321\202\320\265</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("indicator", "<html><head/><body><p><span style=\" font-size:24pt; color:#ffffff;\">\320\230\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\321\213, \320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 </span></p><p><span style=\" font-size:24pt; color:#ffffff;\">\320\275\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202: </span></p></body></html>", nullptr));
        labelInfo0->setText(QCoreApplication::translate("indicator", "<!DOCTYPE html>\n"
"<html lang=\"ru\">\n"
"<head>\n"
"<meta charset=\"UTF-8\">\n"
"<title>\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265</title>\n"
"<style>\n"
"  body {\n"
"    font-family: Arial, sans-serif;\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"    height: 100vh; /* \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\262\321\213\321\201\320\276\321\202\321\213 \320\272\320\276\320\275\321\202\320\265\320\271\320\275\320\265\321\200\320\260 \320\275\320\260 \320\262\321\201\321\216 \320\262\321\213\321\201\320\276\321\202\321\203 \320\276\320\272\320\275\320\260 */\n"
"  }\n"
"  .container {\n"
"    max-width: 600px;\n"
"    padding: 20px;\n"
"    border-radius: 8px;\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);\n"
"    text-align: center;\n"
"    line-height: 2;\n"
"    border: 5px solid #ccc;\n"
""
                        "  }\n"
"  .header {\n"
"    font-size: 30px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 15px;\n"
"  }\n"
"  .serial-number, .color, .current-level {\n"
"    margin-bottom: 20px;\n"
"  }\n"
"  .serial-number-title, .color-title, .current-level-title {\n"
"    font-weight: bold;\n"
"    font-size: 22px;\n"
"    font-family: \"Random Grotesque Standard Bold\", sans-serif;\n"
"\n"
"  }\n"
"  .color-value {\n"
"    color: #8a0000;\n"
"    font-size: 28px; /* \321\203\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  }\n"
"  .current-level-value {\n"
"    font-size: 40px;\n"
"    color: #8a0000;\n"
"  }\n"
"  .serial-number div,\n"
"  .color div {\n"
"    font-size: 24px; /* \321\203\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  }\n"
"<"
                        "/style>\n"
"</head>\n"
"<body>\n"
"<div class=\"container\">\n"
"  <div class=\"header\">\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265 \342\204\2260</div>\n"
"  <div class=\"serial-number\">\n"
"    <div class=\"serial-number-title\">\321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200:</div>\n"
"    <div>tjfxkd-fkencd-kj:sw2</div>\n"
"  </div>\n"
"  <div class=\"color\">\n"
"    <div class=\"color-title\">\321\206\320\262\320\265\321\202:</div>\n"
"    <div class=\"color-value\">\320\272\321\200\320\260\321\201\320\275\321\213\320\271</div>\n"
"    <div><b>\320\242\320\270\320\277:</b></div>\n"
"    <div>\320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200</div> \n"
"  </div>\n"
"  <div class=\"current-level\">\n"
"    <div class=\"current-level-title\">\320\243\321\200\320\276\320\262\320\265\320\275\321\214"
                        " \321\202\320\276\320\272\320\260 \320\275\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202</div>\n"
"    <div class=\"current-level-value\">2.328 \320\220</div>\n"
"  </div>\n"
"</div>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        labelInfo1->setText(QCoreApplication::translate("indicator", "<!DOCTYPE html>\n"
"<html lang=\"ru\">\n"
"<head>\n"
"<meta charset=\"UTF-8\">\n"
"<title>\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265</title>\n"
"<style>\n"
"  body {\n"
"    font-family: Arial, sans-serif;\n"
"    display: flex;\n"
"    justify-content: center;\n"
"    align-items: center;\n"
"    height: 100vh; /* \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\262\321\213\321\201\320\276\321\202\321\213 \320\272\320\276\320\275\321\202\320\265\320\271\320\275\320\265\321\200\320\260 \320\275\320\260 \320\262\321\201\321\216 \320\262\321\213\321\201\320\276\321\202\321\203 \320\276\320\272\320\275\320\260 */\n"
"  }\n"
"  .container {\n"
"    max-width: 600px;\n"
"    padding: 20px;\n"
"    border-radius: 8px;\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1);\n"
"    text-align: center;\n"
"    line-height: 2;\n"
"    border: 5px solid #ccc;\n"
""
                        "  }\n"
"  .header {\n"
"    font-size: 30px;\n"
"    font-weight: bold;\n"
"    margin-bottom: 10px;\n"
"  }\n"
"  .serial-number, .color, .current-level {\n"
"    margin-bottom: 20px;\n"
"  }\n"
"  .serial-number-title, .color-title, .current-level-title {\n"
"    font-weight: bold;\n"
"    font-size: 22px;\n"
"    font-family: \"Random Grotesque Standard Bold\", sans-serif;\n"
"\n"
"  }\n"
"  .color-value {\n"
"    color: #379100;\n"
"    font-size: 28px; /* \321\203\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  }\n"
"  .current-level-value {\n"
"    font-size: 40px;\n"
"    color: #379100;\n"
"  }\n"
"  .serial-number div,\n"
"  .color div {\n"
"    font-size: 24px; /* \321\203\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"  }\n"
"<"
                        "/style>\n"
"</head>\n"
"<body>\n"
"<div class=\"container\">\n"
"  <div class=\"header\">\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\265 \342\204\2261</div>\n"
"  <div class=\"serial-number\">\n"
"    <div class=\"serial-number-title\">\321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200:</div>\n"
"    <div>kfdicj-102nsd-w9ejxz</div>\n"
"  </div>\n"
"  <div class=\"color\">\n"
"    <div class=\"color-title\">\321\206\320\262\320\265\321\202:</div>\n"
"    <div class=\"color-value\">\320\267\320\265\320\273\320\265\320\275\321\213\320\271</div>\n"
"    <div><b>\320\242\320\270\320\277:</b></div>\n"
"    <div>\320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200</div> \n"
"  </div>\n"
"  <div class=\"current-level\">\n"
"    <div class=\"current-level-title\">\320\243\321\200\320\276\320\262\320\265\320\275\321\214"
                        " \321\202\320\276\320\272\320\260 \320\275\320\260 \320\264\320\260\320\275\320\275\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202</div>\n"
"    <div class=\"current-level-value\">0.572 \320\220</div>\n"
"  </div>\n"
"</div>\n"
"</body>\n"
"</html>\n"
"", nullptr));
        restart->setText(QString());
        indiccount->setText(QCoreApplication::translate("indicator", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">5</span></p></body></html>", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class indicator: public Ui_indicator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDICATOR_H
