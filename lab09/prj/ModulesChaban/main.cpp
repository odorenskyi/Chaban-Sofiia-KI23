#include <iostream>
#include <cmath>
#include <iomanip>
#include <bits/stdc++.h>
#include <string>


using namespace std;

void s_calculation(int x, int y)

{
    system("chcp 65001 > nul");
    float S;
    if (y > 0) {
    S = pow(x,2)-pow(y,3)+(sqrt((pow(y,x))-3.141592653589793));
    cout << "S: " << setprecision(1) << fixed << S << endl;
    }
    else {
    cout << "��������� ���������, y �� ���� �������" << endl;
    }
}

void gas(int index)
{
    system("chcp 65001 > nul");
    if (index<0) {
        cout << "������ �������� ���� �� ����" << endl;
    }
    if (index<208) {
        cout << "��� ����� 1,299 ���" << endl;
    }
    if (index>=208&&index<=500) {
        cout << "��� ����� 1,788 ���" << endl;
    }
    if (index>500) {
        cout << "��� ����� 3,645 ���" << endl;
    }
}

void shoes(float sizes)
{
    system("chcp 65001 > nul");
    if (sizes==20.5){
        cout << "����� � ����� - ������� , � ������������ � 1" << endl;
    }
    else if (sizes==21) {
        cout << "����� � ����� - ������� , � ������������ � 1,5" << endl;
    }
    else if (sizes==21.5) {
        cout << "����� � ����� - ������� , � ������������ � 2" << endl;
    }
    else if (sizes==22){
        cout << "����� � ����� - ������� , � ������������ � 2.5" << endl;
    }
    else if (sizes==22.5){
        cout << "����� � ����� - ������� , � ������������ � 3" << endl;
    }
    else if (sizes==23){
        cout << "����� � ����� - 35 , � ������������ � 4" << endl;
    }
    else if (sizes==23.5){
        cout << "����� � ����� - 36 , � ������������ � 4.5" << endl;
    }
    else if (sizes==24){
        cout << "����� � ����� - 36.5 , � ������������ � 5" << endl;
    }
    else if (sizes==24.5){
        cout << "����� � ����� - 37 , � ������������ � 5.5" << endl;
    }
    else if (sizes==25){
        cout << "����� � ����� - 38 , � ������������ � 6" << endl;
    }
    else if (sizes==25.5) {
        cout << "����� � ����� - 38/39 , � ������������ � 6.5" << endl;
    }
    else if (sizes==26){
        cout << "����� � ����� - 40.5 , � ������������ � 7.5" << endl;
    }
    else if (sizes==26.5){
        cout << "����� � ����� - 41 , � ������������ � 8" << endl;
    }
    else if (sizes==27){
        cout << "����� � ����� - 41.5 , � ������������ � 8.5" << endl;
    }
    else if (sizes==27.5){
        cout << "����� � ����� - 42 , � ������������ � 9" << endl;
    }
    else if (sizes==28){
        cout << "����� � ����� -  42/43, � ������������ � 9.5" << endl;
    }
    else if (sizes==28.5){
        cout << "����� � ����� - 43 , � ������������ � 10" << endl;
    }
    else if (sizes==29){
        cout << "����� � ����� - 44 , � ������������ � 11" << endl;
    }
    else if (sizes==29.5){
        cout << "����� � ����� - 45 , � ������������ � 11.5" << endl;
    }
    else if (sizes==30){
        cout << "����� � ����� - 46 , � ������������ � 12" << endl;
    }
    else if (sizes==30.5){
        cout << "����� � ����� - 47 , � ������������ � 12.5" << endl;
    }
    else if (sizes==31){
        cout << "����� � ����� - 47.5 , � ������������ � 13" << endl;
    }
    else if (sizes==31.5){
        cout << "����� � ����� - 48 , � ������������ � 14" << endl;
    }
    else if (sizes==32){
        cout << "����� � ����� - 48.5 , � ������������ � 14.5" << endl;
    }
    else{
        cout << "������ ������ ����" << endl;
    }
}

int bit(int N){
    system("chcp 65001 > nul");
    if (N < 0 || N > 21359010) {
        cout << "����� ������ �� ������� ������� (0 - 21359010)" << endl;
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
        cout << "����������� ���" << endl;
        return 1;
    }
    switch (str[11]) {
        case '1':
            cout << "ʳ������ �������� ����: " << zero << endl;
            break;
        case '0':
            cout << "���� �������� �������: " << one << endl;
            break;
    }
    return 0;
}


