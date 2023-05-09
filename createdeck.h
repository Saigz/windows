#ifndef CREATEDECK_H
#define CREATEDECK_H

#include <QDialog>

namespace Ui {
class createdeck;
}

class createdeck : public QDialog
{
    Q_OBJECT

public:
    explicit createdeck(QWidget *parent = nullptr);
    ~createdeck();

private:
    Ui::createdeck *ui;

private slots:

    void on_back_button_clicked();

    void on_complete_create_button_clicked();
};

#endif // CREATEDECK_H
