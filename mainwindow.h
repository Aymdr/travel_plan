#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include<QImage>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QDebug>
#include"traveller.h"
#include"createnewcustomer.h"
#include"strategy.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void create_NewCustomer();
private:
    Ui::MainWindow *ui;
    QImage *map_image;
};

#endif // MAINWINDOW_H
