/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *block_1;
    QPushButton *block_2;
    QPushButton *block_3;
    QPushButton *block_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QPushButton *one_step;
    QPushButton *all_steps;
    QPushButton *remake;
    QPushButton *close;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *now_address;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLabel *is_loss;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *next_address;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *loss_number;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *loss_rate;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(549, 324);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        block_1 = new QPushButton(centralWidget);
        block_1->setObjectName(QStringLiteral("block_1"));
        block_1->setCheckable(true);

        verticalLayout->addWidget(block_1);

        block_2 = new QPushButton(centralWidget);
        block_2->setObjectName(QStringLiteral("block_2"));
        block_2->setCheckable(true);

        verticalLayout->addWidget(block_2);

        block_3 = new QPushButton(centralWidget);
        block_3->setObjectName(QStringLiteral("block_3"));
        block_3->setCheckable(true);

        verticalLayout->addWidget(block_3);

        block_4 = new QPushButton(centralWidget);
        block_4->setObjectName(QStringLiteral("block_4"));
        block_4->setCheckable(true);

        verticalLayout->addWidget(block_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

        one_step = new QPushButton(centralWidget);
        one_step->setObjectName(QStringLiteral("one_step"));

        verticalLayout_6->addWidget(one_step);

        all_steps = new QPushButton(centralWidget);
        all_steps->setObjectName(QStringLiteral("all_steps"));

        verticalLayout_6->addWidget(all_steps);

        remake = new QPushButton(centralWidget);
        remake->setObjectName(QStringLiteral("remake"));

        verticalLayout_6->addWidget(remake);

        close = new QPushButton(centralWidget);
        close->setObjectName(QStringLiteral("close"));

        verticalLayout_6->addWidget(close);


        gridLayout->addLayout(verticalLayout_6, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        now_address = new QLabel(centralWidget);
        now_address->setObjectName(QStringLiteral("now_address"));
        now_address->setFont(font1);
        now_address->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(now_address);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        is_loss = new QLabel(centralWidget);
        is_loss->setObjectName(QStringLiteral("is_loss"));
        is_loss->setFont(font1);
        is_loss->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(is_loss);


        gridLayout->addLayout(verticalLayout_7, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        next_address = new QLabel(centralWidget);
        next_address->setObjectName(QStringLiteral("next_address"));
        next_address->setFont(font1);
        next_address->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(next_address);


        gridLayout->addLayout(verticalLayout_3, 1, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        loss_number = new QLabel(centralWidget);
        loss_number->setObjectName(QStringLiteral("loss_number"));
        loss_number->setFont(font1);
        loss_number->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(loss_number);


        gridLayout->addLayout(verticalLayout_4, 1, 3, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        loss_rate = new QLabel(centralWidget);
        loss_rate->setObjectName(QStringLiteral("loss_rate"));
        loss_rate->setFont(font1);
        loss_rate->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(loss_rate);


        gridLayout->addLayout(verticalLayout_5, 1, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 549, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\206\205\345\255\230\345\235\227", Q_NULLPTR));
        block_1->setText(QString());
        block_2->setText(QString());
        block_3->setText(QString());
        block_4->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\347\225\214\351\235\242", Q_NULLPTR));
        one_step->setText(QApplication::translate("MainWindow", "\345\215\225\346\255\245\346\211\247\350\241\214", Q_NULLPTR));
        all_steps->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\346\211\247\350\241\214", Q_NULLPTR));
        remake->setText(QApplication::translate("MainWindow", "\351\207\215\345\210\266", Q_NULLPTR));
        close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\214\207\344\273\244\347\211\251\347\220\206\345\234\260\345\235\200", Q_NULLPTR));
        now_address->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\347\274\272\351\241\265", Q_NULLPTR));
        is_loss->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\213\346\235\241\346\214\207\344\273\244\347\211\251\347\220\206\345\234\260\345\235\200", Q_NULLPTR));
        next_address->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\274\272\351\241\265\346\225\260", Q_NULLPTR));
        loss_number->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\274\272\351\241\265\347\216\207", Q_NULLPTR));
        loss_rate->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
