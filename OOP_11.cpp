#include <iostream> 
using namespace std; 
 
template <class T>  // Generic class template 
class Calculator { 
private: 
    T num1, num2; 
 
public: 
    Calculator(T a, T b) {  // Parameterized constructor 
        num1 = a; 
        num2 = b; 
    } 
 
    void displayResult() { 
        cout << "Numbers are: " << num1 << " and " << num2 << "." << endl; 
        cout << "Addition is: " << add() << endl; 
        cout << "Subtraction is: " << subtract() << endl; 
        cout << "Product is: " << multiply() << endl; 
        cout << "Division is: " << divide() << endl; 
    } 
 
    T add() { 
        return num1 + num2; 
    } 
 
    T subtract() { 
        return num1 - num2; 
    } 
 
    T multiply() { 
return num1 * num2; 
} 
T divide() { 
return num1 / num2; 
} 
}; 
int main() { 
Calculator<int> calc1(2, 1);       
// Integer template object 
Calculator<float> calc2(2.4f, 1.2f); // Float template object 
cout << "Int results:" << endl; 
calc1.displayResult(); 
cout << endl << "Float results:" << endl; 
calc2.displayResult(); 
return 0; 
}
