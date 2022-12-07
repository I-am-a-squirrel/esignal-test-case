#include "filesystem-info.h"
#include <QThreadPool>
//#include "ui_mainwindow.h"

FileSystem::FileSystem(const QString currentPath)
    : QFileSystemModel()
{
    this->setRootPath(currentPath);
    this->fsAnalysisThread.setMaxThreadCount(3);
    this->percentStatsCount = 0;
    this->percentTreeCount = 0;
}

FileSystem::~FileSystem()
{
    fsAnalysisThread.clear();
}
 scanTree() {

};
