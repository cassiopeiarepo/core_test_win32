#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "core/test/CoreTest.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    //, ui(new Ui::MainWindow)
{
    //ui->setupUi(this);

    text = new QTextEdit(this);
    text->resize(400,400);
    CoreTest test;
    test.run();


    for (int i = 0; i < test.result.size();i++) {
        text->append("============================");
        text->append(QString::fromLocal8Bit(test.result_category[i].get()));
        text->append("============================");
        text->append(QString::fromLocal8Bit(test.result[i].get()));
        text->append("\n");
    }
    

}

MainWindow::~MainWindow()
{
    //delete ui;
}

