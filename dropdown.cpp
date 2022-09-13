#include "dropdown.h"
#include <QLayout>

Dropdown::Dropdown(QWidget *parent, const QList<QPushButton*> &buttons)
    : QPushButton{parent}, frame{parent}
{
    frame.setLayout(new QVBoxLayout);
    frame.setStyleSheet("background-color:rgb(100,100,100)");
    frame.setVisible(false);
    connect(this, SIGNAL(clicked()), SLOT(onClick()));
    for(QPushButton* button : buttons){
        frame.layout()->addWidget(button);
    }
}

void Dropdown::addButtons(const QList<QPushButton *> &buttons)
{
    for(QPushButton* button : buttons){
        frame.layout()->addWidget(button);
    }
}

void Dropdown::showEvent(QShowEvent *event)
{
    QPushButton::showEvent( event );
    frame.move(pos().x(), pos().y() + size().height());
    frame.resize(100, 100);
}

void Dropdown::onClick()
{
    frame.setVisible(!frame.isVisible());
}
