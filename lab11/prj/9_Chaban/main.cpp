#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "struct_type_project_9.h"
#include "ModulesChaban.h"
#include "MoudelsKozyr.h"
#include "MoudelsBogdanov.h"

using namespace std;

int main() {
    string filename = "index.txt";
    vector<Record> registry = loadData(filename);

    // Основний цикл програми
    int option;
    do {
        cout << "Меню:\n";
        cout << "1. Додати запис\n";
        cout << "2. Видалити запис\n";
        cout << "3. Шукати запис за поштовим кодом\n";
        cout << "4. Завантажити реєстр з файлу\n";
        cout << "5. Вивести реєстр\n";
        cout << "6. Зберегти реєстр\n";
        cout << "7. Вийти з програми\n";
        cout << "Виберіть опцію: ";
        cin >> option;

        switch (option) {
            case 1:
                addRecord(registry);
                break;
            case 2:
                deleteRecord(registry);
                break;
            case 3:
                searchRecord(registry);
                break;
            case 4:
                registry = loadData(filename);
                cout << "Реєстр перезавантажено з файлу." << endl;
                break;
            case 5:
                displayRegistry(registry);
                break;
            case 6:
                saveData(registry, filename);
                break;
            case 7:
                cout << "Вихід з програми." << endl;
                break;
            default:
                cout << "Неправильна опція. Спробуйте ще раз." << endl;
                break;
        }
    } while (option != 7);

    return 0;
}
