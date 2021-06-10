#include "dialogitem.h"
#include "ui_dialogitem.h"
#include <QMessageBox>
#include <iostream>
using namespace std;

DialogItem::DialogItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogItem)
{
    ui->setupUi(this);
    ui->name->setText("");
    ui->price->setValue(0.00);
    ui->category->findText("Напої ");
    ui->color->findText("Червоний");

} // constructor

DialogItem::~DialogItem()
{
    delete ui;
} //destructor

void DialogItem::on_pushButton_clicked()
{
    if(ui->name->text()!=NULL and ui->price->text()!="0,00"){ // validate values
      setData();
      DialogItem::close();
    }else{
        QMessageBox::warning(this, "Попередження","У вас не введені всі дані!");
    }
}

void DialogItem::setData(){ // set data FROM UI
    name = ui->name->text();
    price = ui->price->text();
    category =  ui->category->currentText();
    color = ui->color->currentText();
}

void DialogItem::setData(QString name ,double price , QString category, QString color){ // set data TO UI
    ui->name->setText(name);
    ui->price->setValue(price);
    ui->category->findText(category);
    ui->color->findText(color);
}

void DialogItem::on_pushButton_2_clicked() // cancel button
{
    setData();
    DialogItem::close();
}
