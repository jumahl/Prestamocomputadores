#include "frmprestamo.h"
#include "ui_frmprestamo.h"

frmprestamo::frmprestamo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmprestamo)
{
    ui->setupUi(this);
}

frmprestamo::~frmprestamo()
{
    delete ui;
}
