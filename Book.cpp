#include "Book.h"
#include <string>

std::string Books::getTitle() { return title; }

std::string Books::getAuthor() { return author; }

int Books::getYear() { return year; }

Books::Books(std::string title_, std::string author_, int year_) {
    title = title_;
    author = author_;
    year = year_;
}