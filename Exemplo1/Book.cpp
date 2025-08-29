#include "Book.hpp"
#include <iostream>
using namespace std;

void print(const string& text) {
    cout << text << endl;
}
void Book::read(){
    print("lendo");
}