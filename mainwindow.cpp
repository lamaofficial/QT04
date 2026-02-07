#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("我的第一个 Qt 窗口");
    resize(400, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}
