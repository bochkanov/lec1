#ifndef LEC1_LIBRARY_H
#define LEC1_LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>

class Library{
public:

    Library(const std::vector<Books>& vec_books_);

    std::vector<Books> getBooks () const;

    void setBooks (const std::vector<Books>& vec_books_);

    void InsertBook (const Books& book);

    void DeleteBook (const Books& book);

    std::vector<Books> SearchByAuthor (const std::string& author) const;

    std::vector<Books> SearchByYear (const int& year) const;

    std::vector<Books> SearchByTitle (const std::string& title) const;

    void DeleteAuthor (const std::string& author);

private:

    std::vector<Books> vec_books;
};

#endif //LEC1_LIBRARY_H
