#include <iostream> // #include <iostream>
#include <string>   // #include <string>

using namespace std; // using namespace std

// Структура для хранения информации о банковском счете
struct BankAccount {
    int accountNumber;
    string ownerName;
    double balance;
};

// Функция для изменения баланса счета
void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;
    setlocale(LC_ALL, "Russian");

    // Ввод данных пользователем
    cout << "Введите номер счёта: ";
    cin >> account.accountNumber;
    cin.ignore(); // Игнорируем лишний перевод строки

    cout << "Введите имя владельца: ";
    getline(cin, account.ownerName);

    cout << "Введите баланс: ";
    cin >> account.balance;

    double newBalance;
    cout << "Введите новый баланс: ";
    cin >> newBalance;

    // Обновление баланса
    updateBalance(account, newBalance);

    // Вывод обновленных данных
    cout << "Ваш аккаунт: " << account.ownerName << "  Номер счета: "
        << account.accountNumber << "  Обновлённый баланс: "
        << account.balance << endl;

    return 0;
}

