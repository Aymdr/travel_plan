#ifndef CREATENEWCUSTOMER_H
#define CREATENEWCUSTOMER_H

#include <QDialog>

namespace Ui {
class CreateNewCustomer;
}

class CreateNewCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewCustomer(QWidget *parent = 0);
    ~CreateNewCustomer();

private:
    Ui::CreateNewCustomer *ui;
};

#endif // CREATENEWCUSTOMER_H
