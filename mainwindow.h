#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QFile>
#include "namedbutton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int w, h;
    QFile authors_file;
    QXmlStreamReader authors_xml;

    QFile author_books_file;
    QXmlStreamReader author_books_xml;
    bool not_first_passage;
    int quantity_books_int;
    //QPushButton **buttons_row;
    NamedButton **buttons_row;
    bool search_bool;

private slots:

    void start_checking_authors();
    void author_checking();
    void on_listWidget_authors_itemClicked(QListWidgetItem *item);

    void reading_html_about_book(QString name_of_book);

    void on_button_search_clicked();

    void on_lineEdit_search_editingFinished();

    void on_lineEdit_search_cursorPositionChanged(int arg1, int arg2);

    void on_listWidget_authors_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
