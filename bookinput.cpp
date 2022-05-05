#include "bookinput.h"
#include "ui_bookinput.h"
#include "book.h"
#include "bookwriter.h"
#include <QMessageBox>

BookInput::BookInput(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookInput)
{
    ui->setupUi(this);
    ui->dateEditPublicationDate->setDate(QDate::currentDate());
}

BookInput::~BookInput()
{
    delete ui;
}

void BookInput::on_pushButton_save_clicked()
{
    readFromGui();
}

void BookInput::readFromGui()
{
    QString title = ui->lineEditTitle->text();
    QString authors = ui->lineEditAuthors->text();
    QString isbn = ui->lineEditIsbn->text();
    QDate publicationDate = ui->dateEditPublicationDate->date();

    if(!title.isEmpty() && !authors.isEmpty() && !isbn.isEmpty() && !publicationDate.isNull())
    {
        QStringList authorsList = authors.split(",");
        createAndSaveBook(title, authorsList, isbn, publicationDate);
        clear();
    }
    else
    {
        QMessageBox::warning(0, "Book Information Invalid", "Please enter all the necessary information");
    }
}

void BookInput::createAndSaveBook(QString title, QStringList authorsList, QString isbn, QDate publicationDate)
{
    Book b;
    b.setTitle(title);
    b.setAuthors(authorsList);
    b.setIsbn(isbn);
    b.setPublicationDate(publicationDate);

    bookWriter.write(b);

    QMessageBox::information(0,"Book Information", "Book saved");
}

void BookInput::clear()
{
    ui->lineEditTitle->clear();
    ui->lineEditAuthors->clear();
    ui->lineEditIsbn->clear();
    ui->dateEditPublicationDate->setDate(QDate::currentDate());
}
