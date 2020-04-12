#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileSystemModel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFileSystemModel *lModel = new QFileSystemModel(this);

    qDebug() << "test========" << QDir::homePath();
    qDebug() << "test22========" << QDir::rootPath();


    auto rootPath = QDir::rootPath();
    QModelIndex lIndex = lModel->setRootPath(rootPath);
    ui->listView->setModel(lModel);
    ui->listView->setRootIndex(lIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}

