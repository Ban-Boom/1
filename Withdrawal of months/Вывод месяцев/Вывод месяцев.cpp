#include <iostream>

enum class Month {
    NONE = 0,
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

const char* monthNames[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
    int input;
    while (true) {
        std::cout << "Enter the month number : ";
        std::cin >> input;

        if (input == 0) {
            std::cout << "Goodbye" << std::endl;
            break;
        }

        Month month = static_cast<Month>(input);
        if (month >= Month::JANUARY && month <= Month::DECEMBER) {
            std::cout << monthNames[input] << std::endl;
        }
        else {
            std::cout << "Wrong number!" << std::endl;
        }
    }
    return 0;
}


