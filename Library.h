#ifndef LEC1_LIBRARY_H
#define LEC1_LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>

class Library{
public:

    std::vector<Books> vec_books;

    void InsertBook (Books book);

    void DeleteBook (Books book);

    std::vector<std::string> SearchByAuthor (std::string author);

    std::vector<std::string> SearchByYear (int year);

    std::vector<std::string> SearchByTitle (std::string title);

    void DeleteAuthor (std::string author);

};

#endif //LEC1_LIBRARY_H
