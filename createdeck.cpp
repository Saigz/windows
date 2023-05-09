#include "createdeck.h"
#include "ui_createdeck.h"
#include "QMessageBox"

createdeck::createdeck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createdeck)
{
    ui->setupUi(this);
}

createdeck::~createdeck()
{
    delete ui;
}

void createdeck::on_back_button_clicked()
{
    close(); // close this window
}

void createdeck::on_complete_create_button_clicked()
{
    QString name = ui->name_lineedit->text(); // name string

    if (name == "") { // проверка в дб что имя не занято (должна быть еще проверка чтобы не было без имени)
      // добавление в дб (надо сделать)

        close();
    } else {
        QMessageBox::warning(this, "печалька", "Занято или не выбран тип приватности");
    }
}

