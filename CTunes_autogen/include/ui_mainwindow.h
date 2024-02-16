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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_13;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *agregarNombre;
    QLineEdit *agregarArtista;
    QComboBox *comboGenero;
    QLineEdit *agregarDuracion;
    QDoubleSpinBox *agregarPrecio;
    QPushButton *agregarBoton;
    QWidget *page_2;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *reviewCode;
    QLabel *label_10;
    QSpinBox *reviewStars;
    QPushButton *agregarReview;
    QWidget *page_3;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_8;
    QWidget *page_4;
    QLabel *label_14;
    QTextBrowser *textLista;
    QPushButton *refreshLista;
    QWidget *page_5;
    QLabel *label_17;
    QTextBrowser *textBrowser_2;
    QLabel *label_15;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_12;
    QMenuBar *menubar;
    QMenu *menuiTunes;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(989, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 0, 221, 561));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 41, 16));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 70, 111, 24));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 120, 111, 24));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 170, 111, 24));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(50, 220, 111, 24));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(50, 270, 111, 24));
        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(60, 320, 80, 24));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(250, 10, 691, 531));
        page = new QWidget();
        page->setObjectName("page");
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 40, 91, 16));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 100, 111, 16));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(148, 140, 51, 20));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 190, 41, 16));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 230, 51, 20));
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 270, 41, 16));
        agregarNombre = new QLineEdit(page);
        agregarNombre->setObjectName("agregarNombre");
        agregarNombre->setGeometry(QRect(220, 100, 181, 24));
        agregarArtista = new QLineEdit(page);
        agregarArtista->setObjectName("agregarArtista");
        agregarArtista->setGeometry(QRect(220, 140, 181, 24));
        comboGenero = new QComboBox(page);
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->addItem(QString());
        comboGenero->setObjectName("comboGenero");
        comboGenero->setGeometry(QRect(220, 190, 111, 24));
        agregarDuracion = new QLineEdit(page);
        agregarDuracion->setObjectName("agregarDuracion");
        agregarDuracion->setGeometry(QRect(220, 230, 61, 24));
        agregarPrecio = new QDoubleSpinBox(page);
        agregarPrecio->setObjectName("agregarPrecio");
        agregarPrecio->setGeometry(QRect(220, 270, 62, 25));
        agregarBoton = new QPushButton(page);
        agregarBoton->setObjectName("agregarBoton");
        agregarBoton->setGeometry(QRect(290, 370, 91, 24));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(290, 40, 81, 16));
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 100, 101, 16));
        reviewCode = new QLineEdit(page_2);
        reviewCode->setObjectName("reviewCode");
        reviewCode->setGeometry(QRect(270, 100, 113, 24));
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(230, 160, 31, 16));
        reviewStars = new QSpinBox(page_2);
        reviewStars->setObjectName("reviewStars");
        reviewStars->setGeometry(QRect(270, 160, 42, 25));
        agregarReview = new QPushButton(page_2);
        agregarReview->setObjectName("agregarReview");
        agregarReview->setGeometry(QRect(280, 270, 91, 24));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 40, 101, 16));
        label_12 = new QLabel(page_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(170, 110, 49, 16));
        label_13 = new QLabel(page_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 190, 91, 20));
        lineEdit_5 = new QLineEdit(page_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(250, 110, 71, 24));
        lineEdit_6 = new QLineEdit(page_3);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(250, 190, 161, 24));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(290, 290, 111, 24));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_14 = new QLabel(page_4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(290, 40, 81, 16));
        textLista = new QTextBrowser(page_4);
        textLista->setObjectName("textLista");
        textLista->setGeometry(QRect(10, 70, 671, 321));
        refreshLista = new QPushButton(page_4);
        refreshLista->setObjectName("refreshLista");
        refreshLista->setGeometry(QRect(280, 430, 80, 24));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_17 = new QLabel(page_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(300, 30, 71, 16));
        textBrowser_2 = new QTextBrowser(page_5);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(50, 220, 621, 211));
        label_15 = new QLabel(page_5);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(100, 140, 49, 16));
        lineEdit_7 = new QLineEdit(page_5);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(160, 140, 113, 24));
        pushButton_12 = new QPushButton(page_5);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(300, 140, 80, 24));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 989, 21));
        menuiTunes = new QMenu(menubar);
        menuiTunes->setObjectName("menuiTunes");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuiTunes->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "iTunes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Agregar cancion", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Hacer review", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Descargar cancion", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Lista Canciones", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Detalles cancion", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "agregar cancion", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nombre de cancion:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Artista", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Genero:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Duracion:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Precio:", nullptr));
        comboGenero->setItemText(0, QCoreApplication::translate("MainWindow", "POP", nullptr));
        comboGenero->setItemText(1, QCoreApplication::translate("MainWindow", "ROCK", nullptr));
        comboGenero->setItemText(2, QCoreApplication::translate("MainWindow", "RAP", nullptr));
        comboGenero->setItemText(3, QCoreApplication::translate("MainWindow", "DANCE", nullptr));
        comboGenero->setItemText(4, QCoreApplication::translate("MainWindow", "REGGAE", nullptr));
        comboGenero->setItemText(5, QCoreApplication::translate("MainWindow", "ELECTRONICA", nullptr));
        comboGenero->setItemText(6, QCoreApplication::translate("MainWindow", "RANCHERA", nullptr));

        agregarBoton->setText(QCoreApplication::translate("MainWindow", "Agregar cancion", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Cambiar review", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Codigo de cancion:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Rate:", nullptr));
        agregarReview->setText(QCoreApplication::translate("MainWindow", "Agregar review", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Descargar cancion", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Codigo:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Nombre cliente:", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Descargar cancion", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "lista canciones", nullptr));
        refreshLista->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Info cancion", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Codigo:", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        menuiTunes->setTitle(QCoreApplication::translate("MainWindow", "iTunes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
