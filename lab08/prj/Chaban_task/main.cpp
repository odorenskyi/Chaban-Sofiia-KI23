#include <iostream>
#include "ModulesChaban.h"

void eightone();
void eighttwo(int a, int b);

using namespace std;

int main()
{
    int x, y, a, b;
    system("chcp 65001 & cls");
    cout << "Введіть значення x:";
    cin >> x;
    cout << "Введіть значення y:";
    cin >> y;
    cout << "Введіть значення a:";
    cin >> a;
    cout << "Введіть значення b:";
    cin >> b;
    cout << endl;
    eightone();
    eighttwo(a,b);
    s_calculation(x, y);
    cout << "x у десятковій формі: " << x << endl;
    cout << "y у десятковій формі: " << y << endl;
    cout << "x у шістнадцятковій формі: " << hex << x << endl;
    cout << "y у шістнадцятковій формі: " << hex << y << endl;
    return 0;
}
void eightone(){
    cout << "Чабан Софія ©" << endl;
}

void eighttwo(int a, int b){
    bool result;
    result = b - 32 >= a;
    cout << result << endl;
}
