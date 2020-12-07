#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QtSql/QtSql>
#include <QtXml/QtXml>
#include <QFile>
#include <QtXml/QXmlStreamReader>
#include "namedbutton.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    int id_Pure = QFontDatabase::addApplicationFont("./fonts/NokiaPureHeadline_Rg.ttf"); //путь к шрифту
        QString NokiaPureHeadline = QFontDatabase::applicationFontFamilies(id_Pure).at(0); //имя шрифта
        QFont NokiaPure(NokiaPureHeadline);
    int id_Sans = QFontDatabase::addApplicationFont("./fonts/NokiaSans.ttf"); //путь к шрифту
        QString NokiaS = QFontDatabase::applicationFontFamilies(id_Sans).at(0); //имя шрифта
        QFont NokiaSans(NokiaS);


    ui->setupUi(this);
    w=111;
    h=131;
    not_first_passage=false;
    search_bool=false;
    ui->autors_Box->setFont(NokiaSans);
    ui->about_author_Box->setFont(NokiaSans);
    ui->about_book_Box->setFont(NokiaSans);
    ui->books_Box->setFont(NokiaSans);
    ui->listWidget_authors->setFont(NokiaSans);
    ui->textEdit_aboutBook->setFont(NokiaPure);
    ui->lineEdit_search->setFont(NokiaSans);
    ui->textEdit_author->setFont(NokiaPure);

    ui->textEdit_aboutBook->setStyleSheet(QString::fromUtf8(
        "QScrollBar:vertical {"
        "   width:10px;    "
        "   margin: 0px 0px 0px 0px;"
        "   background: #36393f;"
        "}"
                                              "QTextEdit{"
                                              "background-color: #36393f;"
                                              "border-style: outset;"
                                              "border-width: 2px;"
                                              "border-radius: 10px;"
                                              "border-color: beige;"
                                              "}"

        ));
    ui->textEdit_author->setStyleSheet(QString::fromUtf8(
        "QScrollBar:vertical {"
        "   width:10px;    "
        "   margin: 0px 0px 0px 0px;"
        "   background: #36393f;"
        "}"
                                              "QTextEdit{"
                                              "background-color: #36393f;"
                                              "border-style: outset;"
                                              "border-width: 2px;"
                                              "border-radius: 10px;"
                                              "border-color: beige;"
                                              "}"

        ));


    ui->button_search->setIcon(QIcon(QString("about_authors/search.png")));

    authors_file.setFileName("authors_list.xml");
    if(!authors_file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,QString("Not open xml file!"),QString("Not open xml file!"));
    }



    authors_xml.setDevice(&authors_file);

    authors_xml.readNext();
    while(!authors_xml.atEnd())
    {
        if(authors_xml.isStartElement())
        {
            if(authors_xml.name() == "authors")
            {
                start_checking_authors();
            }
            else
            {
                authors_xml.raiseError("error of reading");
            }
        }
        else
        {
            authors_xml.readNext();
        }
    }

    authors_file.close();

    /*
    int k=5;
    QPushButton *button[k];




    for(int i=0; i<k; i++)
    {
         button[i] = new QPushButton(QString("button %1").arg(i), ui->books_Box);
         button[i]->setGeometry(7+i*71, 20, 61, 91);
    }

    */
    ui->listWidget_authors->sortItems();
}

MainWindow::~MainWindow()
{
    delete buttons_row;
    delete ui;
}

void MainWindow::start_checking_authors()
{
    authors_xml.readNext();
    while(authors_xml.name() != "theEnd")
    {
        if(authors_xml.name() == "author")
        {
            author_checking();
        }
        else
        {
        }
        authors_xml.readNext();
    }

}

void MainWindow::author_checking()
{
    do authors_xml.readNext();
    while(authors_xml.name()!="name");

    QString name_of_author = authors_xml.readElementText();
    ui->listWidget_authors->addItem(name_of_author);


    authors_xml.skipCurrentElement();

    return;
}

