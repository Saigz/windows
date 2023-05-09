#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_signup_button_reg_clicked();

    void on_back_button_clicked();

private:
    Ui::registration *ui;
};

#endif // REGISTRATION_H
