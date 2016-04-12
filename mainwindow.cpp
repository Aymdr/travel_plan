#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->signUp_Button,SIGNAL(clicked()),this,SLOT(create_NewCustomer()));
    this->map_image=new QImage();
    map_image->load("E:\\QT\\QT workspace\\tranvel_plan\\welcome.jpg");
    *map_image=map_image->scaled(491,411,Qt::KeepAspectRatio);
    qDebug()<<"wonder______________png";
    QGraphicsScene *map_scene=new QGraphicsScene();

    map_scene->addPixmap(QPixmap::fromImage(*map_image));
    ui->main_map->setScene(map_scene);
    ui->main_map->resize(map_image->width()+2,map_image->height()+2);
    ui->main_map->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//主窗口点击注册新旅客后弹出注册界面
void MainWindow::create_NewCustomer()
{
    Traveller thief;
    Strategy  generator_stra;
    int fee=generator_stra.leastFee__strategy(thief);
    vector<int> temp=thief.getTravelRoad();

    for(auto m:temp)
    {
        qDebug()<<m;
    }
    qDebug()<<endl<<"leastfee"<<fee<<endl;


}
