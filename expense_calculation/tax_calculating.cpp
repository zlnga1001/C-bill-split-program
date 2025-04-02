#include <iostream>
#include <map>
#include <string>

/*
Objective: Calculate the tax and tip of a bill when hanging out with friends
There are 2 cases:
1. Split evenly
2. Spit by individual //make sure only the one who paid is required 


fuckkk most of the time tax is number LOLLLLL

*/


double getDoubleValueFromUser(){
    double intput_amount;

    std::cout << " Enter the amount in double\n";
    std::cin >> intput_amount;

    return intput_amount;
}

double getIntValueFromUser(){
    int input;
    std::cout << " Enter the amount in integer\n";
    std::cin >> input;

    return input;
}


int main(){

    //declare variables for the program hehehe
    int option;
    double bill;
    double tax;
    double tip;
    double receipt_total_bill;
    double individual_bill;
    int people;

    bool isQuit = true;

    std::cout << "How many people join?";
    people = getIntValueFromUser();


    std::cout << "What is your total bill amount without tax and tip (in dollars)?";
    bill = getDoubleValueFromUser();

            
    std::cout << "How much tax does this bill take, in percentage?";
    tax = getDoubleValueFromUser();
            
     //this case did not count for what if the tip is not in percentage
    std::cout << "How much tip did we choose to pay in percentage?";
    tip = getIntValueFromUser();


    receipt_total_bill = bill + (tax*bill)/100 + (tip*bill)/100 ;
    std::cout << "The total bill is " << receipt_total_bill << " dollars\n";

    std::cout << "What options best describe this bill splitting? Enter your choice (number only)\n";
    std::cout << "1. Split evenly\n";
    std::cout << "2. Spit by individual\n";

    std::cin >> option;
    switch (option) {
        case 1:
        //splt the bill evenly => asking for total bill, tax, tip, and number of people

            individual_bill = receipt_total_bill/people;

            std::cout << "Each person should pay " << individual_bill << " dollars";
            break; 

        case 2:
            //split by individual => asking for total bill, tax, tip, and number of people
            //asking for each person's bill, using for loop to ask for each person's bill
            //I will use a hashmap, storing each person name with their bill
            // map<std::string, double> person_bill


            //declare variables for calculating each person's bill
            double total_bill = 0;
            std::map<std::string, double> person_bill;
            std::string name;
            

            for(int i = 0; i < people; i++){
                std::cout << i+1 << ". Name: " << std::endl;
                std::cin >> name;
                std::cout << "Bill (in dollars): " << std::endl;
                std::cin >> individual_bill;
                //hashmap map name with individual bill
                individual_bill = individual_bill + (individual_bill * tax)/100 + (tip*individual_bill)/100;
                person_bill[name] = individual_bill;
                total_bill += individual_bill; //khi ma co total moi bill roi thi compare voi cai total bill trong recipt co
            }

            if(total_bill != receipt_total_bill){
                std::cout << "The total bill in the receipt is not equal to the total bill we calculated\n";
                std::cout << total_bill;
                std::cout << receipt_total_bill;

                
                //thằng nào đó sinh nhật hay gì đó được bao so the number of people who pay the bill will be different and there should be extra added on to each bill
                std::cout << "Split the rest of the bill by individual \n";
                total_bill = receipt_total_bill - total_bill;
                std::cout << "The rest of the bill is " << total_bill << " dollars\n";
                std::cout << "Split the rest of the bill by individual \n";
                double individual_bill_after_split = total_bill/people; 
            
                //recalculate each person's bill
                for(auto &pair : person_bill){
                    pair.second += individual_bill_after_split;
                    std::cout << pair.first << " should now pay " << pair.second << " dollars\n";
                }

            }

            for(auto &pair : person_bill){
                std::cout << pair.first << " should now pay " << pair.second << " dollars\n";
            }
            break;
        }
    }

