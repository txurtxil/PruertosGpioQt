#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    system("echo 0 >/sys/class/gpio/gpio23/value");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("echo 1 >/sys/class/gpio/gpio23/value");
}

void MainWindow::on_pushButton_3_clicked()
{


    system("echo 23 >/sys/class/gpio/export");

    system("chmod 777 -R /sys/class/gpio/gpio23 ");

    system("echo out >/sys/class/gpio/gpio23/direction");

    }

void MainWindow::on_pushButton_4_clicked()
{
    system("echo 23 >/sys/class/gpio/unexport");
    exit(0);

    }
