#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "ui_game.h"

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_pushButton_clicked()
{
        game *gm = new game;
        gm->show();
}


