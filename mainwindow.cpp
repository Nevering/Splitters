#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto m = new QMenuBar;
    m->deleteLater();
    QPixmap pix(":/images/user.png");
    QIcon ico(pix);
    ui->toolButton->setIcon(ico);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolButton_clicked()
{

}
