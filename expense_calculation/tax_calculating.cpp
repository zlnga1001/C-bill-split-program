#include <iostream>

// void foo()
// {
//     main(); // Compile error: main not allowed to be called explicitly
// }

// void main() // Compile error: main not allowed to have non-int return type
// {
//     foo();
// }

double getDoubleValueFromUser(){
    double intput_amount;
    std::cout << "Enter the amount\n";
    std::cin >> intput_amount;

    return intput_amount;
}

double getIntValueFromUser(){
    int input;
    std::cout << "Enter the amount\n";
    std::cin >> input;

    return input;
}

void casesForBillSplitting(){
    std::cout << "What options best describe this bill splitting? ";
    std::cout << "1) Split evenly";
    std::cout << "2) Spit by bill";
}

int main(){


    double total_bill;
    int total_people;

    std::cout << "What is your total bill amount? \n";
    total_bill = getDoubleValueFromUser();


    std::cout << "How many people split the bill? \n";
    total_people = getIntValueFromUser();

    



}