#include <iostream>
#include <string>

using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
    int apartmentNumber;
    int postalCode;
};

void printAddress(const Address& address) {

    setlocale(LC_ALL, "Russian");
    
    cout << "Город: " << address.city << endl;
    cout << "Улица: " << address.street << endl;
    cout << "Номер дома: " << address.houseNumber << endl;
    cout << "Номер квартиры: " << address.apartmentNumber << endl;
    cout << "Индекс: " << address.postalCode << endl;
    cout << endl;
}

int main() {
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

    printAddress(address1);
    printAddress(address2);

    return 0;
}
