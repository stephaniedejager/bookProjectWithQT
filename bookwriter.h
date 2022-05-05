#ifndef BOOKWRITER_H
#define BOOKWRITER_H

#include "book.h"
#include <QString>
#include <QStringList>
#include <QDate>

class BookWriter
{
public:
    BookWriter();
    void write(Book b);

private:
    static QString filename;
};

#endif // BOOKWRITER_H
