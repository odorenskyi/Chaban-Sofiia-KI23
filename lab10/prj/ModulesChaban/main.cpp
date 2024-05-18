#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include <string>
#include <fstream>
#include <locale>
#include <ctime>
#include <cctype>
#include <vector>
#include <cstring>

using namespace std;

float s_calculation(int x, int y)

{
    system("chcp 65001 > nul");
    float S;
    if (y > 0) {
    S = pow(x,2)-pow(y,3)+(sqrt((pow(y,x))-3.141592653589793));
    setprecision(1);
    fixed;
    return S;
    }
    else {
    return -1;
    }
}

void gas(int index)
{
    system("chcp 65001 > nul");
    if (index<0) {
        cout << "Такого значення бути не може" << endl;
    }
    if (index<208) {
        cout << "Ваш тариф 1,299 грн" << endl;
    }
    if (index>=208&&index<=500) {
        cout << "Ваш тариф 1,788 грн" << endl;
    }
    if (index>500) {
        cout << "Ваш тариф 3,645 грн" << endl;
    }
}

void shoes(float sizes)
{
    system("chcp 65001 > nul");
    if (sizes==20.5){
        cout << "Розмір в Україні - відсутній , в Великобританії – 1" << endl;
    }
    else if (sizes==21) {
        cout << "Розмір в Україні - відсутній , в Великобританії – 1,5" << endl;
    }
    else if (sizes==21.5) {
        cout << "Розмір в Україні - відсутній , в Великобританії – 2" << endl;
    }
    else if (sizes==22){
        cout << "Розмір в Україні - відсутній , в Великобританії – 2.5" << endl;
    }
    else if (sizes==22.5){
        cout << "Розмір в Україні - відсутній , в Великобританії – 3" << endl;
    }
    else if (sizes==23){
        cout << "Розмір в Україні - 35 , в Великобританії – 4" << endl;
    }
    else if (sizes==23.5){
        cout << "Розмір в Україні - 36 , в Великобританії – 4.5" << endl;
    }
    else if (sizes==24){
        cout << "Розмір в Україні - 36.5 , в Великобританії – 5" << endl;
    }
    else if (sizes==24.5){
        cout << "Розмір в Україні - 37 , в Великобританії – 5.5" << endl;
    }
    else if (sizes==25){
        cout << "Розмір в Україні - 38 , в Великобританії – 6" << endl;
    }
    else if (sizes==25.5) {
        cout << "Розмір в Україні - 38/39 , в Великобританії – 6.5" << endl;
    }
    else if (sizes==26){
        cout << "Розмір в Україні - 40.5 , в Великобританії – 7.5" << endl;
    }
    else if (sizes==26.5){
        cout << "Розмір в Україні - 41 , в Великобританії – 8" << endl;
    }
    else if (sizes==27){
        cout << "Розмір в Україні - 41.5 , в Великобританії – 8.5" << endl;
    }
    else if (sizes==27.5){
        cout << "Розмір в Україні - 42 , в Великобританії – 9" << endl;
    }
    else if (sizes==28){
        cout << "Розмір в Україні -  42/43, в Великобританії – 9.5" << endl;
    }
    else if (sizes==28.5){
        cout << "Розмір в Україні - 43 , в Великобританії – 10" << endl;
    }
    else if (sizes==29){
        cout << "Розмір в Україні - 44 , в Великобританії – 11" << endl;
    }
    else if (sizes==29.5){
        cout << "Розмір в Україні - 45 , в Великобританії – 11.5" << endl;
    }
    else if (sizes==30){
        cout << "Розмір в Україні - 46 , в Великобританії – 12" << endl;
    }
    else if (sizes==30.5){
        cout << "Розмір в Україні - 47 , в Великобританії – 12.5" << endl;
    }
    else if (sizes==31){
        cout << "Розмір в Україні - 47.5 , в Великобританії – 13" << endl;
    }
    else if (sizes==31.5){
        cout << "Розмір в Україні - 48 , в Великобританії – 14" << endl;
    }
    else if (sizes==32){
        cout << "Розмір в Україні - 48.5 , в Великобританії – 14.5" << endl;
    }
    else{
        cout << "Такого розміру немає" << endl;
    }
}

