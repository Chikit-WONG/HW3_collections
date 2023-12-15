#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("你好");
    this->setFixedSize(500,500);
    QPushButton *button=new QPushButton;
    button->setParent(this);
    button->setText("你好");
    button->move(125,125);
    button->setFixedSize(250,250);
}

Widget::~Widget()
{
}

