#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LibraryItem {
protected:
    string title;
public:
    LibraryItem(const string& t) : title(t) {}
    virtual void displayInfo() = 0;
    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
private:
    string author;
public:
    Book(const string& t, const string& a) : LibraryItem(t), author(a) {}
    void displayInfo() {
        cout << "Book: '" << title << "' by " << author << endl;
    }
};

class Magazine : public LibraryItem {
private:
    int issueNumber;
public:
    Magazine(const string& t, int i) : LibraryItem(t), issueNumber(i) {}
    void displayInfo() {
        cout << "Magazine: '" << title << "', Issue #" << issueNumber << endl;
    }
};

class DVD : public LibraryItem {
private:
    int durationMinutes;
public:
    DVD(const string& t, int d) : LibraryItem(t), durationMinutes(d) {}
    void displayInfo() {
        cout << "DVD: '" << title << "', Duration: " << durationMinutes << " mins" << endl;
    }
};

int main() {
    vector<LibraryItem*> library;
    library.push_back(new Book("The C++ Standard", "Bjarne Stroustrup"));
    library.push_back(new Magazine("Tech Today", 45));
    library.push_back(new DVD("Polymorphism Explained", 90));

    cout << "Displaying all Library Item details:" << endl;
    for (const auto& item : library) {
        item->displayInfo();
    }

    for (auto& item : library) {
        delete item;
    }
    return 0;

