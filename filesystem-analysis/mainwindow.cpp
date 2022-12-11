#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filesystem-info.h"
#include <QFuture>
#include <QtConcurrent>

MainWindow::MainWindow(QWidget *parent, QString directory)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    interfaceFSpointer = new FileSystem(this->directory);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete interfaceFSpointer;
};

void MainWindow::indexFS()
{
    ui->filesystemTreeView->setModel(this->interfaceFSpointer);
};

void MainWindow::FSTreeView()
{
    QFuture<void> indexing = QtConcurrent::run(this, &indexFS(), true);
};
