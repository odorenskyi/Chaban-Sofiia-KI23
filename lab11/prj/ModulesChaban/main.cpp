#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <codecvt>
#include "ModulesChaban.h"

using namespace std;

// Функція для відображення реєстру
void displayRegistry(const vector<Record>& registry) {
    for (const auto& record : registry) {
        cout << record.index << " "
             << record.region << " "
             << record.locality << " "
             << record.street << endl;
    }
}
// Функція для збереження даних у файл
void saveData(const vector<Record>& data, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& record : data) {
            outFile << record.index << " "
                    << record.region << " "
                    << record.locality << " "
                    << record.street << endl;
        }
        outFile.close();
        cout << "Реєстр збережено у файл." << endl;
    } else {
        cout << "Неможливо відкрити файл для запису: " << filename << endl;
    }
}
