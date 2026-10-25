#include <iostream>
using namespace std;

namespace ns1{
    int value(){
        return 7;
    }
}

namespace ns2{
    const double x = 1000;
    double value(){
        return 5 * x;
    }
}

int main(){
    cout << ns1::value() << '\n';                                 // Access function from ns1
    cout << ns2::value() << '\n';         //For Quick Revision ->// Access function from ns2
    cout << ns2::x << '\n';                                     // Access variable from ns2
    return 0;
}
