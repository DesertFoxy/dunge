#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class mainwindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();

public slots:
    void on_pushButton_clicked();

private:
    Ui::mainwindow *ui;
};

#endif // MAINWINDOW_H
