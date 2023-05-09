#include "registration.h"
#include "ui_registration.h"
#include "qmessagebox.h"

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    delete ui;
}

void registration::on_signup_button_reg_clicked()
{
    QString login = ui->login_reg->text();  // login string
    QString pass = ui->pass_reg->text();    // pass string

    if (login != "admin" && pass != "admin") {
        // отправить проверку в дб + занести в дб
        QMessageBox::information(this, "кайф", "Успешно зарегистрировался"); // if login&&pass found
        close();
    } else {
        QMessageBox::warning(this, "печалька", "Занято, попутал ты чето"); // if login&&pass not found
    }
}


void registration::on_back_button_clicked()
{
    close(); // close this window
}

