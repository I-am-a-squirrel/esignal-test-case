#ifndef FILESYSTEMINFO_H
#define FILESYSTEMINFO_H

#include <QFileSystemModel>

class FileSystem : public QFileSystemModel {
    Q_OBJECT

public://destructor must be finished

    FileSystem(const QString currentPath) {
        setRootPath(currentPath);
    };
    ~FileSystem();
private:

};

#endif // FILESYSTEMINFO_H
