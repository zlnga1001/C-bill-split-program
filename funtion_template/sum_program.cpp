//function template

#include <iostream>
using namespace std;

namespace foo{
    int value(){
        return 5;
    }
}

namespace bar{
    const double pi = 3.1416;
    double value() {
        return 2 * pi;
    }
}

template <class T>
T sum(T a, T b){
    T result;
    result = a + b;
    return result;
}

int x; // static storage -  global variables

int main()
{
    int i = 5, j = 6, k; //automatic storage - local variables
    double e = 2.0, f = 1.2, g;
    k = sum<int>(i, j);
    g = sum<double>(e, f);
    cout << "This is " << k << "\n";
    cout << "This is " << g << "\n";
    cout << foo::value() << "\n";
    cout << bar::value() << "\n";
}