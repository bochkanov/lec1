#ifndef LEC1_BOOK_H
#define LEC1_BOOK_H

#include <string>

class Books {

private:
    std::string title;
    std::string author;
    int year;

public:

    std::string getTitle();
    std::string getAuthor();
    int getYear();

    Books(std::string title_, std::string author_, int year_);


};

#endif //LEC1_BOOK_H
