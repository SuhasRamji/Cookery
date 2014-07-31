#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <veg.h>
#include "nonveg.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Veg veg;
    NonVeg nonveg;
};

#endif // MAINWINDOW_H
