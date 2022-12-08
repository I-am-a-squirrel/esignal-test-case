#ifndef FILESYSTEMINFO_H
#define FILESYSTEMINFO_H

#include <QFileSystemModel>
#include <QThreadPool>
//#include "mainwindow.h"

class FileSystem : public QFileSystemModel {
    Q_OBJECT

public://destructor must be finished

    FileSystem(const QString currentPath);
    ~FileSystem();
    void scanTree();
private:
    QThreadPool fsAnalysisThread;
    unsigned short int percentTreeCount;
    unsigned short int percentStatsCount;
};

#endif // FILESYSTEMINFO_H
