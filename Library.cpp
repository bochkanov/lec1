#include "Library.h"
#include <iostream>
#include <vector>
#include <string>

Library::Library(const std::vector<Books>& vec_books_) : vec_books(vec_books_) {};

std::vector<Books> Library::getBooks () const { return vec_books; };

void Library::setBooks (const std::vector<Books>& vec_books_) { vec_books = vec_books_; };

void Library::InsertBook (const Books& book) {
    vec_books.push_back(book);
}

void Library::DeleteBook (const Books& book) {
    for (int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getTitle() == book.getTitle() &&
            vec_books[i].getAuthor() == book.getAuthor() &&
            vec_books[i].getYear() == book.getYear())
            vec_books.erase(vec_books.begin()+i);
    }
}

std::vector<Books> Library::SearchByAuthor (const std::string& author) const {
    std::vector<Books> search_result;
    for(int i = 0; i < vec_books.size(); ++i)
        if (vec_books[i].getAuthor() == author)
            search_result.push_back(vec_books[i]);
    return search_result;
}

std::vector<Books> Library::SearchByYear (const int& year) const {
    std::vector<Books> search_result;
    for(int i = 0; i < vec_books.size(); ++i)
        if (vec_books[i].getYear() == year)
            search_result.push_back(vec_books[i]);
    return search_result;
}

std::vector<Books> Library::SearchByTitle (const std::string& title) const {
    std::vector<Books> search_result;
    for(int i = 0; i < vec_books.size(); ++i)
        if (vec_books[i].getTitle() == title)
            search_result.push_back(vec_books[i]);
    return search_result;
}

void Library::DeleteAuthor (const std::string& author) {
    for (int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getAuthor() == author)
            vec_books.erase(vec_books.begin()+i);
    }
}
