#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogitem.h"
#include <string>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void addItem();
    void deleteItem();
    void editItem();
    void showDialog();
    void writeFile();
    void openReadFile();
    void editFile(string line2);
    void addItemSettings(string name , string color);

    DialogItem dg;
    QString name;

private slots:
    void on_add_clicked();
    void on_edit_clicked();
    void on_delete_2_clicked();
    void on_listWidget_doubleClicked(const QModelIndex &index);
    QBrush setColor(QString color);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
