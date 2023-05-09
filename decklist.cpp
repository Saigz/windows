#include "decklist.h"
#include "ui_decklist.h"
#include "createdeck.h"

decklist::decklist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::decklist)
{
    ui->setupUi(this);

    QListWidgetItem *test_item = new QListWidgetItem;
    test_item->setText("test_private_item");
    ui->listWidget->insertItem(1, test_item);   // (1 - row) add item in list widget
}

decklist::~decklist()
{
    delete ui;
}

void decklist::on_exit_button_clicked()
{
  // close accept menu
    close(); // close app
}


void decklist::on_delete_button_clicked()
{
    // проверка на уточнение(надо сделать)
    ui->listWidget->takeItem(ui->listWidget->currentRow()); // delete current item
}


void decklist::on_open_button_clicked()
{
    // сделать проверку в дб на приватность else выдать ошибку
    QListWidgetItem curr_item;
    curr_item = *ui->listWidget->takeItem(ui->listWidget->currentRow()); // чет вернули хз что
    curr_item.text(); //  string name of current item (надо как то его дать в некст окно)

}


void decklist::on_create_button_clicked()
{
    createdeck window;
    window.setModal(true);
    window.exec(); // open create deck window
}

