
#include <iostream> //this helps to use cout, cin 

int main()
{
    int integer;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << "You entered " << integer << "\n";
    //std::cout << "Double that number is " << integer*2 << "\n"; //this is not a really good approach because it's gonan change uer's input

    int doublenum = integer * 2; 
    std::cout << "Double that number is " << doublenum << "\n";
    std::cout << "User input number is " << integer << "\n";

    return 0;
}