int bit(int N){
    system("chcp 65001 > nul");
    if (N < 0 || N > 21359010) {
        cout << "Число вийшло за заданий діапазон (0 - 21359010)" << endl;
        return 1;
    }
    int bin = 0, k = 1;
    while (N)
    {
        bin += (N%2) * k;
        k *= 10;
        N/=2;

    }
    string str = to_string(bin);
    int one = count(str.begin(), str.end(), '1');
    int zero = count(str.begin(), str.end(), '0');
    reverse(str.begin(), str.end());
    if (str.length() < 12) {
        cout << "Недостатньо бітів" << endl;
        return 1;
    }
    switch (str[11]) {
        case '0':
            cout << "Кількість двійкових нулів: " << zero << endl;
            break;
        case '1':
            cout << "Сума двійкових одиниць: " << one << endl;
            break;
    }
    return 0;
}

void task10_1(const char* filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Неможливо відкрити файл: " << filename << endl;
        return;
    }

    cout << "Авторська інформація: " << "Софія Чабан ЦНТУ Кропивницький 2024" << endl;

    char line[1000];
    cout << "Символи верхнього регістру:" << endl;
    while (file.getline(line, sizeof(line))) {
        int len = strlen(line);
        for (int i = 0; i < len; ++i) {
            if (isupper(line[i])) {
                cout << line[i];
            }
        }
        if (line[len - 1] == '.') {
            cout << " Так" << endl;
        } else {
            cout << " Ні" << endl;
        }
    }

    file.clear();
    file.seekg(0, ios::beg);
    cout << "Вірш у вигляді одного стовпчика з чотирьох рядків:" << endl;
    int lineCount = 0;
    while (file.getline(line, sizeof(line))) {
        cout << line << endl;
        ++lineCount;
        if (lineCount % 4 == 0) {
            cout << endl;
        }
    }

    file.close();
}

void task10_2(const char* filename) {
    ifstream file(filename, ios::binary | ios::ate);
    if (!file.is_open()) {
        cerr << "Неможливо відкрити файл " << filename << endl;
        return;
    }

    streampos fileSize = file.tellg();
    if (fileSize < 0) {
        cerr << "Помилка отримання розміру файлу" << endl;
        file.close();
        return;
    }

    int fileSizeKB = fileSize / 1024;

    file.close();

    ofstream outfile(filename, ios_base::app);
    if (!outfile.is_open()) {
        cerr << "Неможливо відкрити файл " << filename << " для додавання" << endl;
        return;
    }

    outfile << "Розмір файлу: " << fileSizeKB << " KB" << endl;

    cout << "Розмір файлу, доданого до " << filename << endl;
    fstream filewrite(filename, ios_base::app);
    time_t seconds = time(NULL);
    tm *localeTime = localtime(&seconds);
    filewrite << localeTime->tm_hour << ":" << localeTime->tm_min << ":" << localeTime->tm_sec << "  ";
    filewrite << 1900 + localeTime->tm_year;
    filewrite.close();
}


void task10_3(int x, int y, int b, const char* file_name)
{
    float res_calc = s_calculation(x, y);
    int bin = 0, k = 1;
    while (b)
    {
        bin += (b%2) * k;
        k *= 10;
        b/=2;

    }
    string b_in_bin = to_string(bin);

    fstream filewrite(file_name, ios_base::app);
    if (res_calc == -1)
    {
        filewrite << "\n" << "Неможливо визначити, y має бути додатнім" << "\n";
    }
    else
    {
        filewrite << "\n" << "S: " << setprecision(1) << fixed << res_calc <<"\n";
    }
    filewrite << "В у двійковій: " << b_in_bin <<"\n";
    filewrite.close();
}
