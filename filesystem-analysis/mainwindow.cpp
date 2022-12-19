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
    FSTreeView();
    QObject::connect(ui->filesystemTreeView, &QAbstractItemView::clicked, this, &MainWindow::directoryChosen);
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
    QFuture<void> indexing = QtConcurrent::run(std::function<void()>([this]() {
        indexFS();
    } )).then([this](){
        ui->fileTreeProgressBar->valueChanged(100);
    });
};

void MainWindow::directoryChosen()
{
    int finishedProcessesCount = 0;
    QFuture<void> fileCount = QtConcurrent::run(std::function<void()>([this]() {

    })).then([this, &finishedProcessesCount](){
        finishedProcessesCount++;
        ui->statsProgressBar->valueChanged(20 * finishedProcessesCount);
    });

    ui->filesystemTreeView;
};
