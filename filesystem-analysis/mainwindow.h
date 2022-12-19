#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <filesystem-info.h>
#include <QFuture>
#include <QAbstractItemView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent, QString directory);
    ~MainWindow();
    void indexFS();

public slots:
    void directoryChosen();

private:
    void FSTreeView();
    Ui::MainWindow *ui;
    FileSystem* interfaceFSpointer = new FileSystem("");
    QString directory;
};
#endif // MAINWINDOW_H
