#ifndef LEC1_BOOK_H
#define LEC1_BOOK_H

#include <string>

class Books {

private:
    std::string title;
    std::string author;
    int year;

public:

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

    Books(const std::string& title_, const std::string& author_, const int& year_);


};

#endif //LEC1_BOOK_H
