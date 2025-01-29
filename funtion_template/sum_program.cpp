//function template

#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b){
    T result;
    result = a + b;
    return result;
}

int main () {
    int i = 5, j = 6, k;
    double e = 2.0, f = 1.2, g;
    k = sum<int>(i, j);
    g = sum<double>(e, f);
    cout << "This is " << k << "\n";
    cout << "This is " << g << "\n";
}