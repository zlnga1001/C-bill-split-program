//operating with variable

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

/* testing how this work*/
int main() {
    cout << "Hello World\n"; //this is line comment
    cout << "\tI'm a C++ program\n";
    int a = 3;
    int num{ }; //→ This declares an integer variable num and value-initializes it to 0.
    int c(4);
    int res;
    int b(5);

    a = a + b;
    res = a - c;
    cout << res;
    cout << NEWLINE;
    string mystring;
    mystring = " looks like\n";

    double r = 5.0;
    double circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    cout << mystring;
    cout << "Output Sentence";
    cout << "This is a testing version " << "to be how this code" << mystring;

    string name;
    cout << "Please enter your name\n";
    cin >> name;
    cout << "Hello " << name << "\n";
    

    string mystr;
    cout << "What u doin in your freetime broccoli?";
    getline (cin, mystr);
    cout << "Hello" << mystr << ".\n";
    cout << "What is your fav color peach?";
    getline (cin, mystr);
    cout << "You like " << mystr << ".\n";

    string priceStr;
    float price = 0;
    int quant = 0;

    cout << "Enter price:";
    getline(cin, priceStr);
    stringstream(priceStr) >> price;
    cout << "Enter quantity";
    getline(cin, priceStr);
    stringstream(priceStr) >> quant;
    cout << "The price is " << price << " and the quantity is " << quant << NEWLINE;
    return 0;
}