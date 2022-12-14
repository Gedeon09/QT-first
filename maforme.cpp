#include "maforme.h"
#include "ui_maforme.h"

maforme::maforme(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::maforme)
{
    ui->setupUi(this);
}

maforme::~maforme()
{
    delete ui;
}
