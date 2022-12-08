#include "filesystem-info.h"
#include <QThreadPool>
#include <filesystem>
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
void scanTree(QString pathString) {
    std::filesystem::path treePath = pathString.toStdString();
    std::filesystem::space_info wholeSpace = std::filesystem::space(treePath);
    for (const auto & entry : std::filesystem::directory_iterator(treePath))
            std::cout << entry.path() << std::endl;
};
