#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("haha");
    //this->resize(1000,800);
    this->setFixedSize(500,200);
    //this->setFixedHeight(100);
    QPushButton *button=new QPushButton;
    //button->show();
    button->setParent(this);
    button->setText("hello");
}

Widget::~Widget()
{
}

