#include <iostream>
using namespace std;

class Complex {
private:                         // By default, C++ treats it as private.
    double real, img;

public:                          // Inline functions
    void read() {
        cout << "Enter The Real Part: ";
        cin >> real;
        cout << "Enter The Imaginary Part: ";
        cin >> img;
    }

    void display() {
        cout << real << "+" << img << "i";
    }

    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
};

Complex Complex::operator+(Complex c) {
    Complex sum;
    sum.real = real + c.real;
    sum.img = img + c.img;
    return sum;
}

Complex Complex::operator-(Complex c) {
    Complex sub;
    sub.real = real - c.real;
    sub.img = img - c.img;
    return sub;
}

Complex Complex::operator*(Complex c) {
    Complex mul;
    mul.real = (real * c.real) - (img * c.img);
    mul.img = (real * c.img) + (img * c.real);
    return mul;
}

Complex Complex::operator/(Complex c) {
    Complex div;
    double denominator = (c.real * c.real) + (c.img * c.img);

    if (denominator == 0) {
        cout << "Division by zero is not possible." << endl;
        div.real = 0;
        div.img = 0;
    }
    else {
        div.real = ((real * c.real) + (img * c.img))
                   / denominator;

        div.img = ((img * c.real) - (real * c.img))
                  / denominator;
    }

    return div;
}

int main() {
    Complex c, C1, ans;

    cout << "Enter First Complex Number:" << endl;
    c.read();

    cout << "\nEnter Second Complex Number:" << endl;
    C1.read();

    ans = c + C1;
    cout << "\nSum is: ";
    ans.display();

    ans = c - C1;
    cout << "\nSubtraction is: ";
    ans.display();

    ans = c * C1;
    cout << "\nMultiplication is: ";
    ans.display();

    ans = c / C1;
    cout << "\nDivision is: ";
    ans.display();

    return 0;
}