void MainWindow::on_listWidget_authors_itemClicked(QListWidgetItem *item)
{

    ui->textEdit_aboutBook->clear();

    QString item_name = item->text();

    if(not_first_passage == true)
        for(int i=0; i<quantity_books_int; i++)
             delete buttons_row[i];
    else
        not_first_passage = true;

    author_books_file.setFileName(QString("./authors/") + item_name + QString(".xml"));
    if(!author_books_file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,QString("Not open xml file!"),QString("Not open xml file!"));
    }

    author_books_xml.setDevice(&author_books_file);



    author_books_xml.readNext();
    while(!author_books_xml.atEnd())
    {
        if(author_books_xml.isStartElement())
        {
            if(author_books_xml.name() == "books")
            {
                do author_books_xml.readNext();
                while(author_books_xml.name() != "quantity");


                QString quantity_books_string = author_books_xml.readElementText();
                quantity_books_int = (quantity_books_string).toInt();

                //QPushButton *ip = new QPushButton;
                //ip = (QPushButton *) calloc(7, sizeof(QPushButton));


                buttons_row = new NamedButton*[quantity_books_int];

                //buttons_row = new QPushButton*[quantity_books_int];



                for(int i=0; i<quantity_books_int; i++)
                {
                     // buttons_row[i] = new QPushButton(QString("%1").arg(i), ui->books_Box);
                     buttons_row[i] = new NamedButton(QString("%1").arg(i), (QWidget*)ui->books_Box);
                     buttons_row[i]->setGeometry(7+i*71, 20, 61, 91);
                     buttons_row[i]->show();
                     buttons_row[i]->setText("");
                }

                //author_books_xml.skipCurrentElement();



                /*
                int num = 0;

                QPushButton *button[7];
                author_books_xml.readNext();
                while(author_books_xml.name() != "theEnd" || num<7)
                {
                    if(author_books_xml.name() == "book")
                    {

                        //QString book_name = author_books_xml.readElementText();


                        button[num] = new QPushButton(QString::number(num), ui->books_Box);
                        button[num]->setGeometry(7+num*71, 20, 61, 91);


                        num++;

                    }
                    else;

                    author_books_xml.readNext();
                }
                */




                author_books_xml.readNext();
                int i=0;
                while(author_books_xml.name() != "theEnd")
                {
                    if(author_books_xml.name() == "book")
                    {
                        QString name_of_book = author_books_xml.readElementText();


                        buttons_row[i]->name = name_of_book;
                        buttons_row[i]->setIcon(QIcon(QString("book_images/") + name_of_book + QString(".jpg")));
                        buttons_row[i]->setIconSize(QSize(61, 91));

                        connect(buttons_row[i] , SIGNAL( clicked() ), buttons_row[i], SLOT( onMyClicked()));
                        connect(buttons_row[i], SIGNAL( MyClicked(QString) ), this, SLOT( reading_html_about_book(QString) ) );


                        //connect(buttons_row[i], SIGNAL(clicked()), this, SLOT(on_book_button_clicked()));
                        //connect(buttons_row[i], SIGNAL(name_clicked(const QString &)), this, SLOT(on_book_button_clicked(const QString &)));

                        i++;
                    }


                    author_books_xml.readNext();
                }
                //author_books_xml.skipCurrentElement();

            }
            else
            {
                author_books_xml.raiseError("error of reading");
            }
        }
        else
        {
            author_books_xml.readNext();
        }
    }

    author_books_file.close();

    QString name_html = QString("about_authors/") + item->text() + QString(".html");



    QFile html_about_author(name_html);

    if(!html_about_author.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,QString("Not open html file!"),QString("Not open html file!"));
    }

    QTextStream stream (&html_about_author);
    stream.setCodec(QTextCodec::codecForName("UTF-8"));

    QString html_text_about_author = stream.readAll();
    //ui->Edit_about_device->setText(html_about);


    ui->textEdit_author->setHtml(html_text_about_author);

    QPixmap item_pixmap = QPixmap( QString("about_authors/") + item->text() + QString(".jpg"));
    int image_w = item_pixmap.width();
    int image_h = item_pixmap.height();
    double image_size = (double)image_w/(double)image_h;
    ui->photo_author_label->setPixmap(item_pixmap);

    if(image_w>image_h)
        ui->photo_author_label->resize(w, (int)(h/image_size));
    else
    {
        image_size = (double)image_h/(double)image_w;
        ui->photo_author_label->resize((int)(w/image_size), h);
    }



    ui->photo_author_label->setScaledContents(true);
    ui->photo_author_label->show();

}


void MainWindow::reading_html_about_book(QString name_of_book)
{
    QString name_html = QString("about_books/") + name_of_book + QString(".html");

    QFile html_file(name_html);

        if(!html_file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::information(this,QString("Not open html file!"),QString("Not open html file!"));
        }

        QTextStream stream (&html_file);
        stream.setCodec(QTextCodec::codecForName("UTF-8"));

        QString html_about_book = stream.readAll();
        //ui->Edit_about_device->setText(html_about);


        ui->textEdit_aboutBook->setHtml(html_about_book);
}


void MainWindow::on_button_search_clicked()
{
    ui->textEdit_aboutBook->clear();
    QString findstring;
    findstring=ui->lineEdit_search->text();
    QListWidgetItem *item;
    QList<QListWidgetItem *> found = ui->listWidget_authors->findItems(findstring, Qt::MatchContains);//возвращает пустой лист
    for (int i=0;i<found.count();i++){
        item = found.at(i);
        ui->listWidget_authors->setCurrentItem(item);
    }
}

void MainWindow::on_lineEdit_search_editingFinished()
{
    on_button_search_clicked();
}

void MainWindow::on_lineEdit_search_cursorPositionChanged(int arg1, int arg2)
{
    if(!search_bool)
        ui->lineEdit_search->clear();
    search_bool=true;
}


void MainWindow::on_listWidget_authors_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    on_listWidget_authors_itemClicked(current);
}
