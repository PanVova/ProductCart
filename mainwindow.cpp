#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height()); // fixed size
    openReadFile(); // start method to open a file and read data from it
}

void MainWindow::openReadFile(){
    ifstream file;
    string name, price , category , color;
    file.open ("work.data"); // check if exists
    while(file >> name >> price >> category >> color){
        //cout << name << endl;
        //cout << price << endl;
        //cout << category << endl;
        //cout << color << endl;

        addItemSettings(name,color); // method to addItem with settings
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    MainWindow::addItem();
}

void MainWindow::on_edit_clicked()
{
     MainWindow::editItem();
}

void MainWindow::on_delete_2_clicked()
{
     MainWindow::deleteItem();
}

void MainWindow::addItemSettings(string name , string color){ //add item , then set color, font and font size
    ui->listWidget->addItem(QString::fromStdString(name));
    ui->listWidget->item(ui->listWidget->count()-1)->setForeground(setColor(QString::fromStdString(color)));
    ui->listWidget->setFont(QFont("Courier",15));
}

void MainWindow::writeFile(){ // writing to file using dialog class
    ofstream file;
    file.open ("work.data",std::ios::app); // append file mode
    string price = dg.price.toStdString(); // qstring to string
    std::replace(price.begin(),price.end(),',','.'); // replace double 8,00 -> 8.00
    file << dg.name.toStdString() +" " + price +" "
            + dg.category.toStdString() +" "
            +dg.color.toStdString() <<"\n" ; // writing to file
    file.close();
}

void MainWindow::addItem(){
    showDialog();
    if(dg.name!="" and dg.price!="0,00"){ //check data
        writeFile();
        addItemSettings(dg.name.toStdString(),dg.color.toStdString());
    }
}

QBrush MainWindow::setColor(QString color){ // just returning possible colors
    if(color =="Червоний"){
        return Qt::red;
    }else if(color == "Синій"){
        return Qt::blue;
    }else{
        return Qt::green;
    }
}

void MainWindow::editFile(string line2){ // method to check if this line exists and override it

    //cout << line2 << endl;
    string line;
    ifstream fin;
    ofstream temp;
    string editLine = ui->listWidget->item(ui->listWidget->currentRow())->text().toStdString();

    fin.open("work.data");
    temp.open("temp.txt");

    while (getline(fin, line)) {
        if(line.substr(0,editLine.size())==editLine){ // usually write to file but in this case override got data
            cout << "Find line" << endl;
            line.replace(line.begin(),line.end(),line2.begin(),line2.end());
        }
        temp << line << endl;
    }

    temp.close();
    fin.close(); // just closing files

    // required conversion for remove and rename functions
    const char * p = "work.data";
    remove(p);
    rename("temp.txt", p);

}

void MainWindow::editItem(){
    if(ui->listWidget->currentItem() != NULL){ // if our selected item is not NULL

        ifstream file;
        string name,price,category,color;
        file.open ("work.data"); // check if exists
        while(file >> name >> price >> category >> color){ // reading data
            if(name == ui->listWidget->currentItem()->text().toStdString()){ // check if it same
                dg.setData(QString::fromStdString(name),atof(price.c_str()),QString::fromStdString(category) ,QString::fromStdString(color));

                //open dialog and set data to it
                showDialog();
                ui->listWidget->currentItem()->setText(dg.name);
                ui->listWidget->item(ui->listWidget->currentRow())->setForeground(setColor(dg.color)); // need to fix

                file.close();
                string tempPrice = dg.price.toStdString(); // Qstring to String
                std::replace(tempPrice.begin(),tempPrice.end(),',','.'); // replacing symbol
                editFile(dg.name.toStdString() + " "
                         + tempPrice +" "
                         + dg.category.toStdString() +" "
                         + dg.color.toStdString()); // call method
            }
        }
    }
}

void MainWindow::showDialog(){
    dg.setWindowTitle("Діалогове вікно"); // default method in all cases for our Dialog class
    dg.setModal(true);
    dg.exec();
}

void MainWindow::deleteItem(){
        string line;
        ifstream fin;

        fin.open("work.data");
        // contents of path must be copied to a temp file then
        // renamed back to the path file
        ofstream temp;
        temp.open("temp.txt");

        string deleteLine = ui->listWidget->item(ui->listWidget->currentRow())->text().toStdString();
        while (getline(fin, line)) {
            // write all lines to temp other than the line marked for erasing
            cout << deleteLine << endl;
            if(line.substr(0,deleteLine.size())!=deleteLine){
                temp << line << endl;
            }

        }
        temp.close();
        fin.close();
        // required conversion for remove and rename functions
        const char * p = "work.data";
        remove(p);
        rename("temp.txt", p);
        ui->listWidget->takeItem(ui->listWidget->currentRow());
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index) // same as EditItem Button
{
    editItem();
}
