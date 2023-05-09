#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "QMessageBox"
#include "registration.h"

loginwindow::loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginwindow)
{
    ui->setupUi(this);
    listwindow = new decklist();
//    connect(listwindow, &decklist::listwindow, this, &loginwindow::show)
}

loginwindow::~loginwindow()
{
    delete ui;
}


void loginwindow::on_signin_button_clicked()
{
    QString login = ui->login->text(); // login string
    QString pass = ui->pass->text();   // pass string

    if (login == "" && pass == "") {
        // проверка в дб
        listwindow->show(); // open next window
        this->close();      // close this window
    } else {
        QMessageBox::warning(this, "печалька", "Неверный логин или пароль"); // if login&&pass nott found in db
    }
}


void loginwindow::on_signup_button_clicked()
{
    registration window;
    window.setModal(true);
    window.exec(); // open registratiton window
}
