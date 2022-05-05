#include "bookwriter.h"

#include <QFile>
#include <QTextStream>

QString BookWriter::filename = "book_database.txt";

BookWriter::BookWriter()
{
}

void BookWriter::write(Book b)
{
    QFile file(filename);
    file.open(QIODevice::Append);

    QString alldata;

    alldata.append(QString(b.getTitle() + "# "));
    for(int i=0; i<b.getAuthors().length(); i++){
        alldata.append(b.getAuthors().at(i));
        if (i<b.getAuthors().length()-1)
        {
        alldata.append(";");
        }
    }
    alldata.append("# ");
    alldata.append(QString(b.getIsbn()) + "# ");
    QString dateInput = b.getPublicationDate().toString();
    alldata.append(QString(dateInput));
    alldata.append("\n");

    QTextStream toFile(&file);
    toFile << alldata;
    file.close();
}



