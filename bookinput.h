#ifndef BOOKINPUT_H
#define BOOKINPUT_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QDate>
#include "bookwriter.h"

namespace Ui {
class BookInput;
}

class BookInput : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookInput(QWidget *parent = 0);
    ~BookInput();

private slots:
    void on_pushButton_save_clicked();

private:
    Ui::BookInput *ui;
    void readFromGui();
    void createAndSaveBook(QString title, QStringList authorsList, QString isbn, QDate publicationDate);
    void clear();
    BookWriter bookWriter;
};

#endif // BOOKINPUT_H
