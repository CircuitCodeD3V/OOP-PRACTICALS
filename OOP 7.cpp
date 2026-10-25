#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char text[100];

public:
    MyString() {
        text[0] = '\0';
        cout << "Default constructor called" << endl;
    }

    MyString(const char value[]) {
        strcpy(text, value);
        cout << "Parameterized constructor called" << endl;
    }

    void Accept() {
        cout << "Enter a string: ";
        cin.getline(text, 100);
    }

    void Display() {
        cout << "String is: " << text << endl;
    }

    ~MyString() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyString O1;

    O1.Accept();
    O1.Display();

    MyString O2("Hello C++");
    O2.Display();

    return 0;
}
