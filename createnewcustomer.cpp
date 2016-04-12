#include "createnewcustomer.h"
#include "ui_createnewcustomer.h"

CreateNewCustomer::CreateNewCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateNewCustomer)
{
    ui->setupUi(this);
}

CreateNewCustomer::~CreateNewCustomer()
{
    delete ui;
}
