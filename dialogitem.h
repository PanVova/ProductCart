#ifndef DIALOGITEM_H
#define DIALOGITEM_H

#include <QDialog>

namespace Ui {
class DialogItem;
}

class DialogItem : public QDialog
{
    Q_OBJECT

public:
    explicit DialogItem(QWidget *parent = 0);
    QString name , price , category , color;
    void setData(QString name , double price , QString category, QString color); // method to setData and pass it from MainWindow class
    ~DialogItem();

private slots:
    void on_pushButton_clicked(); // button ok
    void on_pushButton_2_clicked(); // button cancel

private:
    Ui::DialogItem *ui;
    void setData(); // method to setData and pass it to MainWindow class

};

#endif // DIALOGITEM_H
