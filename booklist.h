#ifndef BOOKLIST_H
#define BOOKLIST_H

#include <QList>
#include <book.h>

class BookList
{
public:
    BookList();
    void add(Book b);
    QList<Book> getList() const;
private:
    QList<Book> list;
};

#endif // BOOKLIST_H
