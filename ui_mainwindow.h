/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_search;
    QPushButton *button_search;
    QGroupBox *books_Box;
    QGroupBox *autors_Box;
    QListWidget *listWidget_authors;
    QGroupBox *about_author_Box;
    QTextEdit *textEdit_author;
    QLabel *photo_author_label;
    QGroupBox *about_book_Box;
    QTextEdit *textEdit_aboutBook;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 427);
        MainWindow->setMinimumSize(QSize(900, 427));
        MainWindow->setMaximumSize(QSize(900, 427));
        QIcon icon;
        icon.addFile(QString::fromUtf8("about_authors/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #2f3136;\n"
"color: #bbbbbb;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_search = new QLineEdit(centralWidget);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(10, 10, 211, 31));
        lineEdit_search->setStyleSheet(QString::fromUtf8("background-color: #36393f;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
""));
        button_search = new QPushButton(centralWidget);
        button_search->setObjectName(QString::fromUtf8("button_search"));
        button_search->setGeometry(QRect(220, 10, 41, 31));
        button_search->setStyleSheet(QString::fromUtf8("background-color: #2f3136;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
""));
        books_Box = new QGroupBox(centralWidget);
        books_Box->setObjectName(QString::fromUtf8("books_Box"));
        books_Box->setGeometry(QRect(270, 300, 621, 121));
        books_Box->setStyleSheet(QString::fromUtf8(""));
        autors_Box = new QGroupBox(centralWidget);
        autors_Box->setObjectName(QString::fromUtf8("autors_Box"));
        autors_Box->setGeometry(QRect(10, 50, 251, 371));
        autors_Box->setStyleSheet(QString::fromUtf8(""));
        listWidget_authors = new QListWidget(autors_Box);
        listWidget_authors->setObjectName(QString::fromUtf8("listWidget_authors"));
        listWidget_authors->setGeometry(QRect(10, 20, 231, 341));
        listWidget_authors->setStyleSheet(QString::fromUtf8("background-color: #36393f;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;"));
        listWidget_authors->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        about_author_Box = new QGroupBox(centralWidget);
        about_author_Box->setObjectName(QString::fromUtf8("about_author_Box"));
        about_author_Box->setGeometry(QRect(590, 0, 301, 301));
        about_author_Box->setStyleSheet(QString::fromUtf8(""));
        textEdit_author = new QTextEdit(about_author_Box);
        textEdit_author->setObjectName(QString::fromUtf8("textEdit_author"));
        textEdit_author->setGeometry(QRect(10, 20, 191, 271));
        textEdit_author->setStyleSheet(QString::fromUtf8("background-color: #36393f;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;"));
        textEdit_author->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_author->setAutoFormatting(QTextEdit::AutoAll);
        textEdit_author->setUndoRedoEnabled(true);
        textEdit_author->setReadOnly(true);
        photo_author_label = new QLabel(about_author_Box);
        photo_author_label->setObjectName(QString::fromUtf8("photo_author_label"));
        photo_author_label->setGeometry(QRect(210, 20, 81, 131));
        photo_author_label->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;"));
        about_book_Box = new QGroupBox(centralWidget);
        about_book_Box->setObjectName(QString::fromUtf8("about_book_Box"));
        about_book_Box->setGeometry(QRect(270, 0, 311, 301));
        about_book_Box->setStyleSheet(QString::fromUtf8(""));
        textEdit_aboutBook = new QTextEdit(about_book_Box);
        textEdit_aboutBook->setObjectName(QString::fromUtf8("textEdit_aboutBook"));
        textEdit_aboutBook->setGeometry(QRect(10, 20, 291, 271));
        textEdit_aboutBook->setStyleSheet(QString::fromUtf8("background-color: #36393f;\n"
"border-style: outset;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"border-color: beige;\n"
""));
        textEdit_aboutBook->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_aboutBook->setUndoRedoEnabled(false);
        textEdit_aboutBook->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260", 0, QApplication::UnicodeUTF8));
        lineEdit_search->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\260\320\262\321\202\320\276\321\200\320\260", 0, QApplication::UnicodeUTF8));
        button_search->setText(QString());
        books_Box->setTitle(QApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\270 \320\260\320\262\321\202\320\276\321\200\320\260", 0, QApplication::UnicodeUTF8));
        autors_Box->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\260\320\262\321\202\320\276\321\200\320\276\320\262", 0, QApplication::UnicodeUTF8));
        about_author_Box->setTitle(QApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", 0, QApplication::UnicodeUTF8));
        photo_author_label->setText(QString());
        about_book_Box->setTitle(QApplication::translate("MainWindow", "\320\236 \320\272\320\275\320\270\320\263\320\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
