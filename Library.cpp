#include "Library.h"
#include <iostream>
#include <vector>
#include <string>

std::vector<Books> vec_books;

void Library::InsertBook (Books book) {
    vec_books.push_back(book);
}

void Library::DeleteBook (Books book) {
    for (int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getTitle() == book.getTitle() &&
            vec_books[i].getAuthor() == book.getAuthor() &&
            vec_books[i].getYear() == book.getYear())
            vec_books.erase(vec_books.begin()+i);
    }
}

std::vector<std::string> Library::SearchByAuthor (std::string author) {
    std::vector<std::string> search_result;
    for(int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getAuthor() == author) {
            search_result.push_back(vec_books[i].getTitle() + " " + vec_books[i].getAuthor()
                                    + " " + std::to_string(vec_books[i].getYear()));
        }
    }
    return search_result;
}

std::vector<std::string> Library::SearchByYear (int year) {
    std::vector<std::string> search_result;
    for(int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getYear() == year)
            search_result.push_back(vec_books[i].getTitle() + " " + vec_books[i].getAuthor()
                                    + " " + std::to_string(vec_books[i].getYear()));
    }
    return search_result;
}

std::vector<std::string> Library::SearchByTitle (std::string title) {
    std::vector<std::string> search_result;
    for(int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getTitle() == title) {
            search_result.push_back(vec_books[i].getTitle() + " " + vec_books[i].getAuthor()
                                    + " " + std::to_string(vec_books[i].getYear()));
        }
    }
    return search_result;
}

void Library::DeleteAuthor (std::string author) {
    for (int i = 0; i < vec_books.size(); ++i) {
        if (vec_books[i].getAuthor() == author)
            vec_books.erase(vec_books.begin()+i);
    }
}
