#include <iostream> 
#include <string>   

using namespace std; 

struct BankAccount {
    int accountNumber;
    string ownerName;
    double balance;
};

void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;
    setlocale(LC_ALL, "Russian");

    cout << "Введите номер счёта: ";
    cin >> account.accountNumber;
    cin.ignore(); 

    cout << "Введите имя владельца: ";
    getline(cin, account.ownerName);

    cout << "Введите баланс: ";
    cin >> account.balance;

    double newBalance;
    cout << "Введите новый баланс: ";
    cin >> newBalance;

    updateBalance(account, newBalance);

    cout << "Ваш аккаунт: " << account.ownerName << "  Номер счета: "
        << account.accountNumber << "  Обновлённый баланс: "
        << account.balance << endl;

    return 0;
}

