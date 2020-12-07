#ifndef NAMEDBUTTON_H
#define NAMEDBUTTON_H

#include <QPushButton>
#include <QMessageBox>
#include <QWidget>
#include <QtGui>

class NamedButton : public QPushButton
{
    Q_OBJECT
public:
    explicit NamedButton(QWidget *parent = 0);
    explicit NamedButton( const QString & text, QWidget *parent = 0 );
    QString name;
    
signals:
    void MyClicked(QString);

    
public slots:    
    void onMyClicked();
    
};

#endif // NAMEDBUTTON_H
