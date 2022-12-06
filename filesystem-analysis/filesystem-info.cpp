#include "filesystem-info.h"
//#include "ui_mainwindow.h"

FileSystem::FileSystem(QWidget *parent)
    : QFileSystemModel(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
