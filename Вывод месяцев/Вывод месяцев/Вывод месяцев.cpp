#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 

    const string months[] = {
        "", "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    int monthNumber;

    while (true) {
        cout << "Введите номер месяца: ";
        cin >> monthNumber;

        if (monthNumber == 0) {
            cout << "До свидания!" << endl;
            break;
        }

        if (monthNumber >= 1 && monthNumber <= 12) {
            cout << months[monthNumber] << endl;
        }
        else {
            cout << "Неправильный номер!" << endl;
        }
    }

    return 0;
}

