#include "halamanmuka.h"
#include "ui_halamanmuka.h"

HalamanMuka::HalamanMuka(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HalamanMuka)
{
    ui->setupUi(this);
}

HalamanMuka::~HalamanMuka()
{
    delete ui;
}
