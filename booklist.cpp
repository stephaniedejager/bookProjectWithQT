#include "booklist.h"

BookList::BookList()
{
}

void BookList::add(Book b)
{
    list.append(b);
}

QList<Book> BookList::getList() const
{
    return list;
}

