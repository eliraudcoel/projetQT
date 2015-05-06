/********************************************************************************
** Form generated from reading UI file 'clientWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *chatPage;
    QGridLayout *gridLayout;
    QPushButton *sayButton;
    QLineEdit *sayLineEdit;
    QListWidget *userListWidget;
    QTextEdit *roomTextEdit;
    QLabel *label_3;
    QWidget *loginPage;
    QGridLayout *gridLayout_3;
    QFrame *loginFrame;
    QGridLayout *gridLayout_2;
    QRadioButton *btn_bug;
    QLabel *label_2;
    QRadioButton *btn_bitcoin;
    QRadioButton *btn_fusee;
    QLabel *label;
    QRadioButton *btn_android;
    QRadioButton *btn_apple;
    QRadioButton *btn_github;
    QLineEdit *serverLineEdit;
    QLineEdit *userLineEdit;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QLatin1String("#titleLabel {\n"
"background: white;\n"
"color: blue;\n"
"font-size: 20px;\n"
"border: none;\n"
"border-bottom:  1px solid black;\n"
"padding: 5px;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: none;\n"
"background: #53AEF0;\n"
"}\n"
"\n"
"#loginFrame {\n"
"background: #CECECE;\n"
"border: 1px solid gray;\n"
"padding: 10px;\n"
"border-radius: 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(titleLabel);

        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(mainFrame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        chatPage = new QWidget();
        chatPage->setObjectName(QStringLiteral("chatPage"));
        gridLayout = new QGridLayout(chatPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName(QStringLiteral("sayButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sayButton->sizePolicy().hasHeightForWidth());
        sayButton->setSizePolicy(sizePolicy1);
        sayButton->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/envoi.png"), QSize(), QIcon::Normal, QIcon::Off);
        sayButton->setIcon(icon);
        sayButton->setIconSize(QSize(25, 25));

        gridLayout->addWidget(sayButton, 2, 2, 1, 1);

        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName(QStringLiteral("sayLineEdit"));

        gridLayout->addWidget(sayLineEdit, 2, 0, 1, 2);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName(QStringLiteral("userListWidget"));

        gridLayout->addWidget(userListWidget, 1, 1, 1, 2);

        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName(QStringLiteral("roomTextEdit"));
        roomTextEdit->setReadOnly(true);

        gridLayout->addWidget(roomTextEdit, 1, 0, 1, 1);

        label_3 = new QLabel(chatPage);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 2);

        stackedWidget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QStringLiteral("loginPage"));
        gridLayout_3 = new QGridLayout(loginPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        loginFrame = new QFrame(loginPage);
        loginFrame->setObjectName(QStringLiteral("loginFrame"));
        sizePolicy1.setHeightForWidth(loginFrame->sizePolicy().hasHeightForWidth());
        loginFrame->setSizePolicy(sizePolicy1);
        loginFrame->setMinimumSize(QSize(300, 0));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        gridLayout_2 = new QGridLayout(loginFrame);
        gridLayout_2->setSpacing(20);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btn_bug = new QRadioButton(loginFrame);
        btn_bug->setObjectName(QStringLiteral("btn_bug"));
        btn_bug->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/bug.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_bug->setIcon(icon1);

        gridLayout_2->addWidget(btn_bug, 0, 4, 1, 1);

        label_2 = new QLabel(loginFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        btn_bitcoin = new QRadioButton(loginFrame);
        btn_bitcoin->setObjectName(QStringLiteral("btn_bitcoin"));
        btn_bitcoin->setMaximumSize(QSize(50, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/bitcoin.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_bitcoin->setIcon(icon2);

        gridLayout_2->addWidget(btn_bitcoin, 0, 0, 1, 1);

        btn_fusee = new QRadioButton(loginFrame);
        btn_fusee->setObjectName(QStringLiteral("btn_fusee"));
        btn_fusee->setMaximumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/fusee.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_fusee->setIcon(icon3);

        gridLayout_2->addWidget(btn_fusee, 0, 1, 1, 1);

        label = new QLabel(loginFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 2);

        btn_android = new QRadioButton(loginFrame);
        btn_android->setObjectName(QStringLiteral("btn_android"));
        btn_android->setMaximumSize(QSize(50, 50));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/android.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_android->setIcon(icon4);

        gridLayout_2->addWidget(btn_android, 0, 3, 1, 1);

        btn_apple = new QRadioButton(loginFrame);
        btn_apple->setObjectName(QStringLiteral("btn_apple"));
        btn_apple->setMaximumSize(QSize(50, 50));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/apple.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_apple->setIcon(icon5);

        gridLayout_2->addWidget(btn_apple, 0, 5, 1, 1);

        btn_github = new QRadioButton(loginFrame);
        btn_github->setObjectName(QStringLiteral("btn_github"));
        btn_github->setMaximumSize(QSize(60, 50));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_github->setIcon(icon6);

        gridLayout_2->addWidget(btn_github, 0, 2, 1, 1);

        serverLineEdit = new QLineEdit(loginFrame);
        serverLineEdit->setObjectName(QStringLiteral("serverLineEdit"));
        serverLineEdit->setMaximumSize(QSize(250, 16777215));

        gridLayout_2->addWidget(serverLineEdit, 1, 3, 1, 3);

        userLineEdit = new QLineEdit(loginFrame);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        gridLayout_2->addWidget(userLineEdit, 2, 3, 1, 3);

        loginButton = new QPushButton(loginFrame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(loginButton, 3, 4, 1, 2);


        gridLayout_3->addWidget(loginFrame, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 165, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(25, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(223, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        stackedWidget->addWidget(loginPage);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout->addWidget(mainFrame);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(serverLineEdit, userLineEdit);
        QWidget::setTabOrder(userLineEdit, roomTextEdit);
        QWidget::setTabOrder(roomTextEdit, userListWidget);
        QWidget::setTabOrder(userListWidget, sayLineEdit);
        QWidget::setTabOrder(sayLineEdit, sayButton);

        retranslateUi(MainWindow);
        QObject::connect(sayLineEdit, SIGNAL(returnPressed()), sayButton, SLOT(animateClick()));
        QObject::connect(serverLineEdit, SIGNAL(returnPressed()), userLineEdit, SLOT(setFocus()));
        QObject::connect(userLineEdit, SIGNAL(returnPressed()), loginButton, SLOT(animateClick()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        titleLabel->setText(QApplication::translate("MainWindow", "Chat", 0));
        sayButton->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Liste des utilisateurs", 0));
        btn_bug->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Pseudo", 0));
        btn_bitcoin->setText(QString());
        btn_fusee->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Adresse serveur", 0));
        btn_android->setText(QString());
        btn_apple->setText(QString());
        btn_github->setText(QString());
        serverLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "ex : 192.168.1.38", 0));
        userLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "ex : superPseudo", 0));
        loginButton->setText(QApplication::translate("MainWindow", "Connexion", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
