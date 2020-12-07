#include "namedbutton.h"

NamedButton::NamedButton(QWidget *parent) :
    QPushButton(parent)
{
}

NamedButton::NamedButton(const QString & text, QWidget* parent):
    QPushButton (text, parent)
{

}

void NamedButton::onMyClicked()
{
    emit MyClicked(name);
}
