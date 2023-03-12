#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int i;
    printf("hey this a test");
}

MainWindow::~MainWindow()
{
    delete ui;
}

