#ifndef DECKLIST_H
#define DECKLIST_H

#include <QMainWindow>

namespace Ui {
class decklist;
}

class decklist : public QMainWindow
{
    Q_OBJECT

public:
    explicit decklist(QWidget *parent = nullptr);
    ~decklist();

private slots:
    void on_exit_button_clicked();

    void on_delete_button_clicked();

    void on_open_button_clicked();

    void on_create_button_clicked();

private:
    Ui::decklist *ui;
};

#endif // DECKLIST_H
