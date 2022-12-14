#include "mainwindow.h"
#include "filesystem-info.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFileSystemModel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "filesystem-analysis_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    QFileSystemModel currentFS;
    QString directory = currentFS.rootPath();
    currentFS.~QFileSystemModel();
    MainWindow w(nullptr, directory);
    w.show();
    return a.exec();
}
