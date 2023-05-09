#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "decklist.h"

QT_BEGIN_NAMESPACE
namespace Ui { class loginwindow; }
QT_END_NAMESPACE

class loginwindow : public QMainWindow
{
    Q_OBJECT

public:
    loginwindow(QWidget *parent = nullptr);
    ~loginwindow();

private slots:
    void on_signin_button_clicked();

    void on_signup_button_clicked();

private:
    Ui::loginwindow *ui;
    decklist *listwindow;
};
#endif // LOGINWINDOW_H
