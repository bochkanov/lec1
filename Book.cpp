#include "Book.h"
#include <string>

std::string Books::getTitle() const { return title; }

std::string Books::getAuthor() const { return author; }

int Books::getYear() const { return year; }

Books::Books(const std::string& title_, const std::string& author_, const int& year_) :
             title(title_), author(author_), year(year_) {};